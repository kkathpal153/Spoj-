#include<iostream>
#include<map>
using namespace std;

map<long long,long long>dp;



int main()
{   dp[0]=1;
dp[1]=1;
dp[2]=2;
dp[3]=6;
dp[4]=24;
dp[5]=120;
dp[6]=720;
dp[7]=5040;
dp[8]=40320;
dp[9]=362880;
dp[10]=3628800;
dp[11]=39916800;
dp[12]=479001600;
dp[13]=6227020800;
dp[14]=87178291200;
dp[15]=1307674368000;
dp[16]=20922789888000;
dp[17]=355687428096000;
dp[18]=6402373705728000;
dp[19]=121645100408832000;
dp[20]=2432902008176640000;
	long long i,j,l,k,s,m;
	while(scanf("%lld",&i)&&scanf("%lld",&j)&&(i!=-1&&j!=-1))
	{
		if(i==0&&j==0)
		{
			printf("0+0!=0\n");
		}
		else
		{
			s=i+j;
			m=dp[s]/(dp[i]*dp[j]);
			if(m==s)
			printf("%lld+%lld=%lld\n",i,j,s);
			else
			printf("%lld+%lld!=%lld\n",i,j,s);
		}
	}
}
