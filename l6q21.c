#include<stdio.h>
void swap(int a, int b);
int main()
{
	int a,b;
	printf("enter a and b");
	scanf("%d%d",&a,&b);
	printf("a=%d\tb=%d\n",a,b);
	swap(a,b);
	return 0;
}
void swap(int a,int b){
	int temp;
	temp =a;
	a=b;
	b=temp;
	printf("after swap \na=%d\tb=%d",a,b);
}

