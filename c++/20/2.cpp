#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
//	cout<<(2.0/3.0)<<endl<<(1.0-1.0/3.0);
	if(abs((2.0/3.0)-(1.0-1.0/3.0))<0.001)
	{
		cout<<"="<<endl;
	}else{
		cout<<"!="<<endl;
	}
	return 0;
}
