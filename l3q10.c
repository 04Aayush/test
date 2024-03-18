#include<stdio.h>
int main()
{
	int a,b;
	char ch;
	printf("choose");
	scanf("%c",&ch);
	printf("enter two number:");
	scanf("%d%d",&a,&b);
	switch(ch)
	{
        case '+':
			printf("add=%d",a+b);
			break;
			case '-':
				printf("sub=%d",a-b);
				break;
				case '*':
					printf("multi=%d",a*b);
					break;
					case '/':
						printf("div=%d",a/b);
						break;
						case '%':
							printf("mod=%d",a%b);
							break;
							default:
								printf("error");
	}
	return 0;
}
