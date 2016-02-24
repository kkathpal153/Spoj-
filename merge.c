#include<stdio.h>

int j;

void merge(int a[],int p,int q,int n);
void mergesort(int a[],int p,int n);

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


void mergesort(int a[],int l,int r)
{
	if(l<r)
	{ int m=l+(r-l)/2;
	
	  mergesort(a,l,m);                                     //left	
	  mergesort(a,m+1,r);                                //right
	  merge(a,l,m,r);
	  
	}
}

void merge(int a[],int f, int m, int n)
{
	int d,e,i,j=0,k,n1,n2;
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
        {
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
