#include<iostream>
#include<string.h>
using namespace std;

int convert(string a)
{
	int i,j,l,k,s;
	k=0; s=0;
	for(i=0;i<a.length();i++)
	{
	     if(a[i]-48>=0&&a[i]-48<=9)
		 {
		 	 k=(int)a[i]-48;
		 	 s=s*10+k;
			 }	
	}
	return s;
}
bool detect(string a)
{
	string st="machula";
    int pch = a.find(st);
    if(pch!=-1)
    return false;
    
    else return true;
}
int main()
{
	string a,b,c;
	char d,e; bool aaa,bbb,ccc;
    int i,j,l,k,t,aa,bb,cc;
    cin>>t;
    while(t--)
    {
    	cin>>a;
    	cin>>e;
    	cin>>b;
    	cin>>d;
    	cin>>c;
    	aaa=detect(a);
    	if(aaa)
    	{  bbb=detect(b);
    		if(bbb)
    		{  ccc=detect(c);
    		   
			}
		}
		aa=convert(a);
		bb=convert(b);
		cc=convert(c);
		
		if(!aaa)
		{
			aa=cc-bb;
		}
		else if(!bbb)
		{
			bb=cc-aa;
		}
		else
		{
			cc=aa+bb;
		}
		cout<<aa<<" + "<<bb<<" = "<<cc<<endl;
	}
    
}
