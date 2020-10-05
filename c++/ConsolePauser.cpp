#include<windows.h>
#include<stdio.h>
#include <iostream>
int main(int argc,char *argv[])
{
	char strCmd[1024]= {0},*p;
	DWORD dwExitCode=-1;
	float time=0;
	LARGE_INTEGER start,end,freq;
	PROCESS_INFORMATION pi;
	STARTUPINFO si= {sizeof(si)};
	BOOL ret=0;
	int i=0,count=0;
	for(i=1; i<argc; i++)
	{
		p=argv[i];
		while(*p!=0 && count<1022)
		{
			strCmd[count++]=*p;
			p++;
		}
		strCmd[count++]=' ';
	}
	if(argc>=2)
	{
		QueryPerformanceFrequency(&freq);
		QueryPerformanceCounter(&start);
		ret=CreateProcess(NULL,strCmd,NULL,NULL,FALSE,0,NULL,NULL,&si,&pi);
		if(ret)
		{
			SetConsoleTitle(argv[1]);
			WaitForSingleObject(pi.hProcess, INFINITE);
			GetExitCodeProcess(pi.hProcess, &dwExitCode);
			CloseHandle(pi.hProcess);
			CloseHandle(pi.hThread);
			QueryPerformanceCounter(&end);
			time=(float)(((end.QuadPart-start.QuadPart)*1000000)/freq.QuadPart)/1000000;
			printf("\n--------------------------------\n");
			printf("Process exited after %.5f seconds with return value %lu",time,dwExitCode);
			std::cout<<std::endl;
		}
	}
	else
	{
		printf("--------------------------------\n");
		printf("Usage: ConsolePauser.exe <filename> <parameters>");
		std::cout<<std::endl;
	}
	system("pause");
	return 0;
}
