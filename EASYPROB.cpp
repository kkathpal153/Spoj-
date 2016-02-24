#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
string str,str2;
void two(int n)
{   int i,j,l,m;
	if(n==3){
	str+="+2+2(0)"; return; }
	else if(n==2)
	{
	str+="+2"; return; }
	
	else if(n==1||n==0){
		str+="+2(0)";
		return;
	}
	else
	{
		for(i=1;pow(2,i)<=n;i++);
	
	    str+="2(";
	    two(i-1);
	    str+=")";
	    str+="+";
	    l=n-pow(2,i-1);
	    if(n!=pow(2,i))
		{	for(j=1;pow(2,j)<=l;j++);
		    str+="(";
			two(j);
		    str+=")";
		}
		return;	    
	}
}
int main()
{   int n,m,i,j,k;
	cin>>n;
	m=n;
	str2="";
	for(i=0;m!=0;i++){
	str2+=(char)(m%10+'0');
	m=m/10;}
	k=str2.size(); k--;
	for(i=0;i<str2.size();i++)
	{
		str+=str2[k-i];
	}
	str+='=';
	two(n);
	cout<<str<<endl;
}
