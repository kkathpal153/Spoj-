#include<stdio.h>
#include<fstream>
#include<iostream>
#include<cstdlib>

using namespace std;

long z;

long long count=0;
void swap(int a[],long p,long q);
long quicksort(int a[],long p,long n,long m);


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
    return (i +1);
}
int main(int argc, char *argv[])
{
	long i,k,l,m,n,p,q;
	
	//cout<<"enter the length of the array"<<endl;
/*	scanf("%d",&n);	
    for(i=0;i<n;i++)0
    {  cin>>arr[i];
	}*/
	while(p!=-1)
	{ //int *arr=new int[100];
	  int arr[12]={5,89,25,65,86,45,73,55,12,35};
	cout<<"enert the th kth element\n"<<endl;
	cin>>p;
	l=quicksort(arr,0,9,p);
	
	cout<<" value of the kth element array is"<<l<<endl;
    //delete arr;
	}
	
	
	
}



long quicksort(int a[],long l,long r,long p)
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
	  
	   s=s-1;
	  swap(a,l,s);
	  
	  //s=partition(a,l,r);
	  cout<<endl<<"value of l "<<l<<" value of r "<<r<<endl;
	  cout<<"pp "<<s<<"pv "<<a[s]<<endl;
	  int le=s-l+1;
	  cout<<"value of len is "<<le<<endl;
	  if (le==p)
	  {   cout<<"running"<<endl;
	      return a[s];
	  }
	  else if (p<le){
	  cout<<"p<le running"<<endl;
	  return quicksort(a,l,s-1,p);    }                  
	  else  {
	   cout<<"p>le runnign"<<endl;     
	  return quicksort(a,s+1,r,p-le);                      
         }
	  }
	}


void swap(int a[],long i,long j)
{
	int temp;
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}



