#include <iostream>
#include <cstring>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

using namespace std;

const char *SERVER_IP = "127.0.0.1";
const int PORT = 8080;

int main()
{
    int sock = 0;
    struct sockaddr_in serv_addr;

    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        cerr << "Ошибка создания соединения с сервером" << endl;
        return -1;
    }

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);

    if (inet_pton(AF_INET, SERVER_IP, &serv_addr.sin_addr) <= 0)
    {
        cerr << "Ошибка адреса сервера" << endl;
        return -1;
    }

    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
    {
        cerr << "Ошибка соединения" << endl;
        return -1;
    }

    while (true)
    {
        char buffer[1024] = {0};
        int valread = read(sock, buffer, sizeof(buffer));

        if (valread > 0)
        {
            cout << buffer << endl;
            if (strstr(buffer, "wins") || strstr(buffer, "draw"))
            {
                break;
            }

            int row, col;
            cout << "Сделайте ход (строка и столбец): ";
            cin >> row >> col;

            char move[20];
            snprintf(move, sizeof(move), "%d %d\n", row, col);
            send(sock, move, strlen(move), 0);
        }
    }

    close(sock);
    return 0;
}
