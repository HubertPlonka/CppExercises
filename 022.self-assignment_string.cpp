/*
Exercise 5: Self-assignment Check

Create a class String that manages a dynamic string. Implement a copy assignment operator that uses this to check for self-assignment before copying data.

Example:

String str1("Hello");
String str2("World");
str1 = str2; // Ensure self-assignment doesn't cause issues

Implementation Tips

    Remember to use this to differentiate between member variables and parameters when they have the same name.
    Use this to return the current object for method chaining.
    Always ensure you manage memory properly when dealing with dynamic memory allocation.
*/

#include <iostream>
#include <cstring> 

class String {
public:
    String(const char* str = "") {
        size = std::strlen(str);
        data = new char[size + 1]; 
        std::strcpy(data, str);
    }

    ~String() {
        delete[] data;
    }

    String(const String& other) {
        size = other.size;
        data = new char[size + 1];
        std::strcpy(data, other.data);
    }

    String& operator=(const String& other) {
        if (this == &other) {
            return *this; 
        }
        delete[] data;

        size = other.size;
        data = new char[size + 1];
        std::strcpy(data, other.data);

        return *this; 
    }

    void display() const {
        std::cout << "String: " << data << std::endl;
    }

private:
    char* data; 
    std::size_t size; 
};

int main() {
    String str1("Hello");
    String str2("World");

    str1.display();
    str2.display();

    str1 = str2; 
    str1.display();

    str1 = str1; 
    str1.display();

    return 0;
}