#include<iostream>
using namespace std;
int main()
{
	float a,b,j,l,m,n;
	float i,s;
	a=1; s=0;
	while(cin>>a&&a>=0.01&&a<=5.20)
	{   b=0.00; s=0;
			for(i=2;b<a;i++)
		{
			b=b+1/i;
			//cout<<"value of b is"<<b<<endl;
			s=s+1;
		}
		cout<<s<<" card(s)"<<endl;
	}
}
