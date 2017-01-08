#include <stdio.h>

int main()
{
	FILE* stream1;			// 읽기 전용으로 쓰일 스트림이다.
	FILE* stream2;			// 쓰기 전용으로 쓰일 스트림이다.
	int file_state1;
	int file_state2;
	int input = 0;

	stream1 = fopen("data1.txt", "rt");		// 텍스트 모드로 읽기위해 파일을 연다.
	stream2 = fopen("data2.txt", "wt");		// 텍스트 모드로 쓰기위해 파일을 연다.
	if (NULL == (stream1 || stream2))
		puts("파일 열기 에러");

	puts("파일로 부터 데이터 입력");
	while (EOF != input)
	{
		input = fgetc(stream1);			// 읽기 전용으로 연결한 스트림을 input 변수에 저장한다.
		fputc(input, stream2);			// input에 있는 데이터를 쓰기 전용으로 연결한 스트림에 보내준다.
		fputc(input, stdout);			// input에 있는 데이터를 모니터로 보내서 보여준다.
	}

	file_state1 = fclose(stream1);
	file_state2 = fclose(stream2);
	if (EOF == (file_state1 || file_state2))
		puts("파일 닫기 에러");
}
// 5, 6번째 줄
// 읽기 전용, 쓰기 전용으로 선언하였다.

// 11번째 줄
// data1.txt를 텍스트 모드, 읽기 전용으로 연결하였다.

// 12번째 줄
// data2.txt를 텍스트 모드, 쓰기 전용으로 연결하였다.

// 19번째 줄
// 데이터를 저장할 변수 input을 사용하여 읽기 전용 스트림에 접근하여 문자 하나하나를 받아 저장한다.

// 20번째 줄
// 데이터를 저장한 변수 input을 쓰기 전용 스트림에 접근하여 문자 하나하나를 저장한다.

// 21번째 줄
// input의 데이터를 모니터에 출력해준다.