#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

double determine(string u)
{
	if(u=="kg")
	return 1;
	if(u=="lb")
	return 2;
	if(u=="l")
	return 3;
	if(u=="g")
	return 4;
}
void manipulate(double a,double unit,int rank)
{   cout<<fixed;
	if(unit==1)
	cout<<rank<<" "<<setprecision(4)<<a*2.2046<<" lb\n";
	else if(unit==2)
	cout<<rank<<" "<<setprecision(4)<<a*0.4536<<" kg\n";
	else if(unit==3)
	cout<<rank<<" "<<setprecision(4)<<a*0.2642<<" g\n";
	else if(unit==4)
	cout<<rank<<" "<<setprecision(4)<<a*3.7854<<" l\n";
	
}
int main()
{
	double a,b,l,g,k,n,m,d;
	string u;
	cin>>n;
	while(m<n)
	{
		cin>>a;
		cin>>u;
		d=determine(u);
		manipulate(a,d,m+1);
	m++;
	}
}
