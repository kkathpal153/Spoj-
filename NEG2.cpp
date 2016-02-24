 #include<iostream>
 using namespace std;
 int main()
 {
  
 	long long i,j,l,m,n;
 	string s="";
 	cin>>n;
 	i=-2;
 	if(n==0){
 	cout<<"0\n"; 
 	return 0;}

 	while(n)
 	{
	   if(n%i<0)
	   {
	   	s=(char)(((n%i)+2)+'0')+s;
	    n=(n/i)+1;
	   }
	   else
	   {
	   	s=(char)((n%i)+'0')+s;
	    n=n/i;
	   }
	 }
    cout<<s<<endl;
    
}
