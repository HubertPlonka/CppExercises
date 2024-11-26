/*
Given a non-negative integer, return an array / a list of the individual digits in order.

Examples:

123 => {1,2,3}

1 => {1}

8675309 => {8,6,7,5,3,0,9}
*/

#include <vector>
#include <string>

std::vector<int> digitize(int n) {
  std::string str = std::to_string(n); 
    std::vector<int> numbers; 

    for (char c : str) {
        numbers.push_back(c - '0'); 
    }

    return numbers; 
}