#include<stdio.h>
#include<stdlib.h>//malloc free realloc
/*avg of n numbers release 4: realloc*/
int main()
{
	int n;
	int i=0;
 	float sum=0;	
	int size=5;
	float*s=NULL;

	printf("how many numbers do you want to input?\n");
	scanf("%d",&n);
	s=(float*)malloc(sizeof(float)*size);

	for(i=0;i<n;i++)
	{
		if(i==size)
		{		
			size*=2;
			s=(float*)realloc(s,sizeof(float)*size);
		}
		printf("please input the %d number:",i+1);
		scanf("%f",&s[i]);
		sum+=s[i];
	//	s[i]=i;
	}
	float avg=sum/n;
	printf("sum=%f,avg=%f,n=%d,i=%d\n",sum,avg,n,i);
	
	free(s);
}
