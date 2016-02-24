#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{ int i,j,k,l;
  l=0;
   int n=1;
   while(cin>>n&&n>0&&n<=100&&n!=0)
   {   l=0; n=n+1;
   	   while(n--&&n>0)
		  {
		  	l=l+n*n;
		   } 
		cout<<l<<endl;
   }
}
