#include<stdio.h>

int main()
{
	int c;

	c=getchar();
	for(;c!=EOF;)
	{
		putchar(c);
		c=getchar();
	}

}

