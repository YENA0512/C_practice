#include <stdio.h>
//n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

int main(void)
{
	int a,i;
	int sum=0;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		sum+=i;
	}
	printf("%d\n",sum);
	return 0;
}