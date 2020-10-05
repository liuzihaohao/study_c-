#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
using namespace std;

int main(void)
{
//	int a=100;
//	int *p=&a;
//	cout<<p;
	
//	int arr[100]={1,5,8,6};
//	cout<<sizeof(arr)<<endl;
//	cout<<sizeof(arr)/sizeof(arr[0]);

	string str="aa";
	const char *pstr=str.c_str();
	cout<<sizeof(pstr)<<endl;
	for(int i=0;i<(sizeof(pstr)/sizeof(pstr[0]));i++)
	{
		cout<<pstr[i]<<',';
	}
	cout<<endl;
	cout<<sizeof(*pstr)<<endl;
	cout<<(sizeof(pstr)/sizeof(pstr[0]))<<endl;
	cout<<&pstr<<endl;
	cout<<str<<endl;
	cout<<&str;
	return 0;
}
