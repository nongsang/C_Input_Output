#include <stdio.h>

int main()
{
	char ch = 0;
	//int ch = 0;

	while (ch != EOF)			// while ((ch = getchar()) != EOF)
	{
		ch = getchar();
		putchar(ch);
	}
}
// 가장 기본적인 문자 출력 알고리즘이다.

// 5, 6번째 줄
// 초기화를 해준다.
// 변수에는 입력 받은 값을 저장할 것이다.
// 자료형은 char형이든 int형이든 상관 없다.

// 8번째 줄
// EOF가 아니라면 계속 입력 받고 출력하는 수행을 한다.
// ch가 int여도 상관 없는 이유가 나오는데
// getchar()가 입력 받은 문자를 int형으로 값을 반환한다.
// 그 이유는 호출에 실패한다면 EOF, 즉 -1을 반환하기 위해서이다.