#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long i,j,l,m,n,k,s,t;
	scanf("%ld%ld%ld",&n,&k,&s);
	if(n>=1&&n<=1000&&k>=1&&k<=1000&&s>=1&&s<=1000)
	{	
		
		int *b=new int[n+2]; 
		l=0;
		for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	     l=0; t=0;
		sort(b,b+n);
	    n=n-1;
		while(t<k*s)
		{
			t=t+b[n];
			n--; l++;
		}
	   cout<<l;
    }
}

