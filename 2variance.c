#include <stdio.h>
#include <limits.h>

int main(void){
	int x;
	x=5;
	printf("%d\n",x);
	printf("The size of variance x is %d\n",sizeof(x));
	int y=50;
	float z=123456.123456;
	double q= 123456789.234567899;
	printf("y = %d\n",y);
	printf("z = %.2f\n",z);
	printf("q = %.3f\n",q);
	int w= INT_MAX;
	printf("The max of int is %d.\n",w);
	printf(" w+1 is %d.\n",w+1);
	int a=10;
	int b=20;
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	printf("a+b = %d\n",a+b);
	printf("a-b = %d\n",a-b);
	printf("a*b = %d\n",a*b);
	printf("a/b = %d\n",a/b);
	return 0;

}
