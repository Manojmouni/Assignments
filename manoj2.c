//static keyword
#include<stdio.h>
main()
{
	inc();
	inc();
	inc();
}
inc()
{
	static int i=1;
	printf("\n%d",i);
	i++;
}
