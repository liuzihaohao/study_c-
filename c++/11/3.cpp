#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

//费布那切数列
int main(void)
{
	long long a=2;
	long long n=3;
	cin>>n;
	for(int i=0;i<n;i++){
		a=a*a;
		cout<<a<<endl;
	};
	cout<<a;
	return 0;
}
