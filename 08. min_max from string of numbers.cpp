#include <string>
#include <vector>
#include <iostream>

std::vector<int> vec;
std::string temp = "";
std::string num = "";
int lowest = 0, highest = 0;
std::string final = "";

std::string highAndLow(const std::string& numbers){
    std::vector<int> vec;
    std::istringstream iss(numbers);
    int num;
    while (iss >> num) {
        vec.push_back(num);
    }

int lowest = *std::min_element(vec.begin(), vec.end());
int highest = *std::max_element(vec.begin(), vec.end());
  
  final = std::to_string(highest) + " " + std::to_string(lowest);
  vec.clear();
return final;
}

/*
In this little assignment you are given a string of space separated numbers, and have to return the highest and lowest number.
Examples

highAndLow("1 2 3 4 5");  // return "5 1"
highAndLow("1 2 -3 4 5"); // return "5 -3"
highAndLow("1 9 3 4 -5"); // return "9 -5"

Notes

    All numbers are valid Int32, no need to validate them.
    There will always be at least one number in the input string.
    Output string must be two numbers separated by a single space, and highest number is first.

