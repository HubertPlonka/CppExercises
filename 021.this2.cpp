/*
Create a class Rectangle that represents a rectangle with width and height. Implement the following:

    A constructor to initialize the dimensions.
    A method setWidth and setHeight that both return this to allow for method chaining.
    A method area that calculates and returns the area of the rectangle.

Example:

Rectangle rect;
rect.setWidth(5).setHeight(10);
std::cout << "Area: " << rect.area(); // Should output Area: 50
*/

#include <iostream>

using namespace std;

class Rectangle{
    private:
    double width;
    double height;

    public:
    Rectangle(double w = 0, double h = 0): width(w), height(h){}
    Rectangle& setWidth(double wset){
        this->width = wset;
        return *this;
    }

    Rectangle& setHeight(double hset){
        this->height = hset;
        return *this;
    }

    double area() const{
        return (this->height * this->width);
    }
};

int main(){
    Rectangle rect;
    rect.setWidth(5).setHeight(10);
    cout << "Area: " << rect.area() << endl;
return 0;
}
