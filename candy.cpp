#include<iostream>
#include<vector>
using namespace std;

int main()
{
	long i,j,l,m,n,count;
	double avg;
	int *a=new int[10001];
	n=2; 
	while(cin>>n&&n!=-1&&n>=1&&n<=10000)
	{
		l=0; count=0; avg=0;
		while(l<n)
		{
			cin>>a[l];
			avg=avg+a[l];
			
			l++;
		}
		
		l=0;
		avg=avg/n;
		if(avg -(int)avg ==0)
		{    
		     
			 while(l<n)
			{
				if(a[l]>avg)
				{  count=count+a[l]-avg;
				}
			  l++;
			}
		cout<<count<<"\n";
	   }
	   else
	   cout<<"-1\n";
	   
	}
}
