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

	puts("1. ���� �Է� : ");
	fscanf(stdin, "%s", s1.name);					// �Է� �޾Ƽ� ����ü�� ����

	puts("2. ���� ����, ���� ���� �Է� : ");
	fscanf(stdin, "%lf %lf", &s1.kor, &s1.eng);		// �Է� �޾Ƽ� ����ü�� ����
	s1.total = s1.kor + s1.eng;

	stream = fopen("student.txt", "wb");
	fwrite(&s1, sizeof(s1), 1, stream);				// ����ü�� stream�� ����
	fclose(stream);

	stream = fopen("student.txt", "rb");
	fread(&s2, sizeof(s2), 1, stream);				// ����ü ������ �б�
	fprintf(stdout, "%s, %f, %f, %f\n", s2.name, s2.kor, s2.eng, s2.total);

	fclose(stream);
}
// 24��° ��
// ����ü ������ stream�� ���� ��û�� �Ѵ�.

// 28��° ��
// ����ü ������ stream�� �б� ��û�� �Ѵ�.