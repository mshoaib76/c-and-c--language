#include<iostream>
using namespace std;
//void callme();
int main()
{
	int cd,cm,cy,dd,dm,dy,d,m,y;
	cd=22,cm=04,cy=2024;
	cout<<"Enter your date of birth :";
	cin>>dd>>dm>>dy;
	//dd=02,dm=11,dy=2005;
	if(cd<dd)
	{
		cd=cd+30;
		cm=cm-1;
	}
	d=cd-dd;
	if(cm<dm)
	{
		cm=cm+12; 
		cy=cy-1;
	}
	m=cm-dm;
	y=cy-dy;
	cout<<"Total age of Shoaib Baloch:"<<endl;
	cout<<"years="<<y<<endl;
	cout<<"months="<<m<<endl;
	cout<<"Days="<<d<<endl;
		
	}
	

