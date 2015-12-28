#include<stdio.h>
/*avg of n numbers release 1*/
int main()
{	int i=0;
	int sum=0;
	int n;
	int flag=1;//endless loop
	while(flag==1)
	{
	scanf("%d",&n);
	if(n==0)
		break;
	i++;
	sum+=n;
	}
	int avg=sum/i;
	printf("%d,%d,%d\n",sum,avg,i);
	
	return 0;
}
