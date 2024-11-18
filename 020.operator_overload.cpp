/*
Create a class Vector that represents a mathematical vector with x, y, and z components. Implement the following:

    A constructor to initialize the vector components.
    Overload the + operator to add two vectors.
    Use this to return the result of the addition as a new Vector object.

Example:

Vector v1(1, 2, 3);

Vector v2(4, 5, 6);

Vector v3 = v1 + v2; // v3 should be Vector(5, 7, 9)
*/

#include <iostream>

using namespace std;

class Vector{
    private:
    double x, y, z;

    public:
    Vector(double xv, double yv, double zv): x(xv), y(yv), z(zv){}

    Vector operator+(const Vector& other) const {
        return Vector(this->x + other.x, this->y + other.y, this->z + other.z);
    }
    void display() const {
        cout << "Vector(" << x << ", " << y << ", " << z << ")" << endl;
    }
};

int main(){
    Vector v1(1, 2, 3);
    Vector v2(4, 5, 6);
    Vector v3 = v1 + v2;

    v3.display();
    return 0;
}