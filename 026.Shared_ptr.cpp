/*

    Create a class Person that has a name and an age as member variables.
    Implement a constructor to initialize these member variables.
    Write a function that takes a std::shared_ptr<Person> as an argument and prints the person's details.
    In the main function, create a std::shared_ptr<Person> and call the function to print the person's details.

*/
#include <iostream>
#include <memory>

class Person{
    private:
    std::string name;
    int age;

    public:
    Person(std::string name, int age): name(name), age(age){}

    ~Person() {}

    void introduce() const {
        std::cout << name << " " << age << std::endl;
    }
};

void printDetails(const std::shared_ptr<Person>& person){
    if(person){
        person->introduce();
    } else {
        std::cout << "No perosn available" << std::endl;
    }
}


int main(){
    std::shared_ptr<Person> p1 = std::make_shared<Person>("John", 20);
    printDetails(p1);
    return 0;
}