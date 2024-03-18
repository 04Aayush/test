#include<stdio.h>
int main(){
	float sub,total,avg;
	int n;
	n=1;
	total=0;
	do
	{
		printf("enter mark");
		scanf("%f",&sub);
		total=total+sub;
		n++;
	}
	while(n<=5);
	avg=total/5;
	printf("avg=%f",avg);
	return 0;
}
