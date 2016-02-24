#include<iostream>
#include<cstdio>
using namespace std;
int main()
{  int n;
  float i,j,k,l;
scanf("%d %f",&n,&i);

if(n%5==0&&(float)n+.5<=i)
{
	    i=i-((float)n+0.5);
		printf("%.2f",i);
}
else
{
	printf("%.2f",i);
}
return 0;
}
