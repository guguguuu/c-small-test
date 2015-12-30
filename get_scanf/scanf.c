#include<stdio.h>
/*scanf,getchar*/
int main()
{
	int value1=44;
	int arr[4];
	int value2=88;

	printf("%d,%d\n",value1,value2);

	for(int i=0;i<1000;i++){
		arr[i]=2*i+1;
		printf("%d\n",arr[i]);
	}

	printf("%d,%d\n",value1,value2);
	

}
