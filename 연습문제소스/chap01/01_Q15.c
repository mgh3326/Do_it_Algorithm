/* Q15 ?????? ??? */
#include <stdio.h>

int main(void)
{
	int i, j;
	int height, width; /* ????? ??? */

	puts("���簢���� ����մϴ�.");

	do {
		printf("���� : ");
		scanf("%d", &height);
	} while (height <= 0);

	do {
		printf("�ʺ�  : ");
		scanf("%d", &width);
	} while (width <= 0);

	for (i = 1; i <= height; i++) {
		for (j = 1; j <= width; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}