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
    AnimalClass(const char *newName);
    AnimalClass(const char *newName, const char *newSpecies);
    AnimalClass(const char *newName, const char *newSpecies, const char *newColor);
    AnimalClass(const char *newName, const char *newSpecies, const char *newColor, int newAge);
    AnimalClass(const char *newName, const char *newSpecies, const char *newColor, int newAge, double newWeight);

    ~AnimalClass();

    void setName(const char *newName);
    void setSpecies(const char *newSpecies);
    void setColor(const char *newColor);
    void setAge(int newAge);
    void setWeight(double newWeight);

    void setData(char *newName, char *newSpecies, char *newColor, int newAge, double newWeight);
    void feed(int days);
    void changeName(const char *newName);
    void printData();
};