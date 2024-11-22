#include <iostream>

class Base{
    public:
    Base() = default;

    void calculate(int value){
        value = value * 100;
        std::cout << "From Base class: " << value << std::endl;
    }
};

class Derived : public Base{
    public:
    Derived() = default;

    void calculate(double value){
        value = value * 1.33;
        std::cout << "From Derived class: " << value << std::endl;
    }
};

int main(){
    Base base;
    Derived derived;

    base.calculate(10);
    derived.calculate(10);

    return 0;
}