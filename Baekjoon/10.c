#include <stdio.h>

//수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다. 그 다음 서로 다른 값이 몇 개 있는지 출력하는 
int main(void)
{
	int i,a,r[10],d=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a);
		r[i]=a%42;
		for(int j=0;j<=i;j++)
		{
			if(r[i]==r[j] && i!=j)
			{
				printf("%s\n", "test");
				d--;
				break;
			}
		}
		d++;
	}
	printf("%d\n",d);
	return 0;
}