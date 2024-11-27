#include "car.h"

using namespace std;

class Passenger : public Car
{
public:
    Passenger();
    Passenger(string mark, string color, string body_type, double volume, int mileage, int numberOfPassengers);
    Passenger(string mark, string color, string body_type, double volume, int mileage);
    Passenger(string mark, string color, string body_type, double volume);
    Passenger(string mark, string color, string body_type);
    Passenger(string mark, string color);
    Passenger(string mark);

    ~Passenger();

    void setNumberOfPassengers(int numberOfPassengers);
    int getNumberOfPassengers();

    void printInfo();

private:
    int _numberOfPassengers;
};