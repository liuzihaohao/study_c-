#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main(void)
{
	char a[110]={};
	int count=0;
	gets(a);
	char *p=a;
	for(int i=0;i<(sizeof(a)/sizeof(a[0]));i++)
	{
		if(isdigit(a[i]))
		{
			count++;
		}
	}
	cout<<count;
	return 0;
}
