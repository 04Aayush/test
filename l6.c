#include<stdio.h>
void add();
int main()
{
	add();
	add();
	return 0 ;
}
void add()
{
	int a,b,c;
	a=5;
	b=6;
	c=a+b;
	printf("c=%d\n",c);
}
