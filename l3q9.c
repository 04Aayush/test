#include<stdio.h>
int main(){
	int a,b,c;
	int add,sub,mult,div;
	printf("enter two number");
	scanf("%d%d",&a,&b);
	printf("choose\n1.add\n2.sub\n3.multi\n4.div");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			add=a+b;
			printf("add=%d",add);
			break;
		   	 case 2:
			 sub=a-b;
			 printf("sub=%d",sub);
			break;
			 case 3:
			 mult=a*b;
			 printf("mult=%d",mult);
			 break;
			case 4:
			div=a/b;
			printf("div=%d",div);
			break;
			default :
			printf("herera value dine");
	}
	return 0;
}
