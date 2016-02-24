#include<iostream>
#include<string>

using namespace std;

int main()
{  
   int i,j,l,m,n;
   cin>>n;
   l=1;
   if(n>=0&&n<=1000)
   while(l<=n)
   { string s;
   	cin>>i;
   	cin>>s;
   	if(s.length()>=0&&s.length()<=80)
	 {
		i--;
	   	s.erase(s.begin()+i);
	   	cout<<l<<" "<<s<<endl;
     }
     l++;     
  }	
}
