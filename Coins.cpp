#include<iostream>
#include<map>
using namespace std;


map<long long,long long>dp;
long long convert(long long c)
{
	
	if(c==0)
	return 0;
	else if(dp[c]!=0)
	return dp[c];
	
	 long long cc;
	  cc=convert(c/2)+convert(c/3)+convert(c/4);
	  if(cc>c)
	  dp[c]=cc;
	  else dp[c]=c;
	  
	  return dp[c];
}

int main()
{
	long long i,j,n,m;
	

	long long co;
	
	while(cin>>m)
	{   
		
		if(m>=0&&m<=1000000000)
		{
		co=convert(m);
		cout<<co<<endl;
	    }
	}
}
