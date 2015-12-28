#include<stdio.h>
#include<stdlib.h>//malloc
/*avg of n numbers release 3*/
int main()
{
	int n;
	int i=0;
	float sum=0;
	//int s[n];
	printf("please input the number you want to calculate:\n");
	scanf("%d",&n);
	float *s=(float*)malloc(sizeof(float)*n);
	for(i=0;i<n;i++)
	{
		printf("please input %d number:",i+1);
		//scanf("%f",&s[i]);
		s[i]=i;
		printf("%p\n",(s+i));
		sum+=s[i];
	}
	float avg=sum/n;
	printf("the result is:\n sum=%f\n avg=%f\n i=%d\n n=%d\n"
				,sum	,avg	,i	,n);
	free(s);
	return 0;
}
