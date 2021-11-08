#include<iostream>
//#include<conio.h>
using namespace std;

double power(double n, int p=2);

void main(void)
{
	cout<<"### Programmed By Amahdy(MrJava) ,right restricted.~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout<<"-------------------------------------------------------------------------------\n"<<endl;
	
	double n; int p=2;
	
	do{
	cout<<"Enter n: "; cin>> n;
	cout<<"Enter p: "; cin>> p;
	cout <<"The power is "<<power(n, p);
	cout<<"\n\n !Press c to continue or any key to exit."<<endl<<endl;
	}while(getch()=='c');
}

double power(double n, int p)
{ 
    for(int ret=1; p>0; p--) 
    
    int ret*=n;
    cout<<ret;
    }