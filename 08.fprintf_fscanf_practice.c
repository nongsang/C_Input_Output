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
// 12��° ��
// stream1�� ����� ������ �о ���ʴ�� ������ �����Ѵ�.
// �̶� ������ �����ʹ� scanf�� ���� ����, Ȥ�� �������� �����Ѵ�.
// ��ǥ(,)�� ������ �� ����.

// 13��° ��
// fscanf�� �о���� ������ ""���� ���ڿ���� ����Ѵ�.
// ����, ����, ��ǥ(,)�� �״�� �Ȱ��� �����Ѵ�.

// 14��° ��
// ���ڿ��� ȭ������ ����Ѵ�.