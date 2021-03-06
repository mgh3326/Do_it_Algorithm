/* 재귀에 대한 이해를 깊게하는 진짜 재귀 함수 */

#include <stdio.h> 

/*--- 함수 recur (맨끝 재귀를 삭제) ---*/
void recur(int n)
{
Top:
	if (n > 0) {
		recur(n - 1);
		printf("%d\n", n);
		n = n - 2;
		goto Top;
	}
}

int main(void)
{
	int x;

	printf("정수를 입력하세요. :");
	scanf("%d", &x);

	recur(x);

	return 0;
}