#pragma once
#include "validator_car.h"

using namespace validatorCar;
using namespace std;

class Car
{
public:
    Car();
    Car(string mark, string color, string body_type, double volume, int mileage);
    Car(string mark, string color, string body_type, double volume);
    Car(string mark, string color, string body_type);
    Car(string mark, string color);
    Car(string mark);

    virtual ~Car();

    bool operator<(Car other);
    bool operator>(Car other);

    Car operator++(int);
    Car operator--(int);
    Car operator++();
    Car operator--();

    friend ostream &operator<<(ostream &out, Car car);

    void setMark(string mark);
    string getMark();

    void setColor(string color);
    string getColor();

    void setBodyType(string body_type);
    string getBodyType();

    void setVolume(double volume);
    double getVolume();

    void setMileage(int mileage);
    int getMileage();

    virtual void printInfo();

private:
    string _mark;
    string _color;
    string _body_type;
    double _volume;
    int _mileage;
};
