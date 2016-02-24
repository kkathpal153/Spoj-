#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include <deque>
using namespace std;
long inv=0;
int  _mergeSort(int arr[], int temp[], int left, int right);
int merge(int arr[], int temp[], int left, int mid, int right);
  
/* This function sorts the input array and returns the
   number of inversions in the array */
int mergeSort(int arr[], int array_size)
{
    int *temp = (int *)malloc(sizeof(int)*array_size);
    return _mergeSort(arr, temp, 0, array_size - 1);
}
  
/* An auxiliary recursive function that sorts the input array and
  returns the number of inversions in the array. */
int _mergeSort(int arr[], int temp[], int left, int right)
{
  int mid, inv_count = 0;
  if (right > left)
  {
    /* Divide the array into two parts and call _mergeSortAndCountInv()
       for each of the parts */
    mid = (right + left)/2;
  
    /* Inversion count will be sum of inversions in left-part, right-part
      and number of inversions in merging */
    inv_count  = _mergeSort(arr, temp, left, mid);
    inv_count += _mergeSort(arr, temp, mid+1, right);
  
    /*Merge the two parts*/
    inv_count += merge(arr, temp, left, mid+1, right);
  }
  return inv_count;
}
  
/* This funt merges two sorted arrays and returns inversion count in
   the arrays.*/
int merge(int arr[], int temp[], int left, int mid, int right)
{
  int i, j, k;
  int inv_count = 0;
  
  i = left; /* i is index for left subarray*/
  j = mid;  /* i is index for right subarray*/
  k = left; /* i is index for resultant merged subarray*/
  while ((i <= mid - 1) && (j <= right))
  {
    if (arr[i] <= arr[j])
    {
      temp[k++] = arr[i++];
    }
    else
    {
      temp[k++] = arr[j++];
  
     /*this is tricky -- see above explanation/diagram for merge()*/
      inv_count = inv_count + (mid - i);
    }
  }
  
  /* Copy the remaining elements of left subarray
   (if there are any) to temp*/
  while (i <= mid - 1)
    temp[k++] = arr[i++];
  
  /* Copy the remaining elements of right subarray
   (if there are any) to temp*/
  while (j <= right)
    temp[k++] = arr[j++];
  
  /*Copy back the merged elements to original array*/
  for (i=left; i <= right; i++)
    arr[i] = temp[i];
  
  return inv_count;
}
  
  
  
int main()
{
    int t;
	scanf("%d",&t);
	if(t<=10&&t>=1)
	for(;t>0;t--)
	{   int i,j,l,f,k,m,n,ff,ll,z;
		scanf("%d",&n);
		int *a=new int[n+1];
			for(m=0;m<n;m++)
			scanf("%d",&a[m]);
	
			deque<int> my;
			l=mergeSort(a,n);
				for(m=0;m<n;m++)
				{
					f=0; l=n-1;
					for(m=0;m<n;m++)
					{     
					       if(a[l]>=a[f])
					       {k=a[l];
					       l--;
						   }
						   else
						   {
						    k=a[f];
						    f++;
						    }
						    
					deque<int>::iterator it = my.begin();
					  ff=*it;
					  it=my.end();
					  ll=*it;
					  
					 
					  if(m==0)
					  {
					  	my.push_front(k);
					  }
					  else if(k<=ff)
					  {
					  	my.push_front(k);
					  }
					  else if(k>=ll)
					  {
					  		my.push_back(k);
					  }
					  else
					  	my.push_front(k);
					  
					  
				}
				for(m=0;m<n;m++)
					{ a[m]=my[m];
				    }
				k=mergeSort(a,n);
				if(k<=l&&k>=0)
				  l=k;
			}
			
			
			cout<<l<<endl;
		
			
	}
}
