#include <string>
#include <cassert>

class TwoToOne
{
public:
    static std::string longest(const std::string &s1, const std::string &s2){
      std::string temp = s1 + s2;
      int order = 0;
      std::string output = "";
      for(size_t i=0; i < temp.size(); i++){
        order = static_cast<int>(temp[i]);
        if(output.empty()){
        output += temp[i];
        } 
        for(size_t j=0; j<=(output.size());){
          if((order < static_cast<int>(output[j])) || (j >= output.size())){
            output.insert(j, 1, temp[i]);
            break;
          }
          if(order == (static_cast<int>(output[j]))){
            break;
          } else {
            j++;
          }
        }
      }
      return output;
      
    };
};

/*
Take 2 strings s1 and s2 including only letters from a to z. Return a new sorted string (alphabetical ascending), the longest possible, containing distinct letters - each taken only once - coming from s1 or s2.
Examples:

a = "xyaabbbccccdefww"
b = "xxxxyyyyabklmopq"
longest(a, b) -> "abcdefklmopqwxy"

a = "abcdefghijklmnopqrstuvwxyz"
longest(a, a) -> "abcdefghijklmnopqrstuvwxyz"


*/