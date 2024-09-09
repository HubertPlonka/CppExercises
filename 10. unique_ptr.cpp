#include <memory>
#include <cstring>

class String {
public:
    String(const char* str) {
        len_ = strlen(str);
        data_ = std::make_unique<char[]>(len_+1);
        std::copy(str, str + len_ + 1, data_.get());
    }

    size_t size() const {
        return len_;
    }

    const char* c_str() const {
        return data_.get();
    }

private:
    std::unique_ptr<char[]> data_;
    size_t len_;
};

/*
Here's a task for you to practice using unique_ptr:

Task: Implement a simple String class that uses unique_ptr to manage its internal character array.

Requirements:

    The String class should have a constructor that takes a const char* parameter, which is the initial string value.
    The String class should have a size() method that returns the length of the string.
    The String class should have a c_str() method that returns a const char* pointer to the internal character array.
    The String class should use unique_ptr to manage its internal character array.

Constraints:

    You cannot use std::string or any other standard library string classes.
    You must use unique_ptr to manage the internal character array.

Starting point:

cpp

#include <memory>


class String {

public:

    String(const char* str) {

        // TODO: implement me!

    }


    size_t size() const {

        // TODO: implement me!

    }


    const char* c_str() const {

        // TODO: implement me!

    }


private:

    // TODO: declare your unique_ptr member variable here!

};

Your task is to complete the implementation of the String class using unique_ptr.
*/