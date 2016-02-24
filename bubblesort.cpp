#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
/*void bubblesort(int a[],int n){
	int i,j,c,d,swap,temp;
	for(i=1;i<n;++i)
	for(j=0;j<(n-i);++j)
	if(a[j]>a[j+1])
	{
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
}
	
  }

*/
void selectionsort (int a[], int n) 
{
    int i, j, m, t;
    for (i = 0; i < n; i++) {
        for (j = i, m = i; j < n; j++) {
            if (a[j] < a[m]) {
                m = j;
            }
        }
        t = a[i];
        a[i] = a[m];
        a[m] = t;
    }
}/*
void insertionsort(int arr[], int length) {
 int i, j ,tmp;
 for (i = 1; i < length; i++) {
 j = i;
		 while (j > 0 && arr[j - 1] > arr[j]) {
		 tmp = arr[j];
		 arr[j] = arr[j - 1];
		 arr[j - 1] = tmp;
		 j--;
		 }//end of while loop
 
  }
  }*/
/*
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



void mergesort(int a[],int l,int r)
{
	if(l<r)
	{ int m=l+(r-l)/2;
	
	  mergesort(a,l,m);                                     //left	
	  mergesort(a,m+1,r);                                //right
	  merge(a,l,m,r);
	  
	}
}
/*
*//*
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/* This function takes last element as pivot, places the pivot element at its
   correct position in sorted array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right of pivot *//*
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
            swap(&arr[i], &arr[j]);  // Swap current element with index
        }
    }
    swap(&arr[i + 1], &arr[h]);  
    return (i + 1);
}

/* arr[] --> Array to be sorted, l  --> Starting index, h  --> Ending index *//*
void quickSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = partition(arr, l, h); /* Partitioning index 
        quickSort(arr, l, p - 1);
        quickSort(arr, p + 1, h);
    }
}
*/
int main()
{   int i,a,j,n,l,m;
    time_t s,e;
	cout<<"enter the size of the array to find out selection sort complexity\n";
	cin>>a;
	m=2;
	while(m!=0)
	{
		
		int *ar=new int[a];
		cout<<"Enter \n'1' for avg case \n'2' for worst case \n'3' for best case\n";
	    cin>>m;
	    switch(m)
	    {
	    	case 1: for(i=0;i<a;i++) ar[i]=rand();
	    	        s=clock();
	    	        /*quickSort(ar,0,a-1);  //mergesort(ar,0,a-1); // // //*/ selectionsort(ar,a); // */bubblesort(ar,a);
	    	        s=clock()-s;
	    	        cout<<"the time complexity is "<<s<<" milliseconds or "<<s/1000<<" seconds\n\n";
	    	        break;
		    case 3: for(i=0;i<a;i++) ar[i]=0;
	    	        s=clock();
	    	        /*quickSort(ar,0,a-1); //mergesort(ar,0,a-1);  //insertionsort(ar,a);  ////*/selectionsort(ar,a);   //*/bubblesort(ar,a);
	    	        s=clock()-s;
	    	        cout<<"the time complexity is "<<s<<" milliseconds or "<<s/1000<<" seconds\n\n";
	    	        break;
	    	case 2: for(i=0;i<a;i++) ar[i]=i;
	    	        s=clock();
	    	        /*quickSort(ar,0,a-1);//mergesort(ar,0,a-1); //insertionsort(ar,a);  ////*/selectionsort(ar,a); // bubblesort(ar,a);
	    	        s=clock()-s;
	    	        cout<<"the time complexity is "<<s<<" milliseconds or "<<s/1000<<" seconds\n\n";
	    	        break;
	    	default : break;
	    }
	    
    }
}
