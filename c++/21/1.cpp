#include <iostream>
#include <utility>
#include <cstring>
#include <string>
using namespace std;

struct Point
{
	int x;
	int y;
	int z;
};

int main(void)
{
//	Point point1={100,200,300};
//	point1.x=100;
//	point1.y=200;
//	point1.z=300;
//	cout<<point1.x<<endl<<point1.y<<endl<<point1.z;

//	pair<string,int> p;
//	p.first="liuzihao";
//	p.second=20151;
//	cout<<p.first<<endl<<p.second;

//	pair<string,int> p("liuzihao",20151);
//	cout<<p.first<<endl<<p.second;

//	pair<string,int> p("liuzihao",20151);
//	pair<string,bool> c("liuzihao",true);
//	p==c;

	pair<string,bool> p=make_pair("liuzihao",true);
	cout<<p.first<<endl<<p.second;
	return 0;
}
