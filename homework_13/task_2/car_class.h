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
    CarClass(const char *brand);
    CarClass(const char *brand, const char *color);
    CarClass(const char *brand, const char *color, const char *bodyType);
    CarClass(const char *brand, const char *color, const char *bodyType, double engineVolume);
    CarClass(const char *brand, const char *color, const char *bodyType, double engineVolume, double kilometers);
    ~CarClass();

    void setBrand(const char *newBrand);
    void setColor(const char *newColor);
    void setBodyType(const char *newBodyType);
    void setEngineVolume(double newEngineVolume);
    void setKilometers(double newKilometers);

    void setData(char *newBrand, char *newColor, char *newBodyType, double newEngineVolume, double newKilometers);
    double calculateFuelConsumption();
    void decreaseKilometers(double amount);
    void printData();
};