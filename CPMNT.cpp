#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;

const int imax=1010;

char a[imax],b[imax];

void dick()
{
   int c[26],i;
   memset(c,0,sizeof(c));
   for(i=0;a[i];i++)   //no need to find the value of the array 'a' 
   c[a[i]-'a']++;
   sort(b,b+strlen(b));
   for(i=0;b[i];i++)
   if(c[b[i]-'a']){
   	printf("%c",b[i]);
   	c[b[i]-'a']--;
   }	 
   printf("\n");
}
int main()
{   while(scanf("%s%s",a,b)!=EOF)
    dick();

return 0;
}
