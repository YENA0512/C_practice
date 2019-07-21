#include <stdio.h>
#define SECOND_PER_MINUTE 60

int main(void)
{
	int input = 1000;
	int minute = input / SECOND_PER_MINUTE;
	int second = input % SECOND_PER_MINUTE;
	printf("%d : %d : %d\n",input,minute,second);
	int x=100;
	printf("x=%d\n",x);
	x+=50;
	printf("x=%d\n",x);
	x-=50;
	printf("x=%d\n",x);
	x*=50;
	printf("x=%d\n",x);
	x%=3;
	printf("x=%d\n",x);
	return 0;

}
