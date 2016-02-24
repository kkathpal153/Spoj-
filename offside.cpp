#include<iostream>
using namespace std;

int main()
{  int i,j,k,l,m,n,a,d,aa,aaa,ddd,dd1,dd2;
     a=d=2;
     //aa=dd=0;
     dd2=0;
	while(cin>>a>>d&&(a!=0&&d!=0))
	{   dd1=dd2=99999;
	    aa=99999;
		while(a--)
		{
			scanf("%d",&aaa);
			if(aa>aaa)
			aa=aaa;
		}
		while(d--)
		{ 
		  scanf("%d",&ddd);
			if(dd2>ddd)
			{ if(dd1>ddd)
			   { dd2=dd1;
			     dd1=ddd;
			  }
			  else 
			  dd2=ddd;
			}
		}
		cout<<"value of d1 "<<dd1<<"value of aa "<<aa<<"value of dd2 "<<dd2<<endl;
		if(aa>=dd1&&(aa==dd2||aa>dd2))
		{ 
		  cout<<"N\n";
		}
		else
		cout<<"Y\n";
	}
}
