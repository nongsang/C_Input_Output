#include <stdio.h>

int main()
{
	FILE* stream1;
	FILE* stream2;
	char name[10];
	int kor = 0, eng = 0, total = 0;

	stream1 = fopen("data1.txt", "rt");
	stream2 = fopen("data2.txt", "wt");

	fscanf(stream1, "%s %d %d %d", name, &kor, &eng, &total);
	fprintf(stream2, "%s, %d, %d, %d", name, kor, eng, total);
	fprintf(stdout, "%s %d %d %d", name, kor, eng, total);

	fclose(stream1);
	fclose(stream2);
}
// 12번째 줄
// stream1과 연결된 파일을 읽어서 차례대로 변수에 저장한다.
// 이때 파일의 데이터는 scanf와 같이 공백, 혹은 개행으로 구분한다.
// 쉼표(,)로 구분할 수 없다.

// 13번째 줄
// fscanf로 읽어들인 값들을 ""안의 문자열대로 출력한다.
// 공백, 개행, 쉼표(,)를 그대로 똑같이 저장한다.

// 14번째 줄
// 문자열을 화면으로 출력한다.