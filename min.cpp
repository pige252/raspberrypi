#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

double f(double x) {return x*x*x-3*x*x+3*x-1;}
double fprime(double x) {return 3*x*x-6*x+3;}

int main()
{
	double x,c,dx;
	cout<<"enter number"<<endl;
	cin>>x>>c;
	do
	{
		dx=f(x)/fprime(x);
		x-=dx;
	}
	while(abs(dx)>c);
	cout<<"minimum:"<<x<<endl;
}
