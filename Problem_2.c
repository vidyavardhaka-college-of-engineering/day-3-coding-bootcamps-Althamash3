//You will be given a positive integer 'n'. Your task is to print the first 'n' terms of the fibonacci series.
//Example
//Input: 4
//Output: 0 1 1 2
#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter the value for n\n");
    scanf("%d", &n);
    int a=0,b=1,c=0;
    for (int i = 0 ; i<n ;i++)
    {
      printf("%d ",a);
      c = a+b;
      a = b; 
      b = c;

    }
    



    return 0;
}


