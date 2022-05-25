// Reverseal of array element, addition and substraction of matrix.

#include<iostream>
using namespace std;

int main()
{
    int arr[5], i;
   
    cout<<endl<<"Enter the elements of the array :";
     for(i=0; i<5; i++)
    cin>>arr[i];
    
    cout<<"\n\nThe original array is :";
    for(i=0; i<5; i++)
    cout<<arr[i]<<" ";

    cout<<"\n\nThe reversed array is :";
    for(i=(5-1); i>=0; i--)
    cout<<arr[i]<<" ";
    cout<<endl;

    return 0;

}