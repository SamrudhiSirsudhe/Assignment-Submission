// Swap two numbers without using temporary variables

#include<stdio.h>
int main()
{
  // intialise two variables
  int x = 25, y = 17;
  // Arithmatic Code to swap 'x' and 'y'
  x = x + y;  // after addition x with contain 42
  y = x - y;  // y will contanis 25
  x = x - y;  // x becomes 17
  
  printf("After Swapping two values: x = %d, y = %d", x, y);
  
  return 0;
}