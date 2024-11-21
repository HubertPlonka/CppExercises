#include <iostream>

class Shape{
    public:
    virtual void draw(){
        std::cout << "Drawing a shape" << std::endl;
    }
};

class Circle : public Shape{
    public:
    void draw() override{
        std::cout << "Drawing a circle" << std::endl;
    }
};

class Square : public Shape{
    public:
    void draw() override{
        std::cout << "Drawing a square" << std::endl;
    }
};

void render(Shape* shape){
    shape->draw();
}

int main(){
    Circle circle;
    Square square;

    render(&circle);
    render(&square);

    return 0;
}