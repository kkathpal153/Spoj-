#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	long long i,j,k;
	while(cin>>s&&s!="0")
	{
		//cout<<s<<endl;
	 long long  dp[6001];
	  memset(dp,0,6001);
	  dp[0]=1;
	  for(i=1;i<s.size();i++)
	  {
	  	j=((s[i-1]-'0')*10+(s[i]-'0'));
	  	if(s[i]-'0'!=0)
	  	{
	  		dp[i]=dp[i-1];
		  }
		if(j>=10&&j<=26)
		{ // cout<<"j running "<<j<<endl;
			dp[i]+=dp[(i-2)<0?0:i-2];
		}
	//cout<<dp[i]<<" i was "<<i<<"  ";
     }
		cout<<dp[i-1]<<endl;
	}
	
}

