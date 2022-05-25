// Second question
#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;
void nest(int);
int main()
{   
    int n;

    cout<<endl<<"Enter no of line for pattern.";
    cin>>n;

    nest(n);
}
void nest(int n)
{
    int i,j, sp=35,k;

    for(i=1;i<=n;i++)
    {
                {
                for(j=1;j<=sp;j++)
                cout<<" ";
                    for(k=1;k<=i;k++)
                        if(i%2==0)
                        cout<<setw(4)<<(j%2);
                        else
                        cout<<setw(4)<<!(j%2);
                        cout<<endl;
                        sp = sp - 2;
               }
    }
}