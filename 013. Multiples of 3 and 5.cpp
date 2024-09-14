#include <vector>
#include <cmath>

int solution(int number) 
{
  int output = 0;
  std::vector<int> temp;
  for(int i=0; i<number; i++){
   if(i%3==0 || i%5==0){
     temp.push_back(i);
   }
 }
  for(size_t i=0; i<temp.size(); i++){
    output += temp[i];
  }
  return output;
}

/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Finish the solution so that it returns the sum of all the multiples of 3 or 5 below the number passed in.

Additionally, if the number is negative, return 0.

Note: If the number is a multiple of both 3 and 5, only count it once.
*/