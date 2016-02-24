#include<stdio.h>
int main()
{
	long m,j,l;
	scanf("%lld",&l);
	while(l--)
	{
		scanf("%lld",&j);
		m=((j)*(j+2)*(2*j+1))/8;
		printf("%lld\n",m);
	}
}
