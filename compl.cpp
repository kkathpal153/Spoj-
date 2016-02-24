#include<iostream>

using namespace std;
int main()
{ long long a[101],s,c,n,k,l,d;
  long long i,j;
   cin>>n;
   if(n<=5000)
   while(n--)
	{ 		i=0;
		   	cin>>s>>c;
		   	if(s>=1&&c>=1&&s<100&&c<100&&s+c<=100)
		   	{
					  
				   	while(i<s)
				   	{ 
				   	   cin>>a[i];
				   	   i++;
					}
					
						
						while(c--)
						{  
						    d=0;
							for(i=1;i<=s;i++)
							{    k=1; l=1;
								 for(j=1;j<=s;j++)
								 {
								 	if(i!=j)
								 	{
								 		k=k*(i-j);
								 		l=l*(s+1-j);
								 		
									 }
									 
								 }
								 
								 d=d+a[i-1]*(l/k);
							}
							a[i-1]=d;
						    cout<<d<<" ";
							s++;
						}
						cout<<"\n";
			  }
				    
	}
}
