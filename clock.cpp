#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main()
{
    int n;
	int min=0,sec=0,hr=0;
	while(true)
	{
	Sleep(50);
	Beep(900,100);
	system("cls");
	cout<<"******************Timer***************"<<endl<<endl<<endl;
	cout<<hr<<"Hours :"<<min<<"Minutes :"<<sec<<"Seconds :"<<endl<<endl<<endl;
	cout<<"**************************************"<<endl<<endl;
	cout<<"This timer is made by Shoaib Baloch";
	sec++;           
	if(sec==60)
	{
		sec=0;
		min++;
		if(min==60)
		{
			min=0;
		    hr++;	   
		}
     	      }
                    }
                             }
