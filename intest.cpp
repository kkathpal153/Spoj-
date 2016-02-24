#include<iostream>
#include<stdio.h>

using namespace std;

int main ()
{
	long long i,j,n,m;
	cin>>n;
	cin>>j;
	while(n--)
	{
		scanf("%lld",&m);
		if(m%j==0)
		{
			i++;
		}
	}
    cout<<i;
}
