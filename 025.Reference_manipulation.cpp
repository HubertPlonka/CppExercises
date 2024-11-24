#include <iostream> 

class Rectangle{
    private:
    double width;
    double height;

    public:
    Rectangle(double width, double height): width(width), height(height) {}
    double area(){
        return width * height;
    }
    void resize(double& newWidth, double& newHeight){
        width = newWidth;
        height = newHeight;
    }
};

int main(){
    Rectangle rec1(4.0, 5.0);
    std::cout << "Area = " << rec1.area() << std::endl;
    double newWidth = 10.0;
    double newHeight = 10.0;
    rec1.resize(newWidth, newHeight);
    std::cout << "Updated Area = " << rec1.area() << std::endl;

    return 0;
}