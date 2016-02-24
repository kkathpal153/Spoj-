#include<iostream>
#include<string>
using namespace std;

int main()
{
	int l,n,a,d,i;
	string s,t;
	char temp;
	while(cin>>s&&s!=".")
	{
	  cin>>a;
	  l=s.length();
	  l--;
	  for(i=0;i<a;i++)
	  cout<<s;
	  cout<<endl;
	  while(l--)
	  {  
	  t=s[0];
	  s.erase(s.begin());
	  s+=t;
	  for(i=0;i<a;i++)
	  cout<<s;
	  cout<<endl;
   }
   }
}
