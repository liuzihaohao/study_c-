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
//			cout<<"��������:"<<a;
//			break;
//		}
//	}while (true);

	string text;
	do
	{
		cout<<">>>";
		cin>>text;
	}while(text.size()!=1||!isdigit(text[0]));
	cout<<"��������:"<<text;
	
//	continue; //����ѭ��ʣ�µĴ���������һ��ѭ�� 
//	break; //���������һ��ѭ�� 
//  goto ; //����ѭ�� 
	
	return 0;
}
