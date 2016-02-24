#include<iostream>
#include<string.h>

using namespace std;

void cp (string s)
{
	int i;
	if(s[0]=='_'||s[s.length()-1]=='_')
	{ 	cout<<"Error!\n";	
	    return;
	}
	
	for(i=0;i<s.length();i++)
	{
		if((s[i]=='_'&&s[i+1]!='_')&&islower(s[i+1]))
		{
			s.erase(s.begin()+i);
			s[i]=toupper(s[i]);
		}
		else if(isupper(s[i])||(s[i]=='_'&&s[i+1]=='_'))
		{
			cout<<"Error!\n";
			return;
		}
	}
	cout<<s<<endl;

}
void java(string s)
{   int i; bool d;
	if(isupper(s[0]))
	{
		cout<<"Error!\n";
		return;
	}
	
	for(i=0;i<s.length();i++)
	{
		if(isupper(s[i]))
		{
			s.insert(s.begin()+i,'_');
			s[i+1]=tolower(s[i+1]);
			i++;
		}
	
	}
	cout<<s<<"\n";
	
}

void check(string s)
{
	bool l,d; int i;
	for(i=0;i<s.length();i++){
		if(s[i]=='_')
		{
		   d=true;
		   cp(s); 
		   return;
		}
	}
	if(!d)
	{
		for(i=0;i<s.length();i++){
		if(isupper(s[i]))
		{  
		   l=true;
		   java(s);
		   return;
		}
	    }
    }
    cout<<s<<"\n";

}

int main()
{
	char c[102];
	string s;
	int i,j,l,k;
	while(cin>>s)
	{
		check(s);
   }
}
