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
    HumanClass();
    HumanClass(const char *name);
    HumanClass(const char *name, const char *surname);
    HumanClass(const char *name, const char *surname, int age);
    HumanClass(const char *name, const char *surname, int age, double weight);
    HumanClass(const char *name, const char *surname, int age, double weight, double height);

    ~HumanClass();

    void setName(const char *name);
    void setSurname(const char *surname);
    void setAge(int age);
    void setWeight(double weight);
    void setHeight(double height);

    const char *getName();
    const char *getSurname();
    int getAge();
    double getWeight();
    double getHeight();

    void setData(const char *name, const char *surname, int age, double weight, double height);
    double calculateBMI();
    int calculateBirthYear();
    void printData();
};
