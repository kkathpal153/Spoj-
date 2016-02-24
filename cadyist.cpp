#include<iostream>
#include<stdio.h>
int *a1=new int[100001];
int *a2=new int[100001];
//int *a3=new int[100000];
long long mul;
using namespace std;

void multiply(long long l)
{   long long k=l-1;
  	for(int i=0;i<l;i++)
		{
		mul=mul+a1[i]*a2[k];
		k--;
	    }
	
}

void swaps(int a[],long long l,long long s)
{
	long long temp;
	temp=a[l];
	a[l]=a[s];
	a[s]=temp;
}
void quicksort(int a[],long long l,long long r )
{
	if(l<=r)
	{
		int p=a[l];
		int t=l+1,s;
		for(s=l+1;s<=r;s++)
		{
			if(a[s]<=p)
			{
				swaps(a,t,s);
				t++;
			}
		}
		t=t-1;
		swaps(a,l,t);
		quicksort(a,l,t-1);
		quicksort(a,t+1,r);
	}
}
/*void upside(int a[], int l)
{   int k=l-1;
	for(int i=0;i<l;i++)
	{
	   a3[i]=a2[k];	
	   k--;
	}
}*/
int main()
{
	long long n,i,j,l;
	n=2;
	while(scanf("%lld",&n)&&n>=1&&n<=100000&&n!=0)
	{   mul=0;
		
		for(i=0;i<n;i++)
		scanf("%d",&a1[i]);
		for(i=0;i<n;i++)
		scanf("%d",&a2[i]);
		quicksort(a1,0,n-1);
		quicksort(a2,0,n-1);
		//upside(a2,n);
		multiply(n);
	    cout<<mul<<endl;
	}
}

