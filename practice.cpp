#include<iostream>
using namespace std;
void character(char);
int main()
{
	int a,b;
	char n,optr;
	
	cout<<"Enter character =";
	 cin>>n;
    character ( n);
    cout<<"Enter an operater =";
    cin>>optr;
    cout<<"Enter first number =";
    cin>>a;
    cout<<"Enter second number =";
    cin>>b;
	cout<<"This programe is made by shoaib baloch";
	switch(n)
	{
		case '+':
			cout<<"Addition"<<a+b;
			break;
			case '-':
				cout<<"Substruction"<<a-b;
				break;
				case '*':
					cout<<"Multiplication"<<a*b;
					break;
					case '%':
						cout<<"Remander"<<a%b;
						break;
						
	}
	return 0;
}
void character(char ch)
{
	if((ch>='A')&&(ch<='Z'))
{
		cout<<"It is a capital"<<endl;
}
		else
	 {
		
		cout<<"It is a consanent"<<endl;
	     }
}
