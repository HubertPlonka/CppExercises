#include <iostream>
#include <string>

using namespace std;

class Person
{
    private:
    string name;
    int age;

    public:
    Person(string name_, int age_){
        name = name_;
        age = age_;
    }

    string getName(){
        return name;
    };

    int getAge(){
        return age;
    };

    void setName(string name_){
        name = name_;
    };

    void setAge(int age_){
        age = age_;
    };

    void introduce(){
        cout << "Hello, my name is " << name << " and I am " << age << " years old." << endl;
    };
};

class Student : public Person{
    private:
    string major;
    int year;

    public:
    Student(string major_, string name_, int year_, int age_): 
    Person(name_, age_), major(major_), year(year_){}

    string getMajor(){
        return major;
    }

    int getYear(){
        return year;
    }

    void setMajor(string major_){
        major = major_;
    }

    void setYear(int year_){
        year = year_;
    }

    void introduce(){
        Person::introduce();
        cout << "I study " << major << " and I am in " << year << " year." << endl;
    }
};

int main(){
    Person person("Jan", 25);
    person.introduce();

    cout << endl;

    Student student("IT", "Tom", 3, 23);
    student.introduce();
}

/*
    Create a class Person:
        Attributes:
            name (string)
            age (integer)
        Methods:
            Getters and setters for both attributes.
            A method introduce() that prints "Hello, my name is [name] and I am [age] years old."

    Create a class Student that inherits from the Person class:
        Attributes:
            major (string)
            year (integer)
        Methods:
            Getters and setters for both attributes.
            Override the introduce() method to additionally print "I study [major] and I am in my [year] year."

    Create an instance of the Student class and set its attributes using the setters. Then call the introduce() method to display information about the student.

    Ensure that all methods and attributes have the appropriate visibility (public, private, protected).

    Add a constructor for both classes that initializes the attributes when creating an object.

Successfully implement all the above requirements and test them in the main program.
*/