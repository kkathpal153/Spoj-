#include<iostream>
#include<map>
using namespace std;

map<long long,bool> dp;

int main()
{    bool *a=new bool[4294967296];
	 long long j,k,l,m,n,i,s; s=0;
     cout<<dp[3];
     for(i=2;dp[i]!=true&&i<4294967296;i++)
     {  
     	for(j=i+i;j<4294967296;j=j+i)
     	{dp[j]=true; }                       //true means its a factor of something
	 }
    cout<<"success "<<s<<endl;
}
