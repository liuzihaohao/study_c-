#include<iostream>
#include<cstring>
#include<string>
#include<cctype>
#include<typeinfo>
using namespace std;

int main(void)
{
//	string a="";
//	do{
//		a.clear();
//		getline(cin,a);
////		cout<<(typeid(a)==typeid(string))<<endl;
////		cout<<typeid(a).name();
//		if(typeid(a).name()!=typeid(string).name());
//		{
//			cout<<"你输入了:"<<a;
//			break;
//		}
//	}while (true);

	string text;
	do
	{
		cout<<">>>";
		cin>>text;
	}while(text.size()!=1||!isdigit(text[0]));
	cout<<"你输入了:"<<text;
	
//	continue; //跳过循环剩下的代码跳到下一次循环 
//	break; //跳出最近的一次循环 
//  goto ; //多重循环 
	
	return 0;
}
