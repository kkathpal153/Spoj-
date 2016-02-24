#include<iostream>
using namespace std;
int powdiv(int a, int b) // to forward the quotient if not a multiple of 'b' return b
{ int i,j,k;
 while(a%b==0)
 {
 	a=a/b;
 }
 return a;
}

bool check(int a)
{
	int i,j,k;
	a=powdiv(a,2);
	a=powdiv(a,3);
	a=powdiv(a,5);
	
	return (a==1) ? true : false;
	}	
int main()
{
	int i,j,l,m,n;
	cin>>n;
	bool k=check(n);
	cout<<k<<"\n";
}
