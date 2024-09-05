#include <string>
#include <vector>

std::vector<std::string> friendOrFoe(const std::vector<std::string>& input) {
  std::vector<std::string> output = input;
    for(int i = 0; i < output.size();){
      if(output[i].size() != 4){
        output.erase(output.begin() + i);
      } else {
        i++;
      }
    }
    return output;
}

/*
CodeWars
Make a program that filters a list of strings and returns a list with only your friends name in it.

If a name has exactly 4 letters in it, you can be sure that it has to be a friend of yours! Otherwise, you can be sure he's not...

Input = {"Ryan", "Kieran", "Jason", "Yous"}
Output = {"Ryan", "Yous"}

Input = {"Peter", "Stephen", "Joe"}
Output = {}

Input strings will only contain letters. Note: keep the original order of the names in the output.
