#include<iostream>
#include<iomanip>
using namespace std;
/*long long gcd(long long a, long long b)
{
    while (a != b)
    {
        if (a > b)
        {
            return gcd(a - b, b);
        }
        else
        {
            return gcd(a, b - a);
        }
    }
    return a;
}*/
int main()
{
	int i,j,k,l,m,w,ii,ww,r; //earlier i used decimal (double) but that didnt worked out
    i=1000;
    w=37;
    //r=gcd(1000,37);
    //cout<<r;
	while(cin>>ii>>ww&&(ii!=-1&&ww!=-1)) // we have used int all becasue to avoid rounding off the repeting decimal 

	{   
		
	if(ii%1000==0&&ww%37==0&&ii/1000==ww/37)  // i used if(ii/i==ww/w) this only sub part of the conditional as it will accept all values of ii less than 1000 and all values of ww less than 37 
		cout<<"Y\n";
	    
		else
		cout<<"N\n";
	}
	
}
