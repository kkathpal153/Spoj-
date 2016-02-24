#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long i,j,l,m,n,k,s,t;
	cin>>m;
	j=0;
	while(j<m)
	{
		scanf("%lld%lld%",&s,&n);
			
			int *b=new int[n+2]; 
			k=0;
			for(i=0;i<n;i++)
			{
			scanf("%d",&b[i]);
		     k=k+b[i];
			}
			if(k<s)
			{ printf("Scenario #%lld:\nimpossible\n\n",j+1);
		    }
		    else
		    {
			 l=0; t=0;
			sort(b,b+n);
		 	n=n-1;
		   	while(t<s)
			{
				t=t+b[n];
				n--; l++;
			}
		    printf("Scenario #%lld:\n%lld\n\n",j+1,l);
		    }
      j++;
   }
}

