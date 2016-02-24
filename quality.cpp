#include<iostream>
using namespace std;
int main()
{
	long long i,j,k,ii,jj,kk,s,t,c;
	c=0;
	while(scanf("%lld%lld%lld%lld%lld%lld",&i,&j,&k,&ii,&jj,&kk)!=EOF)
	{   c++;
		s=0; t=0;
		if(i!=0)
		{
			s=s+1;
			t+=i+(ii-1)*1200;
		}
		if(j!=0)
		{
			s=s+1;
			t+=j+(jj-1)*1200;
		}	
		if(k!=0)
		{
			s=s+1;
			t+=k+(kk-1)*1200;
		}
	printf("team %lld: %lld, %lld\n",c,s,t);
	}
}
