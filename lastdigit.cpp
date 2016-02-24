#include<iostream>
#include<string.h>
using namespace std;int main(){ long long d,t,a,b;char aa[1001];cin>>t;if(t<=30)while(t--){d=1;scanf("%s %lld",&aa,&b);a=aa[strlen(aa)-1]-'0';if(a==0&&b!=0) d=0;else if(a>0&&b>0)while(b){ if(b%2)d=(d*a)%10;b>>=1;a=(a*a)%10; }printf("%lld\n",d);}return 0;}
