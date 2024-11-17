#include "car.h"

using namespace std;

class Truck : public Car
{
public:
    Truck();
    Truck(string mark, string color, string body_type, double volume, int mileage, bool hasTrailer);
    Truck(string mark, string color, string body_type, double volume, int mileage);
    Truck(string mark, string color, string body_type, double volume);
    Truck(string mark, string color, string body_type);
    Truck(string mark, string color);
    Truck(string mark);

    void setHasTrailer(bool hasTrailer);
    bool getHasTrailer();

    void displayTruck();

private:
    bool _hasTrailer;
};