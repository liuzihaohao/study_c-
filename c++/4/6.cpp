#include <iostream>

int main(void)
{
	int h,m,s=0;
	
	std::cin>>h>>m>>s;
//	int result=
    m=m+h*60;
    s=s+m*60;
    
    std::cout<<s;
}
