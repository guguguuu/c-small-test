#include<stdio.h>
/*avg of 5 numbers release 1*/
int main()
{	int i=0;
	int sum=0;
	int n;
	for(i=0;i<5;i++)
	{
		printf("please input a number\n");
		scanf("%d",&n);
		sum+=n;//sum=sum+n
	}
	int avg=sum/i;
	printf("%d,%d\n",avg,i);
	return 0;
}
