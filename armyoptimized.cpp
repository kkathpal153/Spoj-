#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long i,j,l,k,m,n,d,a,b;
	
	cin>>l;
	while(l--)
	{   n=0; m=0;
		cin>>a;
		cin>>b;
		for(i=0;i<a;i++)
		{
		scanf("%d",&d);
		if(d>m)
		  m=d;
	    }
		for(i=0;i<b;i++)
		{ scanf("%d",&d);
		if(d>n)
		  n=d;
	    }
		/*sort(aa,aa+a);
		//reverse(aa,aa+a);
		sort(bb,bb+b);
		//reverse(bb,bb+b);
		//for(i=0;i<a;i++)  printf("%d  ",bb[i]);*/
		
		if(m>=n)
		{
		     cout<<"Godzilla\n";
		}
		else
		{
			cout<<"MechaGodzilla\n";
		}
	}
}
