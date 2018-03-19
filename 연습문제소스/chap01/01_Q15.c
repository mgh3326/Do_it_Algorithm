/* Q15 ?????? ??? */
#include <stdio.h>

int main(void)
{
	int i, j;
	int height, width; /* ????? ??? */

	puts("직사각형을 출력합니다.");

	do {
		printf("높이 : ");
		scanf("%d", &height);
	} while (height <= 0);

	do {
		printf("너비  : ");
		scanf("%d", &width);
	} while (width <= 0);

	for (i = 1; i <= height; i++) {
		for (j = 1; j <= width; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}