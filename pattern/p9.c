#include<stdio.h>
int main()
{
	int i,j,n,s,k;
	printf("Enter the number \n");
	scanf("%d",&n);
	for(i=-n+1;i<n;i++)
	{
		if(i<0)
			k=-i;
		else
			k=i;
		if(i<0)
		{
			for(s=0;s<k;s++)
				printf(" ");
		}
		for(j=0;j<n-k;j++)
			printf("*");
		printf("\n");
	}
}

