#include <stdio.h>
#include <math.h>

int main(void){
	int x=50, y=30;
	printf("x and y are same? %d\n", x==y);
        printf("x and y are different? %d\n", x!=y);
        printf("x > y ? %d\n", x>y);
        printf("x < y ? %d\n", x<y);
	printf("x input  y ? %d\n", x=y);
	x=50, y=30;
	printf("x>y and y<40? %d\n",(x>y)&&(y<40));
	printf("x<y or y==30? %d\n",(x<y)||(y==30));
	printf("x!=50? %d\n",x!=50);
	x=-50,y=30;
	int absoluteX= (x>0) ? x:-x;
	int max = (x>y) ? x:y;
	int min = (x<y) ? x:y;
	printf("abs x = %d\n",absoluteX);
	printf("max = %d\n",max);
	printf("min = %d\n",min);
	double a=pow(2.0,20.0);
	printf("2 ** 20 = %.0f\n",a);
	return 0;

}
