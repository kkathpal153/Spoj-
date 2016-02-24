#include<iostream>
#include<string>
using namespace std;
int main()
{
	long i,g,j,m,n;
	bool a,b;
	char l,k;
	string s,t;
	cin>>g;
	while(g--)
	{    b=true;
		cin>>m;
		cin>>s;
		k=s[s.length()-1];
		m--;
		while(m--)
		{
			cin>>t;
			l=t[0];
			
			if(l!=k)
			b=false;
			
			//cout<<"value of k and l"<<k<<"  "<<l<<endl;
			k=t[t.length()-1];
		}
		
		if(b)
		cout<<"Ordering is possible."<<endl;
		else
		cout<<"The door cannot be opened."<<endl;
	}
}
