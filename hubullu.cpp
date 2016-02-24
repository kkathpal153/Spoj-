#include<iostream>
using namespace std;
int main()
{
	long i,j,k,l,m,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		scanf("%ld %ld",&j,&k);
		if(k==0)
		{
			printf("Airborne wins.\n");
		}
		else if(k==1)
		{
			printf("Pagfloyd wins.\n");
		}
	}
}
