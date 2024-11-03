#pragma once

class CarClass
{
private:
    const char *brand;
    const char *color;
    const char *bodyType;
    double engineVolume;
    double kilometers;

public:
    void setData(char *newBrand, char *newColor, char *newBodyType, double newEngineVolume, double newKilometers);
    double calculateFuelConsumption();
    void decreaseKilometers(double amount);
    void printData();
};