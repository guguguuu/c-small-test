#include<stdio.h>
#define out 0
#define in 1
int main()
{
	int c,nl,nw,nc,state;
	state=out;
	nl=nw=nc=0;

	while((c=getchar())!=EOF)
	{
		++nc;
		if(c=='\n')
			++nl;
		if(c==' '||c=='\n'||c=='\t')
			state=out;
		else if(state==out){
			state=in;
			++nw;
		}
	}
	printf("%d %d %d" ,nw,nl+1,nc);
}



