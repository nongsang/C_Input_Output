#include <stdio.h>

int main()
{
	FILE* stream;
	char name[10];
	int kor, eng, total;

	printf("1. �̸� �Է� : ");
	fscanf(stdin, "%s", name);					// Ű���� �Է¹޾� ���ڿ��� name�� �����Ѵ�. �ʿ��ϸ� stream���� �ٲ㼭 �� �� �ִ�.

	printf("2. ���� ����, ���� ���� �Է� : ");
	fscanf(stdin, "%d %d", &kor, &eng);			// �Ϲ� scanf�� ������ ������ �� ����ٴ� �Ϳ� �ָ��ϸ� �ǰڴ�.
	total = kor + eng;

	stream = fopen("data.txt", "wt");
	if (NULL == stream)
		puts("���� ���� ����");
	fprintf(stream, "%s, %d, %d, %d\n", name, kor, eng, total);		// �����͵��� stream���� ����Ѵ�.
	fprintf(stdout, "%s, %d, %d, %d\n", name, kor, eng, total);		// �����͵��� ����ͷ� ����Ѵ�.

	fclose(stream);
}
// 10��° ��
// Ű���� �Է��� �޾� name�� �����Ѵ�.
// �ʿ��ϸ� stream���� �ٲ㼭 �� �� �ִ�.

// 13��° ��
// �Ϲ� scanf�� ������ �Ȱ����� stream���� �ϸ� ���� �����͸� �о �����Ѵ�.

// 19��° ��
// �����͵��� stream���� ����Ѵ�.
// �ٽ� �����ڸ� data.txt�� ����ϸ� �����ϴ� �Ͱ� ����.

// 20��° ��
// �����͸� ����ͷ� ����Ѵ�.