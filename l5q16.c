#include<stdio.h>
#include<string.h>
int main(){
	char str[100],rev[100];
	printf("enter a string");
	gets(str);
	strcpy(rev,str);
	strrev(rev);
	if(strcmp(str,rev)==0)
	printf("%s is a palindrome",str);
	else
	printf("%s is not a palindrome",str);
	return 0;
}
