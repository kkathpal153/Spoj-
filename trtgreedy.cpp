#include<iostream>
using namespace std;
int main()
{
	long n,j,k,i,f,l,s;
	cin>>n;
	int *a=new int[2001];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	s=0;
	f=0;
	l=n-1;
	for(i=1;i<n+1;i++)
	{
		if(a[f]<a[l])
		{
			s=s+a[f]*i;
			f++;
		}
		else
		{s=s+a[l]*i; l--; }
	}
	cout<<s;
}
