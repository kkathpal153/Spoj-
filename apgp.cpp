#include<iostream>

using namespace std;

int main()
{
	double a,b,c,d,n,r;
	while(cin>>a>>b>>c&&(a!=0||b!=0||c!=0)&&a>=-10000&&a<=10000&&b>=-10000&&b<=10000&&c>=-10000&&c<=10000)
	{
		if(2*b==(a+c))
		{
			d=c+c-b;
			cout<<"AP "<<d<<endl;
		}
		else
		{
			r=b/a;
			cout<<"GP "<<r*c<<endl;
		}
	}
}
