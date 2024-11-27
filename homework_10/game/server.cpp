#include <iostream>
#include <cstring>
#include <vector>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

using namespace std;

const int PORT = 8080;
const int SIZE = 3;

class TicTacToe
{
public:
    TicTacToe() : board(SIZE, vector<char>(SIZE, ' ')), currentPlayer('X') {}

    bool makeMove(int row, int col)
    {
        if (row >= 0 && col >= 0 && row < SIZE && col < SIZE && board[row][col] == ' ')
        {
            board[row][col] = currentPlayer;
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
            return true;
        }
        return false;
    }

    bool checkWin()
    {
        for (int i = 0; i < SIZE; ++i)
        {
            if ((board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) ||
                (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i]))
            {
                return true;
            }
        }

        if ((board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
            (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]))
        {
            return true;
        }
        return false;
    }

    bool isDraw()
    {
        for (const auto &row : board)
        {
            for (char cell : row)
            {
                if (cell == ' ')
                {
                    return false;
                }
            }
        }
        return true;
    }

    void displayBoard()
    {
        for (int i = 0; i < SIZE; ++i)
        {
            for (int j = 0; j < SIZE; ++j)
            {
                cout << board[i][j];
                if (j < SIZE - 1)
                    cout << "|";
            }
            cout << endl;
            if (i < SIZE - 1)
                cout << "-----" << endl;
        }
    }

    char getCurrentPlayer() const
    {
        return currentPlayer;
    }

    const vector<vector<char>> &getBoard() const
    {
        return board;
    }

private:
    vector<vector<char>> board;
    char currentPlayer;
};

int main()
{
    int server_fd, new_socket;
    struct sockaddr_in address;
    int opt = 1;
    int addrlen = sizeof(address);
    TicTacToe game;

    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0)
    {
        cerr << "Не удалось создать сокет" << endl;
        return -1;
    }

    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt)))
    {
        cerr << "Настройка сокета завершилась с ошибкой" << endl;
        return -1;
    }

    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0)
    {
        cerr << "Настройка сокета завершилась с ошибкой" << endl;
        return -1;
    }

    if (listen(server_fd, 2) < 0)
    {
        cerr << "Настройка сокета завершилась с ошибкой" << endl;
        return -1;
    }

    cout << "Сервер запущен!" << endl;

    for (int player = 1; player <= 2; ++player)
    {
        if ((new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t *)&addrlen)) < 0)
        {
            cerr << "Не удалось подключиться" << endl;
            return -1;
        }

        cout << "Игрок " << player << " присоединен" << endl;

        while (true)
        {
            game.displayBoard();
            int row, col;

            char prompt[100];
            snprintf(prompt, sizeof(prompt), "Игрок %d, введите координаты (строка и колонка): ", player);
            send(new_socket, prompt, strlen(prompt), 0);

            char buffer[1024] = {0};
            int valread = read(new_socket, buffer, sizeof(buffer));

            char move[100];

            strncpy(move, buffer, valread);
            move[valread] = '\0';
            sscanf(move, "%d %d", &row, &col);

            if (game.makeMove(row, col))
            {
                if (game.checkWin())
                {
                    game.displayBoard();
                    char winMessage[100];
                    snprintf(winMessage, sizeof(winMessage), "Игрок %d победил!", player);
                    send(new_socket, winMessage, strlen(winMessage), 0);
                    break;
                }
                if (game.isDraw())
                {
                    game.displayBoard();
                    const char *drawMessage = "Ничья!";
                    send(new_socket, drawMessage, strlen(drawMessage), 0);
                    break;
                }

                char nextPlayerMessage[100];
                snprintf(nextPlayerMessage, sizeof(nextPlayerMessage), "Ход игрока %d", 3 - player);
                send(new_socket, nextPlayerMessage, strlen(nextPlayerMessage), 0);
            }
            else
            {
                const char *invalidMoveMessage = "Некорректный ход. Попробуйте снова.";
                send(new_socket, invalidMoveMessage, strlen(invalidMoveMessage), 0);
            }
        }

        close(new_socket);
    }

    close(server_fd);
    return 0;
}
