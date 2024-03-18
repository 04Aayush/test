#include<stdio.h>
int main(){
	int n;
	printf("enter mark");
	scanf("%d",n);
	if (n>0 && n<50){
		printf("the student is faild");
	}
	else if(n>=50 && n<60)
	{
		printf("pass with second divison");
	}
	else if(n>=60 && n<80){
		printf("pass with first divison");
	}
	else if(n>=80 && n<100){
		printf("pass with distinction");
	return 0;
	}
