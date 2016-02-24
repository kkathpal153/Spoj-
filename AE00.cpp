#include<iostream>
typedef long long ll;
using namespace std;
//ll convert(ll a);
ll convert(ll a)
{
	ll i,j,s;
	i=2; s=0;
	while(i<a/2)
	{
	   for(j=i;i*j<=a;j++)
	   	s=s+1;
	  
	 i++;
	}
	
	return s+a;
}
int main()
{
  ll i,j,n;
  cin>>n;
  i=convert(n);
  cout<<i;
}
