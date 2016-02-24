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
    scanf("%d",&t);
    
    while(t--)
    {   scanf("%lld %lld",&a,&b);
        if(a==0&&b!=0)printf("0\n");
        else if(a!=0&&b==0)printf("1\n");
        else if(a>0&&b>0)
        printf("%lld\n",modexpo(a,b,10));
    }
    return 0;
}
