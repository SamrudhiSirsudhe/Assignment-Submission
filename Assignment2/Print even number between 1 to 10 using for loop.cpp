// Print even number between 1 to 10 using for loop

#include <iostream>
using namespace std;

int main() {
 
    int i;

 
    for(i= 1; i <= 10; i++){
      if(i % 2 == 0) {
         cout << i <<" "; 
      }
   }
    return 0;
}

