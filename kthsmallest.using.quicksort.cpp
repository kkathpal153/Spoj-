#include<iostream>
#include<climits>
using namespace std;
 unsigned *arr=new  unsigned [5000000];
unsigned partition( unsigned l, unsigned r);
 
// This function returns k'th smallest element in arr[l..r] using
// QuickSort based method.  ASSUMPTION: ALL ELEMENTS IN ARR[] ARE DISTINCT
unsigned kthSmallest( unsigned l, unsigned r, unsigned k)
{
    // If k is smaller than number of elements in array
    if (k > 0 && k <= r - l + 1)
    {
        // Partition the array around last element and get
        // position of pivot element in sorted array
        unsigned pos = partition( l, r);
 
        // If position is same as k
        if (pos-l == k-1)
            return arr[pos];
        if (pos-l > k-1)  // If position is more, recur for left subarray
            return kthSmallest( l, pos-1, k);
 
        // Else recur for right subarray
        return kthSmallest( pos+1, r, k-pos+l-1);
    }
 
    // If k is more than number of elements in array
    return INT_MAX;
}
 
inline void swap( unsigned *a,  unsigned *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
// Standard partition process of QuickSort().  It considers the last
// element as pivot and moves all smaller element to left of it
// and greater elements to right
inline unsigned partition( unsigned l, unsigned r)
{
    unsigned x = arr[r], i = l;
    for (unsigned j = l; j <= r - 1; j++)
    {
        if (arr[j] <= x)
        {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[r]);
    return i;
}
 
 void randomize(unsigned a,unsigned b,unsigned mod)
{
	for( int i=0 ; i<5000000 ; i++ )
	{
		a = 31014 * (a & 65535) + (a >> 16);
		b = 17508 * (b & 65535) + (b >> 16);
		arr[i] = ((a << 16) + b) % mod;
	}
}

// Driver program to test above methods
int main()
{   unsigned a,b,mod,k;
    cin>>a>>b>>mod>>k;
    randomize(a,b,mod);
    cout<< kthSmallest( 0, 5000000-1, k);
    return 0;
}
