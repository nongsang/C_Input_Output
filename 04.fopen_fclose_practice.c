#include <stdio.h>

int main()
{
	FILE* stream;
	int file_state;
	int input;			// 이 부분 중요

	stream = fopen("data.txt", "wt");	// 텍스트 파일 모드로, 쓰기 전용으로 파일을 연다
	if (NULL == stream)
		puts("파일 열기 에러");

	puts("데이터 입력");
	while (EOF != input)
	{
		input = fgetc(stdin);			// 키보드로 받은 데이터를 input에 저장한다.
		fputc(input, stream);			// input에 있는 데이터를 stream으로 문자 하나하나 보낸다.
	}

	file_state = fclose(stream);
	if (EOF == file_state)
		puts("파일 닫기 에러");
}
// 실제로 파일에 쓰기 작업을 한다.

// 8번째 줄
// (매우 중요~~~~~~~~~~~~~~~~~~~~~~~)
// 키보드 입력을 받아 저장할 변수를 초기화 하였다.
// 변수를 선언만 한다면 입력 받기 전부터 에러를 뿜게된다.

// 9번째 줄
// 텍스트 파일 모드, 읽기 전용으로 data.txt를 파일을 연다.

// 16번째 줄
// 키보드로 받은 문자를 input에 저장한다.

// 17번째 줄
// input에 있는 데이터를 스트림으로 보낸다.