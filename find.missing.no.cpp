#include<iostream>
using namespace std;
long n,diff;
int ap(int a[], int f, int l)
{
	if(f>l)
	return INT_MAX;
	int mid=(l-f+1)/2;
	cout<<mid<<endl;
	if(mid>0&&a[mid]-a[mid-1]!=diff)
	return a[mid-1]+diff;
	if( (a[mid+1]-a[mid])!=diff)
	return a[mid]+diff;
	if(a[mid]==(a[0]+diff*(mid-1)))
	{
		return ap(a,mid+1,l);
	}
	return ap(a,f,mid-1);
}
int main()
{
	int i,j,k;
	printf("Input the length \n");
	scanf("%ld",&n);
	int *a = new int[n+1];
	cout<<"enter the values";
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	k=(a[n]-a[1])/n;
	diff=k;
	cout<<ap(a,1,n);
	
}
