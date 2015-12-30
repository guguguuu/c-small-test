#include<stdio.h>

int main()
{
	int i;
	int word=0;
	int num=0;
	char a;
	char string[100];
	gets(string);

	for(i=0;(a=string[i])!=00;i++)
	{
		if(a==32)
			word=0;
		if(word==0){
			word=1;
			num++;
		}
	}
	printf("the word number is:%d",num);
}
