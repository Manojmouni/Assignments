#include<stdio.h>
int main()
{
	int i,j,n,s,k;
	printf("Enter the number\n");
	scanf("%d",&n);
	k=n;
	for(i=0;i<n;i++)
	{
		for(s=0;s<=i;s++)
			printf("  ");
		k--;
		for(j=0;j<n+k-i;j++)
			printf("* ");
		printf("\n");
	}
}
