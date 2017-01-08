#include <stdio.h>

int main()
{
	FILE* stream;
	char buffer[50];

	stream = fopen("data.txt", "wt");
	if (NULL == stream)
		puts("파일 열기 오류");

	fgets(buffer, sizeof(buffer), stdin);
	fputs(buffer, stream);

	fclose(stream);
}
// 12번째 줄
// buffer에 buffer 크기 만큼 키보드 입력을 받아 문자열을 저장한다.

// 13번째 줄
// stream에 buffer에 있는 데이터를 저장한다.