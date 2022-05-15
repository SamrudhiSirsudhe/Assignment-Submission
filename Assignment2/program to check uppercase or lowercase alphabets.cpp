// program to check uppercase or lowercase alphabets

#include<iostream>
using namespace std;
int main()
{
  char ch;
    cout << "Enter any character: ";
    cin >> ch;
     if(ch >= 'a' && ch <= 'z')
    {
        cout << ch<< " is lowercase alphabet.: ";
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        cout << ch<< " is uppercase alphabet.: ";
    }
    else
    {        
        cout << ch<< " is not an alphabet.: ";       
    }
    return 0
}