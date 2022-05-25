// Sixth question
#include <iostream>

int main() {
    // Write C++ code here
  int i,j,k;
  for(i=1;i<=5;i++)
  {
    for(j=1;j<5;j++)
    {
      if(j+i<=6)
        printf("%d",j);
      else
        printf(" ");
    }
    for(j=5;j>=1;j--)
    {
      if(j+i<=6)
        printf("%d",j);
      else
        printf(" ");
    } 
    printf("\n");
  }
    return 0;
}