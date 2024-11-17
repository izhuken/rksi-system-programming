#pragma once
#include "age.h"
using namespace age;
using namespace std;

class Car
{
public:
    Car() = default;
    Car(const char *mark, const char *color, const char *body_type, double volume, CarMileage mileage);
    Car(const char *mark, const char *color, const char *body_type, double volume);
    Car(const char *mark, const char *color, const char *body_type);
    Car(const char *mark, const char *color);
    Car(const char *mark);

    ~Car();

    bool operator<(Car other);
    bool operator>(Car other);

    Car operator++(int);
    Car operator--(int);
    Car operator++();
    Car operator--();

    friend ostream &operator<<(ostream &out, Car car);

    void setMark(const char *mark);
    const char *getMark();

    void setColor(const char *color);
    const char *getColor();

    void setBodyType(const char *body_type);
    const char *getBodyType();

    void setVolume(double volume);
    double getVolume();

    void setMileage(CarMileage mileage);
    CarMileage getMileage();

    void printInfo();

private:
    const char *mark;
    const char *color;
    const char *body_type;
    double volume;
    CarMileage mileage;
};
