#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,n,s,d,c;
	cin>>n;
	int z[100][100];
	while(n--)
	{
		cin>>s>>c;
		for(i=0;i<s;i++)
	    cin>>z[0][i];
	    // till herer insertion is done 
	    //first subroutine calculate delta and other dealts^n
	    for(i=1;i<s;i++)
	    for(j=0;j<s-i;j++)
	    z[i][j]=z[i-1][j+1]-z[i-1][j];
	    //here the calculation of the delta ends
	    for(i=1;i<c+1;i++)
	    z[s-1][i]=z[s-1][0];
	    //here the addition of the constant ends here
	    //now the main tast to add that new series to the whole equation
	    for(i=s-2;i>=0;i--)
	    for(j=s-i;j<s-i+c;j++)
	    z[i][j]=z[i][j-1]+z[i+1][j-1];
	    
	    for(i=s;i<s+c;i++)
	    cout<<z[0][i]<<" ";
	    cout<<endl;
	}
}
