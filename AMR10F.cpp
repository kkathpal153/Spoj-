#include<iostream>
using namespace std;

int main()
{
	double l,n,a,d,s;
	cin>>l;
	while(l--)
	{
		cin>>n>>a>>d;
		s=(n/2)*(a*2+(n-1)*d);
		cout<<s<<endl;
	}
}
