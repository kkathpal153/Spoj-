#include<iostream>
#include<math.h>
#include<map>
#include<stdlib.h>
using namespace std;
map<long long,int> dp;

//long long mulmod(long long a,long long b,long long c);
void seive (long long n, bool a[])
{
	long long i,j,k;
	bool b;
	for(i=2;i<=sqrt(n);i++)
	{
		if(!a[i])
		{
			for(j=2*i;j<n;j=j+i)
			a[j]=1;
		}
	}
}
int main()
{
	long long i,j,k,l,m,n,s;
	
	for(cin>>n;n;n--)
	{   bool *a=new bool[4294967300];
		scanf("%lld",&m);
		seive(m,a);
		bool k=true;
		for(i=m-1;k;i--)
		{
			k=a[i];
		}
		printf("%d\n",i+1);
		
	}
}

