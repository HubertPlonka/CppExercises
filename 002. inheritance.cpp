#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
    public:
    string brand;
    string model;
    int year;
    string color;
    virtual void printInfo(){
        cout << brand << model << year << color << endl;
    }
    Vehicle() {}
    Vehicle(string brand, string model, int year, string color)
        : brand(brand), model(model), year(year), color(color)
        {}
    virtual ~Vehicle(){}
};

class Car : public Vehicle
{
    public:
    Car(string brand, string model, int year, string color, int numberOfDoors, double engineCapacity)
    {
        this->brand = brand;
        this->model = model;
        this->year = year;
        this->color = color;
        this->numberOfDoors = numberOfDoors;
        this->engineCapacity = engineCapacity;
    };
    ~Car() override {}
    int numberOfDoors;
    double engineCapacity;
    void printInfo() override {
        cout << brand << model << year << color << numberOfDoors << engineCapacity << endl;
    }
};

class Motorcycle : public Vehicle
{
    public:
    Motorcycle(string brand, string model, int year, string color, double engineCapacity, string type)
    : Vehicle(brand, model, year, color), engineCapacity(engineCapacity), type(type){}
    ~Motorcycle() override {}
    double engineCapacity;
    string type;
    void printInfo() override {
        cout << brand << model << year << color << engineCapacity << type << endl;
    }
};

int main() {
    Car car("Toyota", "Corolla", 2015, "red", 4, 1.6);
    Motorcycle motorcycle("Honda", "CBR500R", 2020, "black", 500, "sport");

    car.printInfo();
    motorcycle.printInfo();

    return 0;
}

/*
```````````````````````````````````````````````````````````````````````````
Create a Vehicle class that will have the following properties:

brand

model

year (production year)

color

and methods:

printInfo() - prints information about the vehicle

Next, create two classes that inherit from Vehicle:

Car

Motorcycle

The Car class should have additional properties:

numberOfDoors (number of doors)

engineCapacity (engine capacity)

The Motorcycle class should have additional properties:

engineCapacity (engine capacity)

type (motorcycle type, e.g. "sport", "touring")

Both classes should have their own implementations of the printInfo() method, which prints information about the vehicle, including these additional properties.

Requirements:

Use inheritance to create the Car and Motorcycle classes based on the Vehicle class.

Use the virtual keyword in the Vehicle class to allow overriding of the printInfo() method in the inheriting classes.

Use the override keyword in the inheriting classes to indicate that the printInfo() method is overridden.

Example usage:

cpp

int main() {

    Car car("Toyota", "Corolla", 2015, "red", 4, 1.6);

    Motorcycle motorcycle("Honda", "CBR500R", 2020, "black", 500, "sport");


    car.printInfo();

    motorcycle.printInfo();


    return 0;

}

This should print information about the car and motorcycle, including the additional properties.

Good luck!