#include<iostream>

using namespace std;

int main()
{
	long long i,j,l,k,m,n,a,b;
	char ch;
	cin>>n;
	while(n--)
	{   scanf("%c",&ch);
		m=0;
		cin>>k;
		l=k;
		while(l--)
		{
			cin>>i;
			m=m+i;
			m=m%k;
		}
		if(!m)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}
