#include<iostream>
#include<map>
#include<string>
using namespace std;

map<string,int>dp;
int main(){
dp["S"]=0;
dp ["."]=1;
dp[".."]=2;
dp["..."]=3;
dp["...."]=4;
dp["-"]=5;
dp[". -"]=6;
dp[".. -"]=7;
dp["... -"]=8;
dp[".... -"]=9;
dp["- -"]=10;
dp[". - -"]=11;
dp[".. - -"]=12;
dp["... - -"]=13;
dp[".... - -"]=14;
dp["- - -"]=15;
dp[". - - -"]=16;	
dp[".. - - -"]=17;
dp["... - - -"]=18;	
dp[".... - - -"]=19;	
    string s;
	long i,j,k,l,m;
	i=1; char c;
	long a[8]={0,1,20,360,7200,144000,2880000,57600000};
	
	while(cin>>i&&i!=0)
	{  m=0;cin.get(c);
		for(j=i;j>0;j--)
		{   
			getline(cin,s);
			
			m=a[j]*dp[s]+m;
			//cout<<s<<" value of m"<<m<<" dp value"<<dp[s]<<endl;
		}
		
		cout<<m<<endl;
	}
}
