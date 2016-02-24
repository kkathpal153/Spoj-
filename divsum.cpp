#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	long long i,j,n,m,k,c;
	cin>>n;
	double l;
	if(n>=1&&n<=200000)
	{
		while(n--)
		{   c=0;
			cin>>k;
			l=sqrt(k);
			//cout<<l;
			if(k>=2&&k<=500000)
			{
				for(i=1;i<=l;i++)
				{
					if(k%i==0)
					{
						c=c+i;
						//cout<<"value of c  "<<i<<"  "<<c<<endl;
						if(i!=l&&(k/i)!=k)
						{c=c+k/i;
						//cout<<"value of c "<<k/i<<"  "<<c<<endl;
					}
					}
					
				}
			}
            
            cout<<c<<endl;
			
		}
	}
	
}
