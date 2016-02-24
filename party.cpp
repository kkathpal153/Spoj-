// A Dynamic Programming based solution for 0-1 Knapsack problem
#include<cstdio>
#include<iostream>

using namespace std;
// A utility function that returns maximum of two integers
int max(int a, int b) { return (a > b)? a : b; }
 
// Returns the maximum value that can be put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n)
{
   int i, w,k;
   int K[n+1][W+1];
 
   // Build table K[][] in bottom up manner
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
            cout<<K[i][w]<<"  ";
       }
      cout<<endl;
      
   }
   k=K[n][W];/*
   for(i=0;i<=W;i++)
   {
   	 if(k==K[n][i])
   	 {
   	 	cout<<i<<" ";
   	 	break;
		}
   }
   */
   
   return K[n][W];
}
 
int main()
{   int i,j,k,l,m,n;
    int w;
    
    while(cin>>w>>n&&n!=0&&w!=0)
    {int *val = new int[n];
     int *wt= new int[n];
      for(i=0;i<n;i++)
    scanf("%d%d",&wt[i],&val[i]);
    
	printf("%d\n", knapSack(w, wt, val, n));
    }
    return 0;
}
