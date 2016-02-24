#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	time_t t;
	t=clock();
	int a;
	
	cin>>a;
    t=clock()-t;
    cout<<endl<<t/1000;
}
