#include<stdio.h>
int mai(){
	int i,j;
	for(i=1,j<=4,i++)
	{
		for(j-i;j<=4-i;j++){
		printf("");
		}
		for(j-i;j>=i;j--)
		{
			printf("%d",i);
		}
		for(j-2;j<=i;j++)
         {
         	printf("%d",j);
		 }
		 printf("\n");
	}
	return 0;
}
