#include<iostream>
using namespace std;

int main()
{
	long i,j,l,k,n,m;
	bool q,w,e,r,t,y,f;
	while(cin>>n&&n!=0)
	{   f=false;
		int *a= new int[n+1];
		int *b=new int[n+1];
		for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
		for(i=1;i<=n;i++)
		{
			b[a[i]]=i;
		}
	   	
		for(i=1;i<=n;i++)
		{
		   if(a[i]!=b[i])
		   {
		   	f=true;
		   }
		}
		
		if(f)
		{
			cout<<"not ambiguous"<<endl;
		}
		else
		cout<<"ambiguous"<<endl;
		
	}
}
