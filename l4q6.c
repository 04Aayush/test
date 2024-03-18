#include<stdio.h>
int main(){
	float sub,total,avg;
	int n;
	n=1;
	total=0;
	while(n<=5)
	{
		printf("enter mark");
		scanf("%f",&sub);
		total=total+sub;
		n++;
	}
	avg=total/5;
	printf("avg=%f",avg);
	return 0;
}
