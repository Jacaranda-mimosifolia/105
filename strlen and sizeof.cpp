#include<stdio.h>
#include<string.h>
//strlen()
//string length,�ַ�����
char tmp[]="hello world!";
char ptm[]="hello\0 world!"; 
int main()
{	
	//strlen(),����'\0'ͣ�� 
	printf("strlen(tmp)=%d,strlen(ptm)=%d\n",strlen(tmp),strlen(ptm));//12 5
	//sizeof(),��ռ�ڴ��С 
	printf("sizeof(tmp)=%d,sizeof(ptm)=%d\n",sizeof(tmp),sizeof(ptm));//13 14
	return 0;
}
// ע��sizeof���ش洢���ַ����ı���ռ�õĿռ��С�����һ�������'\0'.
// ��'\0'���п���Ŀռ䣬Ҳ��������������
