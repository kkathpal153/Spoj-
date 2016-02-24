#include<iostream>
using namespace std;
long long gcd ( long long a, long long b )
{
  if ( a==0 ) return b;
  return gcd ( b%a, a );
}
int main()
{
	bool *a=new bool[1000000001];
	long long i,j,k,l,m,n,s;
	long long*ar=new long long[101];
	bool f;
	cin>>n;
	cin>>k;
	for(i=1;i<=k;i++)
	cin>>ar[i];
	/*
	for(i=1;i<=n;i++)
	{ f=false;
		for(j=1;j<=k&&!f;j++)
		{ 
		if(i%ar[j]==0&&!f)
    		{a[i]=1;
	    	 f=true;
		    }
	    }
   }
   /*
   for(i=1;i<=k;i++)
   for(j=ar[i];j<=n;j=j+ar[i])
	 a[j]=1;
	
	*/
	s=gcd(ar[1],ar[2]);
	cout<<s<<endl;
	for(i=3;i<=k;i++){
	cout<<"unning"<<endl;
	s=gcd(a[i],s);}
	
	cout<<"lcm is"<<s<<endl;
	for(i=1;i<=n;i++)
	if(a[i]!=1)
	s=s+1;
	
	cout<<s;
}
