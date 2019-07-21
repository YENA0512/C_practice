#include <stdio.h>

int main(void)
{
	int number,x,i,sum=0;
	printf("input : ");
	scanf("%d",&number);
	for(i=0;i<number;i++)
	{
		printf("input number : ");
		scanf("%d",&x);
		sum+=x;
	}
	printf("The total is %d.\n",sum);
	return 0;
}
