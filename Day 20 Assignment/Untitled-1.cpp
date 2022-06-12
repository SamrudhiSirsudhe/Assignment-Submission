// implemetation of stack by there own
#include<iostream>
using namespace std;
#define SIZE 5
int A[SIZE];
int top=-1;

bool isempty()
{
	if(top==-1)
		return true;
	else
		return false;
		
}

void push(int value)
{
	if(top==SIZE-1)
	{
		cout<<"Stack is full\n";
	}
	else
	{
		top++;
		A[top]=value;
	}
}

void pop()
{
	if(isempty())
		cout<<"Stack is empty!\n";
	else top--;
}

void displayStack()
{
	if(isempty())
	{
		cout<<"Stack is empty!\n";
	}
	else{
		for(int i=0 ; i<=top; i++)
		cout<<A[i]<<" ";
	}
}

void show_top()
{
	if(isempty())
		cout<<"Stack is empty!\n";
	else
		cout<<"Element is top is: "<<A[top]<<"\n";
}

int main()
{
	push(2);
	push(3);
	push(4);
	
	displayStack();
	
	pop();
	
	show_top();
	
	return 0;
}