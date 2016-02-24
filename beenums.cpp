#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long i,j,l,m,n,p=1;
	bool k=false;
	while(scanf("%ld",&n)&&n!=-1)
	{   k=false; p=1;
	    if(n==1)
	    printf("Y\n");
		else
		{
			for(i=0;p<n;i++)
			{
				p=6*i+p;
				//cout<<p<<endl;
				if(p==n)
				{
					printf("Y\n");
					k=true;
					break;
				}
			}
			if(!k)
			{
				printf("N\n");
			}
		}
	}
}
