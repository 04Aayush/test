#include<stdio.h>
int main(){
	int i,fact=1,n;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d\n",i);
		fact=fact*i;
	}
	printf(" fact=%d",fact);
	return 0;
}
