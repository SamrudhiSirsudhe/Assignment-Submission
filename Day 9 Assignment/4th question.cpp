// Forth question
#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;
int main()
{
    int i, j, n, sp=35, k;

    cout<<"Enter the no. of lines: ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        for(k=1; k<=sp; k++)
        cout<<" ";
        {
            for(j=1; j<=i; j++)
                {
                    if(j==1 || j==i)
                    {
                        cout<<setw(4)<<"1";
                    }
                    else
                    {
                        cout<<setw(4)<<"0";
                    }
                }
            cout<<endl;
        sp = sp-2;
    }
 }
    return 0;
}