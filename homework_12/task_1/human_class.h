#pragma once

struct HumanClass
{
private:
    const char *name;
    const char *surname;
    int age;
    double weight;
    double height;

public:
    void setData(const char *name, const char *surname, int age, double weight, double height);
    double calculateBMI();
    int calculateBirthYear();
    void printData();
};
