#include <stdio.h>

int main(void){
	int x=-150;
	if(x<0)
	{
		x=-x;
	}
	printf("abs x=%d\n",x);
	int score = 85;
	if(score >=90)
	{
		printf("Your score is A.\n");
	}
	else if(score >=80)
       	{
                printf("Your score is B.\n");
        }
	else if(score >=70)
	{
                printf("Your score is C.\n");
        }
	else
	{
                printf("Your score is F.\n");
        }
	return 0;
}
