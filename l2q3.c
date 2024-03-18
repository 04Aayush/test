#include<stdio.h>
int main()
{
	int sec,min,hrs;
	printf("enter second");
	scanf("%d",&sec);
	hrs=sec/3600;
	min=sec/60;
	sec=sec/60;
	printf("%d hrs,%d min and %d sec",hrs,min,sec);
	return 0;
}
