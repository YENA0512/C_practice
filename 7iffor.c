#include <stdio.h>
#define N 20
int main(void){
	int year =2016;
       	if((year % 4 == 0 && year % 100 !=0) || year % 400==0)
	{
		printf("%dyear is yoonyear.\n",year);
	}
	else
	{
		printf("%dyear is not yoonyear.\n",year);
	}
	int i=1,sum=0;
	while(i<=1000)
	{
		sum+=i;
		i++;
	}
	printf("sum = %d\n\n\n",sum);

	for(i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	int a,b;
	for(a=0;a<N;a++)
	{
		for(b=N-a-1;b>0;b--)
		{
			printf("  ");
		}
		for(b=0;b<a;b++)
		{
			printf("* ");
		}
		for(b=0;b<a-1;b++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;

}
