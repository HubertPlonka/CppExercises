/*
Exercise 1: Basic Class with this

Create a class called Point that represents a point in a 2D space with x and y coordinates. Implement the following:

    A constructor that initializes the coordinates.
    A method setCoordinates that takes two parameters and sets the object's x and y values using this.
    A method display that prints the coordinates.

Example Output:

Point(3, 4)

Exercise 2: Chaining Member Functions

Extend the Point class from Exercise 1 to include a method move that takes two parameters for the change in x and y coordinates. Use this to return the current object, allowing for method chaining.

Example:

cpp

Point p;

p.setCoordinates(1, 2).move(3, 4).display(); // Should display Point(4, 6)
*/
#include <iostream>

using namespace std;

class Point{
    private:
    double x;
    double y;

    public:
    Point(double xp, double yp): x(xp), y(yp){}
    Point& setCoordinates(double xp, double yp){
        this->x = xp;
        this->y = yp;
        return *this;
    }

    void display() const{
        cout << "Point(" << this->x << ", " << this->y << ")" << endl;
    }

    Point& move(double xm, double ym){
        this->x = x + xm;
        this->y = y + ym;
        return *this;
    }
};

int main(){
    Point p(3, 4);
    p.display();
    p.setCoordinates(5, 6).display();
    p.setCoordinates(1, 1).move(2, 3).display();
    return 0;
}