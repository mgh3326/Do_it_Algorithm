/* Q14 ���簢�� ���? */
#include <stdio.h>

int main(void)
{
	int i, j;
	int n; /* �� ������ ������ �Է��մϴ�. */

	puts("�簢���� ����մϴ�..");
	do {
		printf("�Է��� �� : ");
		scanf("%d", &n);
	} while (n <= 0);

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}