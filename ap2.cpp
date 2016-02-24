#include<iostream>

using namespace std;

int main()
{
	long long f3,l3,d,a,s,t,n,i;
	cin>>t;
	if(t<=100)
	while(t--)
    {
    	cin>>f3;
    	cin>>l3;
    	cin>>s;
    	n=(s*2)/(f3+l3);
    	d=(l3-f3)/(n-2-3);
    	a=f3-2*d;
    	printf("lld\n",n);
    	for(i=0;i<n;i++)
    	{
    		printf("%lld ",a+i*d);
		}
	}
}
