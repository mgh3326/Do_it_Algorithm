/* Q14 ï¿½ï¿½ï¿½ç°¢ï¿½ï¿½ ï¿½ï¿½ï¿? */
#include <stdio.h>

int main(void)
{
	int i, j;
	int n; /* ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ô·ï¿½ï¿½Õ´Ï´ï¿½. */

	puts("»ç°¢ÇüÀ» Ãâ·ÂÇÕ´Ï´Ù..");
	do {
		printf("ÀÔ·ÂÇÒ ¼ö : ");
		scanf("%d", &n);
	} while (n <= 0);

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}