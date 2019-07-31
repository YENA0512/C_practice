#include <stdio.h>

void cur_lo(cur){
	switch (cur){
		case 1: printf("%s\n", "엄지입니다."); break;
		case 2: printf("%s\n", "검지입니다."); break;
		case 3: printf("%s\n", "중지입니다."); break;
		case 4: printf("%s\n", "약지입니다."); break;
		case 5: printf("%s\n", "새끼입니다."); break;
	}
}


int count_(int n){
	int cur = 1;
	int up_down=1;
	// cur is location 1,2,3,4,5
	// 엄지1, 검지2, 중지3, 약지4, 새끼5
	// 진행 방향 : 엄지 --> 새끼 / 새끼 --> 엄지 | 반복
	// 업이 1이면 엄지 --> 새끼 / 업이 0 이면 새끼 --> 엄지
	for (int i = 0; i < n-1; i++)
	{
		printf("%d\t", i+1);
		cur_lo(cur);
		if (cur == 1) up_down = 1;
		else if(cur == 5) up_down = 0;
		if (up_down) cur++;
		else cur--;
	}

	
}

int main(int argc, char const *argv[])
{
	count_(10);
	return 0;
}