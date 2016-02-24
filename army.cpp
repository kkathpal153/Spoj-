#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long i,j,l,k,m,n,d,a,b;
	
	cin>>l;
	while(l--)
	{   bool f,x,z;
		cin>>a;
		cin>>b;
		int *aa=new int[a];
		int *bb=new int[b];
		for(i=0;i<a;i++)
		scanf("%d",&aa[i]);
		for(i=0;i<b;i++)
		scanf("%d",&bb[i]);
		sort(aa,aa+a);
		//reverse(aa,aa+a);
		sort(bb,bb+b);
		//reverse(bb,bb+b);
		//for(i=0;i<a;i++)  printf("%d  ",bb[i]);
		
		if(aa[a-1]>=bb[b-1])
		{
		     cout<<"Godzilla\n";
		}
		else
		{
			cout<<"MechaGodzilla\n";
		}
	}
}
