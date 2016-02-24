#include<iostream>
using namespace std;
void reverse(int *a, int l)
{
	int *aa=new int[l+1];
}
int main()
{
	int a[20],b[2];
	int i,j,k,l,m,n,f,r;
	for(i=0;i<6;i++)
	cin>>a[i];
	
	for(i=0;i<2;i++)
	cin>>b[i];
	
	for(j=0;j<2;j++)
	{	r=a[j]-b[j];
		//s=2; t=s;
		
		if(r<0)
		{
			a[j]=a[j]+10-b[j];
			i=j;
			if(a[i]-1<0)
			while(a[i]-1<0&&i<6)
			{
				if(a[i]<=0)
				{
					a[i]=9;
					a[i+1]=a[i+1]-1;
					i++;
				}
				
				
			}
			a[i+1]=a[i+1]-1;
			
		}
			else
			a[j]=a[j]-b[j];
	}
    
    for(i=0;i<6;i++)
	cout<<endl<<a[i];
}
