#include<iostream>

using namespace std;
int rot;
void rec(int a[101][101],int l);
int main()
{  int a[101][101],s,c,n,i,j,k;
   cin>>n;
   i=0; j=0;
   while(n--)
	{ 		i=0;
		   	cin>>s>>c;
		   	while(i<s)
		   	{ 
		   	   cin>>a[0][i];
		   	   i++;
			}
			if(s==1)
			{
				for(j=0;j<c;j++)
				{
				   cout<<a[0][0]<<" ";	
				}
			    cout<<"\n";
			}
			else
			{
				
				while(c--)
				{   rot=1; k=0;
					rec(a,i);
					for(j=0;j<i;j++)
					{
						a[0][i]=a[j][i-k-1]+a[0][i];
						k++;
					}
					cout<<a[0][i]<<" ";
					i++;
					/*	for(j=0;j<i;j++)
					{
					   cout<<a[0][j]<<" ";	
					}*/			
					//cout<<a[0][i];
				}
				cout<<"\n";
		    }
	 }
   
}

void rec(int a[101][101],int l)
{   if(l>=0)
    {
	for(int i=0;i<l-1;i++)
	{
		a[rot][i]=a[rot-1][i+1] - a[rot-1][i];
	    //cout<<a[rot][i]<<" ";  
	}
    //cout<<endl;
	rot++;
    rec(a,l-1);
    }
}














