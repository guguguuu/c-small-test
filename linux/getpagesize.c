/*getpagesize*/
#include<stdio.h>
#include<unistd.h>

int main(int argc, char**argv)
{
	printf("page size = %d Byte\n", getpagesize());
		return 0;
}

