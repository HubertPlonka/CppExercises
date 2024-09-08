#include <string>
#include <cctype>
#include <vector>
#include <iostream>

std::string alphabet_position(const std::string &text) {
  std::string letters = text;
  std::vector<int> lower;
  std::string result;
  std::string output;
  int x;
  
  for(size_t i=0; i<letters.size(); i++){
    if((letters[i] >= 'a' && letters[i] <= 'z') || (letters[i] >= 'A' && letters[i] <= 'Z')){
      letters[i] = std::tolower(letters[i]);
      lower.push_back(letters[i]); 
    }
  }
    
  
  for(size_t j=0; j<lower.size(); j++){
    x = (int)lower[j] - 96;
    result += std::to_string(x) + " ";       
  }
  
  std::cout << result << std::endl;
  
  if(result.size()>0){
    result.pop_back();
  }
  
  return result;
}

/*
Given a string, replace every letter with its position in the alphabet.

If anything in the text isn't a letter, ignore it and don't return it.

"a" = 1, "b" = 2, etc.
Example

Input = "The sunset sets at twelve o' clock."
Output = "20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5
Describe(Sample_Tests) {
  It(Tests) {
    Assert::That(alphabet_position("The sunset sets at twelve o' clock."), Equals("20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11"));
    Assert::That(alphabet_position("The narwhal bacons at midnight."), Equals("20 8 5 14 1 18 23 8 1 12 2 1 3 15 14 19 1 20 13 9 4 14 9 7 8 20"));
    Assert::That(alphabet_position("0123456789"), Equals(""));
    Assert::That(alphabet_position(",./<>?-_=+ "), Equals(""));
    Assert::That(alphabet_position(""), Equals(""));
  }
};