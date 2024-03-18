#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	strcpy(str1,"hello");
	strcpy(str2,"ncc");
	strcat(str1,str2);
	printf("final=%s",str1);
	return 0;
}
