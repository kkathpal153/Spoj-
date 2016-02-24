#include<iostream>

using namespace std;

int main()
{
	long long i,j,l,m,n,s,k;
	scanf("%llu",&n);
    if(n>=0&&n<=20)
	while(n--)
    { s=0;
     cin>>m;
	for(i=1;s<m;i++)
	s=s+i;
	
	i--;
	//cout<<"value os s is  i is"<<s<<" "<<i<<endl;
	
	l=1;
	k=i;
	for(j=s-i+1;j<=s;j++)
	{
		if(j==m)
		{  if(k%2==0)
		   cout<<"TERM "<<m<<" IS "<<l<<"/"<<i<<endl;
		   else
		   cout<<"TERM "<<m<<" IS "<<i<<"/"<<l<<endl;
		}
		i--;
		l++;
	}
	}
}
