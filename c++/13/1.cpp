#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;

int sqrts(float a,float b)
{
//	float c=a;
//	float d=b;
	return pow(a,1/b);
};

int main(void)
{
	cout<<sqrts(4,2);
	return 0;
};
