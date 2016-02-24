#include<iostream>
using namespace std;
int main(){int i,j,k,l,m,n,x;int a[120][120];cin>>n;while(n--){x=0;cin>>l;for(i=1;i<=l;i++){for(j=1;j<=i;j++)
{cin>>k;a[i][j]=max(j<=i? a[i-1][j]:0,a[i-1][j-1])+k;x=max(x,a[i][j]);}}cout<<x<<endl;}}
