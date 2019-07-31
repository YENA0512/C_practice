#include <stdio.h>

int count(int a)
{
	int cur=1;
	int up_down=1;
	for(int i=0;i<a-1;i++)
	{
		if(cur==1) up_down=1;
		else if(cur==5) up_down=0;
		if(up_down) cur++;
		else cur--;
	}

	switch(cur)
	{
		case 1: printf("%d\n",cur); break;
		case 2: printf("%d\n",cur); break;
		case 3: printf("%d\n",cur); break;
		case 4: printf("%d\n",cur); break;
		case 5: printf("%d\n",cur); break;
	}
}

int main(void)
{
	int a;
	scanf("%d",&a);
	count(a); 
	return 0;
}
