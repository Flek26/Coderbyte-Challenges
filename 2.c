#include <stdio.h> 
#include <string.h>

void FirstReverse(char str[]) { 
  
  // code goes here  
  char newstr[100];
  int x = strlen(str);
  for(int y = x-1; y >= 0 ; y--){
      newstr[x-y] = str[y];
    printf("%c", newstr[x-y]); 
  }

            
}

int main(void) { 
  
  // keep this function call here
  FirstReverse(gets(stdin));
  return 0;
    
}
