#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

using namespace std;
int main()
{
	    int n;
		cin>>n;
		while(n--)
		{	int i,ii,j,k,l,m;
		    cin>>i>>ii;
			i=ii-i;
			cin>>j;
			int a[j][2], b[j+1];
			for(k=0;k<j;k++)
			cin>>a[k][0]>>a[k][1];
			memset(b,INT_MAX,j+1);
			for(k=0;k<j;k++)
				{if(i%a[k][1]==0)
				b[k]=min((i/a[k][1])*a[k][0],k==0?INT_MAX:b[k-1]);
				else
				b[k]=k==0?INT_MAX:b[k-1];
				}
		 if(b[k-1]==INT_MAX)	
		 cout<<"This is impossible."<<endl;
		 else
		 cout<<"The minimum amount of money in the piggy-bank is "<<b[k-1]<<endl;
		}
}
