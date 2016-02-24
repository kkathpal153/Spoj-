#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int *a=new int[2001];
long n;
int aa[2001][2001];
long ans( int f, int l)
{
	if(f>l)
	return 0;
	if(aa[f][l]!=-1)
	return aa[f][l];
	int y=n-(l-f);
	aa[f][l]=(max(ans(f+1,l)+y*a[f],ans(f,l-1)+y*a[l]));
    return aa[f][l];
}
int main()
{
	long i;
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	memset(aa,-1,sizeof(aa));
	cout<<ans(0,n-1);
	
}
