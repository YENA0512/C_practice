#include <stdio.h>
#include <string.h>

int main(void)
{
	//char input[5] = "Love";
	//printf("문자열의 길이 : %d\n", strlen(input));
	//char inputOne[5] = "A";
	//char inputTwo[5] = "C";
	//printf("문자열 비교 : %d\n", strcmp(inputOne, inputTwo));
	printf("%s\n", "dddffdafjdajjofn");
	char love[20] = "I love you";
	char result[20] = "이예나";
	strcpy(result, love);
	printf("문자열 복사 : %s\n", result);
	return 0;
}