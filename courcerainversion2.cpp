
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#define SIZE 100000

using namespace std;

long long inv=0;

long long splitInv(int *arr, long l, long u)
{
     int *tarr = new int[u-l+2];
     long i=l, j=(u-l)/2+l+1, k;
     long long count=0;
     for(k=1; (k<=u-l+1) && (i<=(u-l)/2+l) && (j<=u); k++)
     {
              if(arr[i]<arr[j]) tarr[k]=arr[i++];
              else
              {
                  tarr[k]=arr[j++];
                  count=count+((u-l)/2+l-i+1);
                  //inv=inv+((u-l)/2+l-i+1);
              }
     }
     for(; k<=u-l+1 && i<=(u-l)/2+l; k++) tarr[k]=arr[i++];
     for(; k<=u-l+1 && j<=u; k++) tarr[k]=arr[j++];
     for(k=1, i=l ; k<=u-l+1 && i<=u; k++, i++) arr[i]=tarr[k];
     delete tarr;
     return count;
}

long long numInv(int *arr, long l, long u)
{
     if(u<=l) return 0;
     return numInv(arr, l, (u-l)/2+l) + numInv(arr, (u-l)/2+l+1, u) + splitInv(arr, l, u);
}


int main(int argc, char *argv[])
{
    
    
	int *arr=new int[SIZE+1];
    char a[10];
    FILE *f=fopen("IntegerArray.txt","r");
    for(long i=1; i<=SIZE; i++)
    {
            fgets(a,10,f);
            arr[i]=atol(a);
    }
    fclose(f);
    //cout<<arr[0]<<endl;
    cout<<"Number of Inversions: "<<numInv(arr,1,SIZE)<<endl;
    //cout<<endl<<"no of split inversions are"<<inv;
    //cout<<"value of no"<<*arr[14578]<<"  "<<*arr[24564]<<endl;
	delete arr;
    system("PAUSE");
    return EXIT_SUCCESS;
    
}
