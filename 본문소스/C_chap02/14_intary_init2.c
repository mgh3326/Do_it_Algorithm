/* 배열의 요솟수와 각 요소의 값을 표시 */
#include <stdio.h> 

int main(void)
{
	int i;
	int a[] = { 1, 2, 3, 4, 5, 6 };
	int na = sizeof(a) / sizeof(a[0]); /* 요소수 */
	printf("배열 a의 요소수는 %d입니다.\n", na);

	for (i = 0; i < na; i++)
		printf("a[%d] = %d\n", i, a[i]);

	return 0;
}