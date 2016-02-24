#include<iostream>
using namespace std;
int knapsack(int w,int wt[], int val[],int n)
{
	int i,j,l,m;
	int k[n+1][w+1];
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=w;j++)
		{
			if(i==0||j==0)k[i][j]=0;
			else if(wt[i-1]<=j){
				
			k[i][j]=max(k[i-1][j],k[i-1][j-wt[i-1]]+val[i-1]);
			 }
			else
			k[i][j]=k[i-1][j];
			
			
		}
		
	}
	
		return k[n][w];
}

int main()
{
int i,j,ww,k,l,m,w,n;

cin>>w>>ww>>n;
w=ww-w;
int *wt=new int[n+2];
int *val=new int[n+2];
for(i=0;i<n;i++)
	{
	scanf("%d %d",&wt[i],&val[i]);
	}
i=knapsack(w,wt,val,n);
cout<<i;
}
