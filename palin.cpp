#include<iostream>
#include<string>
#include<vector>

using namespace std;


void increment(string c);

string reverse(string );

int main()
{
	long long int a,i,j,k;
	string c;
	cin>>a;
	
	while(a--)
	{ 
	   cin>>c;
	   increment(c);
	}
	
}

void increment(string c)
{   string dummy;
    string::iterator help;
    dummy.assign(c.length(),'9');
   int i,j,l,m;
    //cout<<dummy;  
    if(c==dummy)
    {
    	c.assign(c.length(),'0');
    	help=c.begin();
    	*help='1';
    	/*help=c.end();
    	help--;
    	*help='1';*/
    	c=c+'1';
    	cout<<c<<endl;
    	//cout<<"runngig";
	}
	
	else
	{
			string rev;
			rev=reverse(c);
			if(c.length()%2==0)
				{
					i=c.length()/2-1;
					j=i+1;             //calculaate value of i and j when length is even
					
				}
	
	     	else
				{
					i=c.length()/2-1;    // calculate the value of i and j when length is odd
					j=i+2;
					
				}
			 l=i; m=j;   //making a copy of the middle elements pos
			 /*while(c[i]==c[j]&&i>0)
				 {	 
				 		i--;      //to calculate the value of i and j till the middle is a palindrome
				 		j++;
				 }
				 	cout<<i<<endl<<j<<endl;*/
		   
		   if(c==rev)                   //for calculating the palindrome when the given sequence is palindrome and all elements are not 9
		    {
			    	if(c.length()%2!=0)      //case1 when the length is odd 
			    	{
			    	   if(c[c.length()/2]=='9')         //case 1.1 when the middle elment is 9 and we have to propogate the carry on both sides 12921 to 13031
						   {                              
						        c[c.length()/2]='0';
						        while(c[i]=='9'&&c[j]=='9')    //case1.1.1 when the i and j are also 9 
							        {
							        	c[i]='0'; c[j]='0';
							        	i--; j++;
									}
								c[i]=c[i]+1; c[j]=c[j]+1; 
								cout<<c<<endl;    //final increment in i and j
						   	   
						  } 
					   else
						  {   c[c.length()/2]=c[c.length()/2]+1;  
						        cout<<c<<endl;  //case1.2 when the middle element is not 9
				     	   } 	
					}
			        else          //case2 when the length is even
			        {
			        	 while(c[i]=='9'&&c[j]=='9')  //case 2.1 when the i and j both are 9 so we need to propogate
			        	 
					        {
					        	c[i]='0'; c[j]='0';
					        	i--; j++;
							}
							c[i]=c[i]+1; c[j]=c[j]+1;
							cout<<c<<endl;
					}
					
			}
			
			
			
			else      // when th given sting is not a palindrome any how and you have to convert that into a palindrome
				{
					while(c[i]==c[j]&&i>0)
					 {	 
					 		i--;      //to calculate the value of i and j till the middle is a palindrome 123324 value of i is 0 and j is 5
					 		j++;
					 }
				 	//cout<<i<<endl<<j<<endl;
				          string dummy;
					if(c[i]>c[j])     
					{
						dummy.assign(c,0,i+1);  //it assign the value from pos 0to pos i+1 from c to dummy
						dummy=reverse(dummy); 
						c.replace(j,dummy.length(),dummy);  //ultimate formula it copies from pos j to pos j+dummy.length() and the text is dummy
						cout<<c<<endl;
					}
					else //when the stirng is not a palindrome and value of j> i
					{
						if(c.length()%2!=0) 
						{  if(c[c.length()/2]=='9')         //case 1.1 when the middle elment is 9 and we have to propogate the carry on both sides 12921 to 13031
						   {                              
						        c[c.length()/2]='0';
						        while(c[l]=='9'&&c[m]=='9')    //case1.1.1 when the i and j are also 9 
							        {
							        	c[l]='0'; c[m]='0';
							        	l--; m++;
									}
								c[l]=c[l]+1; c[m]=c[m]+1;     //final increment in i and j
							    dummy.assign(c,0,i+1);  //it assign the value from pos 0to pos i+1 from c to dummy
								dummy=reverse(dummy); 
								c.replace(j,dummy.length(),dummy);  //ultimate formula it copies from pos j to pos j+dummy.length() and the text is dummy
						        cout<<c<<endl;
						  } 
						   else
							  {   c[c.length()/2]=c[c.length()/2]+1;    //case1.2 when the middle element is not 9
							      dummy.assign(c,0,i+1);  //it assign the value from pos 0to pos i+1 from c to dummy
								dummy=reverse(dummy); 
								c.replace(j,dummy.length(),dummy);  //ultimate formula it copies from pos j to pos j+dummy.length() and the text is dummy
					     	    cout<<c<<endl;
								} 	
						}
						else
						{    //cout<<"working";
						    if(c[l]=='9'&&c[m]=='9')   //not palindrome and middle elements is 9 12999931
						    { while (c[l]=='9')
						      { c[l]='0'; c[m]='0';
						         l--; m++;
							  }
							  c[l]=c[l]+1; 
							   dummy.assign(c,0,i+1);  //it assign the value from pos 0to pos i+1 from c to dummy
								dummy=reverse(dummy); 
								c.replace(j,dummy.length(),dummy);  //ultimate formula it copies from pos j to pos j+dummy.length() and the text is dummy
					     	    cout<<c<<endl;
							}
						    else
						    {
						    	 while(c[l]==c[m])
						    	 { c[l]=c[l]+1; c[m]=c[m]+1;
						            l--; m++;
								 }
								dummy.assign(c,0,i+1);  //it assign the value from pos 0to pos i+1 from c to dummy
								dummy=reverse(dummy); 
								c.replace(j,dummy.length(),dummy);  //ultimate formula it copies from pos j to pos j+dummy.length() and the text is dummy
					     	    cout<<c<<endl;
							}
						
						}
					}
				
			}
		
		
		
	}
	
}




string reverse ( string c)
{   string::iterator help;
    
    
	string reverse="";
    help=c.end();
	while(help!=c.begin())   //reverse function 
    {   help--;
    	reverse=reverse+*help;
    }
	
	return reverse;

}
