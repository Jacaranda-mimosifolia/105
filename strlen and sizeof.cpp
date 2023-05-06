#include<stdio.h>
#include<string.h>
//strlen()
//string length,字符长度
char tmp[]="hello world!";
char ptm[]="hello\0 world!"; 
int main()
{	
	//strlen(),遇到'\0'停下 
	printf("strlen(tmp)=%d,strlen(ptm)=%d\n",strlen(tmp),strlen(ptm));//12 5
	//sizeof(),所占内存大小 
	printf("sizeof(tmp)=%d,sizeof(ptm)=%d\n",sizeof(tmp),sizeof(ptm));//13 14
	return 0;
}
// 注：sizeof返回存储该字符串的变量占用的空间大小，因而一定会包括'\0'.
// 若'\0'后还有空余的空间，也会包含到结果里面
