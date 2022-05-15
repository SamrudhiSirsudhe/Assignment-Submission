// A program to find quotient and reminder

#include <iostream>
using namespace std;
int main() {
   int divisor, dividend, quotient, remainder;
   dividend = 12;
   divisor = 6;
   quotient = dividend / divisor;
   remainder = dividend % divisor;
   cout << "Dividend is " << dividend <<endl;
   cout << "Divisor is " << divisor <<endl;
   cout << "Quotient is " << quotient << endl;
   cout << "Remainder is " << remainder;
   return 0;
}