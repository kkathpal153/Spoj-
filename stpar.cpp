#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main()
{
	int i,j,l,m,n;
	while(cin>>n&&n!=0)
	{
   	   stack<int> k;
   	   vector<int> v,v2;
   	   m=n;
   	   while(m--)
   	   { 
   	      cin>>i;
   	   	  v.push_back(i);
		  }
		i=0;
		
	   while(v[0]!=1)        //pushing all the elements till one is ont obtained
	   { k.push(v[0]);
	   	 v.erase (v.begin());
			i++;
	   }
	    
	    if(v[0]==1)
	   {
	   	v2.push_back(v[0]);    //intially to input "1" int he secondary vector
	   	v.erase(v.begin());
	   }
	   
	   if(i==n-1)
	      {
	      	        // for the case when the series in in decending order
	      	while(!k.empty())
	      	{
	      		v2.push_back(k.top());
	      		k.pop();
			  }
		  break;
		  }
		  
		 cout<<i<<endl;
	   for(j=0;j<v2.size();j++)
	   cout<<v2[j]<<" ";
	   
	   l=0;
	   while(v.size()!=0)
	   {  
	      if(v[0]==v2[l]+1)
	      {
	      	v2.push_back(v[0]);
	      	v.erase(v.begin());
	      	l=v2.size()-1;
		  }
		  else if(v2[l]+1==k.top())
		  {
		  	v2.push_back(k.top());
		  	k.pop();
		  }
		  
		  else if(v[0]>v2[l]+1)
		  {
		  	k.push(v[0]);
		  	v.erase(v.begin());
		  }
		  
		  else if( )
		  {
		  	k.push(v[0]);
		  	v.erase(v.begin());
		  }
	   	 
	   }
   }
}
