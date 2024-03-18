#include<stdio.h>
int main()
{
	int i,j,k,l,s=4;
	for(i=1;i<=4;i++)
	{
		for(k=1;k<=s;k++)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d ",j);
		 }
		 for(l=2;l<=i;l++)
		 {
		 	printf("%d ",l);
		 }
		 printf("\n");
		 s--;
		 }
		 return 0;
		 }
