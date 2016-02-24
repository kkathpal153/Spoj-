#include<iostream>
#include<string>

using namespace std;

int main()
{   string ab;
	char ans[100][100];
	int i,j,n,l,b=0;
     n=2;
     
	while(n!=0)
	{   
	    cin>>n;
	    
			if(n>=2&&n<=20)
		{   //s=true;
			cin>>ab; b=0;
			//cout<<ab;
			l=ab.length();
			l=l/n;
			for(i=0;i<l;i++)
			{   int s=n-1;
				for(j=0;j<n;j++)
	             {  if(i%2==0)
	             	{
					ans[i][j]=ab[b];
	             	b++;
	                }
	                else
	                {
	                  ans[i][s]=ab[b];
					  b++;	s--;
					}
				}			
			}
			for(i=0;i<n;i++)
			{
				for(j=0;j<l;j++)
	             {
	             	cout<<ans[j][i];
	
							 }			
			}
			cout<<"\n";
	    }
	}
}
