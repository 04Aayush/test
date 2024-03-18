#include<stdio.h>
int main()
{
	int day,month;
	printf("enter days:");
	scanf("%d",&day);
	month=day/30;
	day=day%30;
	printf("%d=month and %d days",month,day);
	return 0;
}
