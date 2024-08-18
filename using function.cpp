#include<iostream>
using namespace std;
void sum(int, int);
void mul(int, int);
int sub(int, int);
void div(int, int);
int main()
{
	int a,b;
	cout<<"Enter first number=";
	cin>>a;
	cout<<"Enter second number=";
	cin>>b;
	sum(a,b);
	mul(a,b);
	sub(a,b);
	div(a,b);
	cout<<"This programe is made by majid ky Nano";
}
void sum(int x,int y)
{
	int sum;
	sum=x+y;
	cout<<"sum:"<<sum<<endl;
}

void mul(int x,int y)
{
cout<<"Enter first number=";
	cin>>x;
	cout<<"Enter second number=";
	cin>>y;
	int mul;
	mul=x*y;
	
	cout<<"Multiplication:"<<mul<<endl;
	
}
int sub(int x,int y)
{ 
	cout<<"Enter first number=";
	cin>>x;
	cout<<"Enter second number=";
	cin>>y;
	int sub;
	sub=x-y;
	cout<<"substraction:"<<sub<<endl;
	
}
void div(int x,int y)
{	cout<<"Enter first number=";
	cin>>x;
	cout<<"Enter second number=";
	cin>>y;
	int div;
	div=x/y;
	cout<<"Division:"<<div<<endl;
}

