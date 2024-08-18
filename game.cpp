#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int main();
    string name;
	char input;
	int inputuser;
	int score;
	cout<<"Enter your team name:";
    getline(cin,name);
	cout<<endl;
	do
	{
		srand(0);
		int variable=rand()%5+1;
		cout<<"Enter any number between 1 to 5!";
		cin>>inputuser;
		cout<<endl;
		if(input==variable)
		{
			cout<<" congragulations ! You gussed the correct number "<<endl;
			score++;
		}
			else
			{
			cout<<"Sorry ! you gussed the wrong number try again"<<endl;
		}
		cout<<"Would you like to try again ! Y/N";
		cin>>input;
		cout<<endl;
	}
	while(input!='N');
	
	cout<<"your score is"<<score<<endl;
	cout<<"game End";

}
