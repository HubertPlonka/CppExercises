/*
You will be given an array a and a value x. All you need to do is check whether the provided array contains the value.

Array can contain numbers or strings. X can be either.

Return true if the array contains the value, false if not.
*/
#include <vector>
#include <string>

bool check(const std::vector<std::string>& seq, const std::string& elem) {
  for (size_t i=0; i<seq.size(); i++){
    if(seq[i] == elem){
      return true;
    }
  }
    return false;
}