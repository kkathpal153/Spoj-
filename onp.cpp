#include<iostream>
#include<stack>

using namespace std;

void conversion(string);
bool describe(char);
bool aukat(char,char);
int main()
{   string arr;
    int n;
    stack<char> c;
	cin>>n;
	while(n--)
    {cin>>arr;
    conversion(arr);}
	//string postfix = conversion(arr);
	/*c.push('a');
	c.push('b');
	cout<<arr;*/
	//cout<<c.top();
	
	
}

bool describe(char c)
{ 
  if(c=='*'||c=='/'||c=='-'||c=='^'||c=='+'||c=='('||c==')')
  { return true;
  }
  
  else 
  return false;
  
}



void conversion(string infix)
{ string postfix;
   bool d; int i;bool h=false;
   stack<char> s;
   for(i=0;i<infix.length();i++)
   { 
      d=describe(infix[i]);
      if(d==false)
       postfix+=infix[i];
      else
      {
      	if(infix[i]==')')
      	{
          while(!s.empty()&&s.top()!='(')
				{postfix+=s.top();
				 s.pop();
				}
				s.pop();
      	}
      	else   //manipulation ground
      	
	      	{   
			    if(infix[i]=='(')
			    s.push(infix[i]);
			    
			    
			    else if(aukat(s.top(),infix[i])&&s.top()!='(') 
			    {
			    	while(!s.empty()&&s.top()!='('&&aukat(s.top(),infix[i]))
						{postfix+=s.top();
						 s.pop();
						}
                     s.push(infix[i]);
					//cout<<infix[i];
				}
				else
				s.push(infix[i]);
            }
   }
}
while(!s.empty()) {
		postfix += s.top();
		s.pop();
	}
  //for(i=0;i<s.size();i++)
 cout<<postfix<<endl;
}


bool aukat (char a,char b)
{   int n[2],j=0;
    char c[2];
    c[0]=a; c[1]=b;
	while(j<2)
	{
		
		 if(c[j]=='^')
		 n[j]=5;
		 else if(c[j]=='/')
		 n[j]=4;
		 else if(c[j]=='*')
		 n[j]=3;
		 else if(c[j]=='-')
		 n[j]=2;
		 else if(c[j]=='+')
		 n[j]=1;
		 else 
		 n[j]=0;
	  j++;
	}
	
	if(n[0]>n[1])   
	  return true;
	else 
	return false;
	
	
}

