#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

//费布那切数列
int main(void)
{
	int a,b,c;
	a=b=c=1;
	cout<<a<<endl;
	cout<<b<<endl;
//	cout<<c<<endl;
	for(int i=1;i<10;i++){
		c=a+b;
		cout<<c<<endl;
		a=b;
		b=c;
	};
	return 0;
}
