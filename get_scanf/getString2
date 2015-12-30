#include<stdio.h>

int main()
{
	int word;
	int i;
	int num=0;	
	char string[1000];
	char a;
	gets(string);
	for(i=0;(a=string[i])!=00;i++){
		printf("%d",a);
		if(a!=32&&(string[i+1]==32||string[i+1]==00)){
			num++;
		}
	}
	printf("the number of word is :%d\n",num);
	return 0;
}

