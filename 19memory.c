#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pi; //pointer integer
	pi = (int *)malloc(sizeof(int)); //malloc 메모리를 활용해라
	if(pi == NULL)
	{
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1);
	}
	*pi = 100;
	printf("%d\n", *pi);
	/* 동적 메모리 사용한 이후 무조건 해당 메모리 반환.*/
	free(pi);
	return 0;
}