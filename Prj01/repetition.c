// file: repetition.c
#include <stdio.h>

int main(void)
{
	// 모두동일한문자열의단순한반복
	printf("C 언어재미있네요!\n");
	printf("C 언어재미있네요!\n");
	printf("C 언어재미있네요!\n");

	int n = 1;
	// 정수값을1씩증가시키면서출력반복
	printf("%d\n", n++);
	printf("%d\n", n++);
	printf("%d\n", n++);
	printf("%d\n", n++);
	printf("%d\n", n++);

	return 0;
}