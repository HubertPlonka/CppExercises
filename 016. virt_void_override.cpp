#include <iostream>

using namespace std;

class Shape{
    private:
    string name;

    public:
    Shape(string n): name(n){};
    virtual double calculateArea() = 0;
    virtual void displayInfo(){
        cout << "Name: " << name << endl;
    }
};

class Rectangle : public Shape{
    private: 
    double width;
    double height;

    public:
    Rectangle(string n, double w, double h): Shape(n), width(w), height(h){}
    double calculateArea() override {
        return width * height;
    }
    void displayInfo() override{
        Shape:: displayInfo();
        cout << "Area: " << calculateArea() << endl;
    }
};

class Circle : public Shape{
    private: 
    double radius;

    public:
    Circle(string n, double r): Shape(n), radius(r){}
    double calculateArea() override{
        return radius * radius * 3.14;
    }
    void displayInfo() override{
        Shape::displayInfo();
        cout << "Area: " << calculateArea() << endl;
    }
};

int main(){
    Shape* shapes[2];
    shapes[0] = new Rectangle("R1", 5, 3);
    shapes[1] = new Circle("C1", 2.7);

    for (int i = 0; i<2; i++){
        shapes[i]->displayInfo();
        delete shapes[i];
        cout << endl;
    }

    return 0;
}