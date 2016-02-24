#include<stdio.h>
#include<fstream>
#include<iostream>
#include<cstdlib>

using namespace std;

long long int inv=0;

void merge(long a[],long p,long q,long n);
void mergesort(long a[],long p,long n);
/*
int main()
{
	int a[1000],i,k,l,m,n,p,q;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	p=0;
	mergesort(a,p,n);
    for(i=0;i<n;i++)
	printf("%d  ",a[i]);
	printf("\n no if merge call%d  ",j*2+1);
	
	
}
*/
int main(int argc, char *argv[])
{   
	long k,l,m,n,p,q;
	n=100000;
	long *a=new long[100001];
    char ab[10];
    FILE *f=fopen("IntegerArray.txt","r");
    for( long i=0; i<n; i++)
    {
            fgets(ab,10,f);
            a[i]=atol(ab);
    }
    fclose(f);
    cout<<a[0];
	mergesort(a,0,n-1);
	
    
	
//	printf("\n no if merge inversion are  %d  ",inv);
	
	/*for(long i=0;i<10;i++)
	cout<<a[i]<<"  ";*/
	
	
	cout<<"no of count inversons are"<<inv<<endl;
	
	delete a;
}

void mergesort(long a[],long l,long r)
{
	if(r>l)
	{ long m=l+(r-l)/2;
	
	  mergesort(a,l,m);                                     //left	
	  mergesort(a,m+1,r);                                //right
	  merge(a,l,m,r);
	  
	}
}

void merge(long a[],long f, long m, long n)
{
	long d,e,i,j=0,k,n1,n2;
	n1=m-f+1;
	n2=n-m;       //imp
	long *l=new long [n1];
	long *r=new long [n2];
	
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
        {  
		    inv=inv+n1-i;
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
