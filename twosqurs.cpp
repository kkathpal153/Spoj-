#include<iostream>
#include<math.h>
using namespace std;
void check(long long x)
{  /*
	long long i,j,l,g;
	if(m==1) {
	printf("Yes\n"); return;}
	for(i=0;i<=sqrt(m);i++)
	{
		if(sqrt(m-i*i)==floor(sqrt(m-i*i)))
		{
			printf("Yes\n");
			return;
		}
	}
printf("No\n");
	return;*/
	long long int i,j=0;

    i= sqrt(x);

    while(i>0) {

    if(j*j>x)

      {



        printf("No\n");

         break;

      }

    else if(i*i + j*j == x)

        {



         printf("Yes\n");

         break;

        }

    else if(i*i + j*j <x)

         j++;

    else

        i--;

}
return;
}
int main()
{
	long long m,n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&m);
		check(m);
	}
}
