#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,m,n,t,s;
	cin>>t;
	for(;t>0;t--)
	{
		scanf("%d %d",&n,&k);
		int *a=new int[n+1];
		
		for(m=0;m<n;m++)
		{ scanf("%d",&a[m]);
		  a[m]=a[m]+k;
	    }
	    s=0;
	    for(m=0;m<n;m++)
		{	 if(a[m]%7==0)
		      s=s+1;
	    }
	 printf("%d\n",s);
	}
}
