// Largest numbers among three numbers

#include <iostream>
using namespace std;
int main() {
   int a = 1 ,b = 7 ,c = 15;
   if(a>b) {
      if(a>c)
      cout<<a<<" is largest number";
      else
      cout<<c<<" is largest number";
   }else {
      if(b>c)
      cout<<b<<" is largest number";
      else
      cout<<c<<" is largest number";
   }
   return 0;
}