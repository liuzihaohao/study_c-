#include <cstdio>
#include <cmath>
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main(void)
{
//	string a;
//	cin>>a;
	char a[1001];
	gets(a);
//	cout<<a<<endl;
//	cout<<strlen(a)<<endl;
//	cout<<sizeof(a)/sizeof(a[0])<<endl;
	int b[1001];
	int c=0;
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]==' ')
		{
			if(c!=0)
			{
				cout<<c<<',';
			}
//			if(i+1!=strlen(a))
//			{
//				cout<<',';
//			}
			c=0;
		}
		else
		{
//			cout<<c<<',';
			c++;
		}
	}
	cout<<c;
	
//	for(int t;t<strlen(b);t++)
//	{
//		cout<<b[t];
//		cout<<endl;
//	}

//	char str[1001];
//	string a;
//	gets(a);
//	int c=0;
//	for(int i=0)

	return 0;
}
