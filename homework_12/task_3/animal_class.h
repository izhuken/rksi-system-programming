#pragma once

class AnimalClass
{
private:
    const char *name;
    const char *species;
    const char *color;
    int age;
    double weight;

public:
    void setData(char *newName, char *newSpecies, char *newColor, int newAge, double newWeight);
    void feed(int days);
    void changeName(const char *newName);
    void printData();
};