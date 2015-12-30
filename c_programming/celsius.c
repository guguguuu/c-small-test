/*convert fahrenheit to celsius*/
//Fahrenheit-Celsius table
#include<stdio.h>
//#define size 16 
int main()
{
/*	int i=0;
	int c[size];
	int f[size];
	for(i=0;i<size;i++){
		f[i]=20*i;
		c[i]=5*(f[i]-32)/9; //attention
		printf("%d     %d\n",f[i],c[i]);
	}
*/
/*	int i=0;
	int celsius=0;
	int fahrenheit=0;  //add 0

	for(i=0;i<size;i++)
	{
		fahrenheit=20*i;
		celsius=5*(fahrenheit-32)/9;
		printf("%d\t%d\n", fahrenheit, celsius);
	}*/
/*	float celsius, fahrenheit;
	int upper,lower,step;

	upper=300;
	lower=0;
	step=20;

	celsius=0;
	fahrenheit=0;

	while(fahrenheit<=upper){
		celsius=(5/9.)*(fahrenheit-32);
		fahrenheit+=step;
		printf("%3.0f%6.1f\n",fahrenheit,celsius);
	}
*/
	float celsius=0;
	float fahrenheit=0;
	for(fahrenheit=0;fahrenheit<=300;fahrenheit+=20)
	{ 
		printf("%3.0f%6.1f\n",fahrenheit,celsius=(5./9)*(fahrenheit-32));
	}

}
