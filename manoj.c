//extern
#include<stdio.h>
int fun();
extern int a=5;
main()
{
	int a=10;
	printf("a=%d\n",a);
	fun();
}

		int fun()
		{
			printf("a=%d\n",a);
		}

