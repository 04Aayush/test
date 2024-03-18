#include<stdio.h>
void add (int a,int b);
void bikash(int a,int b);
void indra(int  a, int b);
int main(){
	int x,y;
	printf("enter two number");
	scanf("%d%d",&x,&y);
	add(x,y);
	bikash(x,y);
	indra(x,y);
	add(1,2);
	return 0;
}
void add (int a,int b)
{
	int c;
	c=a+b;
	printf("add=%d\n",c);
}
void bikash(int a,int b)
{
	int c;
	c=a-b;
	printf("sub=%d\n",c);
}
void indra(int a,int b)
{
	int c;
	c=a*b;
	printf("mul=%d\n",c);
}
