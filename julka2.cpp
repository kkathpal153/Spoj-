#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

using namespace std;

void convert(int l)
{
	
}

int main()
{
	char c[100],l;
	int a[100],n;
	
	
	
	cin>>n;
	
	//for(int i=0;i<n;i++)
	//{  
	cin>>c;
	   l=strlen(c);
	   while(l--)
	   a[l]=c[l]-'0';
     //} 
	 
	 for(int i=0;i<strlen(c);i++)
	{ // cin>>c;
	   cout<<a[i]<<"  ";
     } 
}
