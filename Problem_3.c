// Check whether an integer is odd or even

#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Write your code here
    if(number%2 == 0)
    {
      printf("The number entered is an even number");
  
    }
    if(number%2 != 0 )
    {
      printf("The number entered is an odd number");
    }
    
   
    return 0;
}
