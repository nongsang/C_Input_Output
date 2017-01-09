#include <stdio.h>

struct Score
{
	char name[20];
	double kor, eng, total;
};

typedef struct Score Student;

int main()
{
	Student s1, s2;
	FILE* stream;

	puts("1. 파일 입력 : ");
	fscanf(stdin, "%s", s1.name);					// 입력 받아서 구조체에 저장

	puts("2. 국어 점수, 영어 점수 입력 : ");
	fscanf(stdin, "%lf %lf", &s1.kor, &s1.eng);		// 입력 받아서 구조체에 저장
	s1.total = s1.kor + s1.eng;

	stream = fopen("student.txt", "wb");
	fwrite(&s1, sizeof(s1), 1, stream);				// 구조체를 stream에 쓰기
	fclose(stream);

	stream = fopen("student.txt", "rb");
	fread(&s2, sizeof(s2), 1, stream);				// 구조체 단위로 읽기
	fprintf(stdout, "%s, %f, %f, %f\n", s2.name, s2.kor, s2.eng, s2.total);

	fclose(stream);
}
// 24번째 줄
// 구조체 단위로 stream에 쓰기 요청을 한다.

// 28번째 줄
// 구조체 단위로 stream에 읽기 요청을 한다.