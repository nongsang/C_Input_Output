#include <stdio.h>

int main()
{
	FILE* stream;
	char name[10];
	int kor, eng, total;

	printf("1. 이름 입력 : ");
	fscanf(stdin, "%s", name);					// 키보드 입력받아 문자열을 name에 저장한다. 필요하면 stream으로 바꿔서 쓸 수 있다.

	printf("2. 국어 점수, 영어 점수 입력 : ");
	fscanf(stdin, "%d %d", &kor, &eng);			// 일반 scanf와 같지만 사용법이 더 생겼다는 것에 주목하면 되겠다.
	total = kor + eng;

	stream = fopen("data.txt", "wt");
	if (NULL == stream)
		puts("파일 열기 오류");
	fprintf(stream, "%s, %d, %d, %d\n", name, kor, eng, total);		// 데이터들을 stream으로 출력한다.
	fprintf(stdout, "%s, %d, %d, %d\n", name, kor, eng, total);		// 데이터들을 모니터로 출력한다.

	fclose(stream);
}
// 10번째 줄
// 키보드 입력을 받아 name에 저장한다.
// 필요하면 stream으로 바꿔서 쓸 수 있다.

// 13번째 줄
// 일반 scanf와 사용법이 똑같지만 stream으로 하면 파일 데이터를 읽어서 저장한다.

// 19번째 줄
// 데이터들을 stream으로 출력한다.
// 다시 말하자면 data.txt로 출력하며 저장하는 것과 같다.

// 20번째 줄
// 데이터를 모니터로 출력한다.