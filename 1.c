//Have the function FirstFactorial(num) take the num parameter being passed and return the factorial of it. 
//For example: if num = 4, then your program should return (4 * 3 * 2 * 1) = 24. 
//For the test cases, the range will be between 1 and 18 and the input will always be an integer. 

#include <stdio.h> 
#include <string.h>

void FirstFactorial(int num) { 
  
  // code goes here 
  int x;
  for(x = num-1; x > 0 ; x--){
      num = num * x;
  }
  printf("%d", num); 
            
}

int main(void) { 
  
  // keep this function call here
  FirstFactorial(gets(stdin));
  return 0;
    
} 
