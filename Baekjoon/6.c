#include <stdio.h>

void sum(int i)
{
	int a,A[i],B[i],C[i];
	for(a=0;a<i;a++)
	{
		scanf("%d %d",&A[a],&B[a]);
		C[a]=A[a]+B[a];
	}
	for(a=0;a<i;a++)
	{
		printf("Case #%d: %d + %d = %d\n",a+1,A[a],B[a],C[a]);
	}
}

int main(void)
{
	int i;
	scanf("%d",&i);
	sum(i);
	return 0;
}