#include<iostream>
#include<stdio.h>
int *a1=new int[1000];
int *a2=new int[1000];
long long mul;
using namespace std;

void multiply(int l)
{
  	for(int i=0;i<l;i++)
		mul=mul+a1[i]*a2[i];
	
}

void swap(int a[],long i,long j)
{
	int temp;
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}

void quicksort(int a[],long l,long r)
{  
    
	
	  if(l<=r)
	  {  
	     int s,b,k;	  
	     s=l+1;    
	     k=a[l];
	  for(b=l+1;b<=r;b++)
	    {
	    	if(a[b]<=k)
	    	{   
	    	    swap(a,s,b);
	    		s++;
			}
			
		}
	  
	  swap(a,l,s-1);
	  s=s-1;
	  quicksort(a,l,s-1);                                     //left	
	  quicksort(a,s+1,r);                                //right
	  
      }
	}



/*
void swaps(int a[],int l,int s)
{
	int temp;
	temp=l;
	l=s;
	s=temp;
}
void quicksort(int a[],int l,int r )
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
}*/

int main()
{
	int n,i,j,l;
	cin>>n;
	if(n>=1&&n<=1000)
	while(n--)
	{   mul=0;
		cin>>l;
		for(i=0;i<l;i++)
		cin>>a1[i];
		for(i=0;i<l;i++)
		cin>>a2[i];
		quicksort(a1,0,l-1);
		quicksort(a2,0,l-1);
		multiply(l);
	    cout<<mul<<endl;
	}
}

