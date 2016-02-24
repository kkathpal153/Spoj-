#include<stdio.h>
#include<fstream>
#include<iostream>
#include<cstdlib>

using namespace std;
int *arr=new int[10000];

long long count=0;
void swap(int a[],long p,long q);
void quicksort(int a[],long p,long n);

void getPivot(int *arr, int l, int u)
{
    int m=l+(u-l)/2;
    if(arr[l]>=arr[m] && arr[l]>=arr[u])
    {
        if(arr[m]>=arr[u]) swap(arr,m,l);
        else swap(arr,u,l);
    }
    else if(arr[m]>=arr[l] && arr[m]>=arr[u])
    {
        if(arr[u]>=arr[l]) swap(arr,u, l);
    }
    else if(arr[m]>=arr[l]) swap(arr,m, l);
}

int partition (int arr[], int l, int h)
{
    int x = arr[h];    // pivot
    int i = (l - 1);  // Index of smaller element
 
    for (int j = l; j <= h- 1; j++)
    {
        // If current element is smaller than or equal to pivot 
        if (arr[j] <= x)
        {
            i++;    // increment index of smaller element
            swap(arr,i, j);  // Swap current element with index
        }
    }
    swap(arr,i + 1, h);  
    return (i + 1);
}

int main(int argc, char *argv[])
{
	long i,k,l,m,n,p,q;
	
	//scanf("%d",&n);
	

    char a[10];
    FILE *f=fopen("QuickSort.txt","r");
    for(long i=0; i<10000; i++)
    {
            fgets(a,10,f);
            arr[i]=atol(a);
    }
    fclose(f);
	quicksort(arr,0,10000-1);
	
	cout<<"no of counts are"<<count;
	delete arr;
	
	
}


void quicksort(int a[],long l,long r)
{  
    
	/*else
	{ 
      int s,b;	  
	  s=l+1;
	  for(b=l+1;b<=r;b++)
	    {
	    	if(a[b]<=a[l])
	    	{   
	    	    swap(a,s,b);
	    		s++;
			}
			
		}*/
	  if(l<=r)
	  {  
	     int s,b,k;	  
	     s=l+1;
	     
	   //swap(a,l,r); //for question 2
	   //getPivot(arr,l,r);        
	     k=a[l];
	  for(b=l+1;b<=r;b++)
	    {
	    	if(a[b]<=k)
	    	{   
	    	    swap(a,s,b);
	    		s++;
			}
			
		}
	  
	  count=count+r-l;
	  swap(a,l,s-1);
	  s=s-1;
	  quicksort(a,l,s-1);                                     //left	
	  quicksort(a,s+1,r);                                //right
	  ///merge(a,l,m,r);
      }
	}


void swap(int a[],long i,long j)
{
	int temp;
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}


/*void merge(int a[],int f, int m, int n)
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
}*/
