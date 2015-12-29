#include<stdio.h>
#include<stdlib.h>//malloc free realloc
/*avg of n numbers release 4: realloc*/
int main()
{
	int n;
	int i=0;
 	float sum=0;	
	int size=5;
//	float*s=NULL;

	printf("how many numbers do you want to input?\n");
	scanf("%d",&n);
	float*s=(float*)malloc(sizeof(float)*size);

	for(i=0;i<n;i++)
	{
			printf("if2 %p\n",s);
		printf("please input the %d number:",i+1);
			printf("if5 %p\n",s);
	//	scanf("%f",&s[i]);
			printf("if1 %p\n",s);
		sum+=s[i];
		s[i]=i;
		printf("for %p\n",s+i);
		if(i==size)
		{		
			size=size*2;
			float*s=NULL;	
			s=(float*)realloc(s,sizeof(float)*size);
		}
	}
	float avg=sum/n;
	printf("sum=%f,avg=%f,n=%d,i=%d\n",sum,avg,n,i);
	
	free(s);
}
