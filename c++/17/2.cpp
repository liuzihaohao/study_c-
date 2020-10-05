#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
	int a=233;
	int b=666;
	
	cout<<a<<endl<<b<<endl<<endl;
	
//	int at=0;
//	at=a;
//	a=b;
//	b=at;

	swap(a,b);
	
	cout<<a<<endl<<b<<endl<<endl;
	
	return 0;
}
