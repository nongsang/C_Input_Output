#include <stdio.h>

int main()
{
	FILE* stream;
	char buffer[50];

	stream = fopen("data.txt", "wt");
	if (NULL == stream)
		puts("���� ���� ����");

	fgets(buffer, sizeof(buffer), stdin);
	fputs(buffer, stream);

	fclose(stream);
}
// 12��° ��
// buffer�� buffer ũ�� ��ŭ Ű���� �Է��� �޾� ���ڿ��� �����Ѵ�.

// 13��° ��
// stream�� buffer�� �ִ� �����͸� �����Ѵ�.