#include<stdio.h>
#include<iostream>
using namespace std;

long  inv=0;

void merge(int a[],long p,long q,long n);
void mergesort(int a[],long p,long n);

int main()
{
	long long i,k,l,m,n,p,q;
	
	cin>>n;
	while(n--)
	{
		cin>>l;
		int *a=new int[l+1];
		for(i=0;i<l;i++)
		scanf("%d",&a[i]);
		inv=0;
		mergesort(a,0,l-1);
		cout<<inv<<endl;
		
	}
	
	
}


void mergesort(int a[],long l,long r)
{
	if(l<r)
	{ int m=l+(r-l)/2;
	  mergesort(a,l,m);                                     //left	
	  mergesort(a,m+1,r);                                //right
	  merge(a,l,m,r);
	  
	}
}

void merge(int a[],long f, long m, long n)
{
	long d,e,i,j=0,k,n1,n2;
	n1=m-f+1;
	n2=n-m;       //imp
	int l[n1],r[n2];
	for(i=0;i<n1;i++)
	l[i]=a[f+i];
	for(i=0;i<n2;i++)
	r[i]=a[m+1+i];
	
	i=0;
	k=f;
	while (i < n1 && j < n2)
    {
        if (l[i] <= r[j])
        {   
            a[k] = l[i];
            i++;
        }
        else
        {   inv=inv+n1-i;
            a[k] = r[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {   
    	a[k]=l[i];
    	k++; i++;
	}
	while(j<n2)
	{   
		a[k]=r[j];
		j++;k++;
	}
}
