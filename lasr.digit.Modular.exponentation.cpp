#include<iostream>
#include<stdio.h>
using namespace std;
long long modexpo(long long a,long long b,long long n)
{   long long d=1;
    while(b)
    {   if(b%2)
        d=(d*a)%n;
        
          b>>=1;
        a=(a*a)%n; 
	}
	return d;
}
int main()
{
    int t;
    long long a,b;
    cin>>t;
    
    while(t--)
    {   scanf("%lld",&a);
        long long k=0,l=0,j=0;
        while(k<a)
        {   
		    j++; //cout<<"rinnin";
            l=modexpo(j,3,1000);
            if(l==888)
            {
            	k=k+1;
			}
        
		}
		cout<<j<<endl;
    }
    return 0;
}
