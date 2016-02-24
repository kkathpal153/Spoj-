#include<iostream>

using namespace std;

int main()
{
	long n;  int x,y;
	cin>>n;
	while(n--)
	{
		cin>>x>>y;
		if(x>=0&&x<=10000&&y>=0&&y<=10000)
		{
			if(x==y)
				{
					if(x%2==0)
					   cout<<2*x<<endl;
					else
					   cout<<2*x-1<<endl;
				}
			else if(x==y+2)
				{
					if(x%2==0)
					   cout<<x+y<<endl;
					else
					   cout<<x+y-1<<endl;
				}
			else
			cout<<"No Number"<<endl;
	   }
	}
}
