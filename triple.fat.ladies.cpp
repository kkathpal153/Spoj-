#include<iostream>
#include<stdio.h>
using namespace std;
/*long long modexpo(long long a,long long b,long long n)
{   long long d=1;
    while(b)
    {   if(b%2)
        d=(d*a)%n;
        
          b>>=1;
        a=(a*a)%n; 
	}
	return d;
}*/
int main()
{
    long long a,b,l,t;
    cin>>t;
    
    while(t--)
    {   scanf("%lld",&a);
        l=250*(a-1);
        
		cout<<192+l<<endl;
    }
    return 0;
}
