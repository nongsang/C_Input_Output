#include <stdio.h>

int main()
{
	FILE* stream;
	int file_state;
	int input;			// �� �κ� �߿�

	stream = fopen("data.txt", "wt");	// �ؽ�Ʈ ���� ����, ���� �������� ������ ����
	if (NULL == stream)
		puts("���� ���� ����");

	puts("������ �Է�");
	while (EOF != input)
	{
		input = fgetc(stdin);			// Ű����� ���� �����͸� input�� �����Ѵ�.
		fputc(input, stream);			// input�� �ִ� �����͸� stream���� ���� �ϳ��ϳ� ������.
	}

	file_state = fclose(stream);
	if (EOF == file_state)
		puts("���� �ݱ� ����");
}
// ������ ���Ͽ� ���� �۾��� �Ѵ�.

// 8��° ��
// (�ſ� �߿�~~~~~~~~~~~~~~~~~~~~~~~)
// Ű���� �Է��� �޾� ������ ������ �ʱ�ȭ �Ͽ���.
// ������ ���� �Ѵٸ� �Է� �ޱ� ������ ������ �հԵȴ�.

// 9��° ��
// �ؽ�Ʈ ���� ���, �б� �������� data.txt�� ������ ����.

// 16��° ��
// Ű����� ���� ���ڸ� input�� �����Ѵ�.

// 17��° ��
// input�� �ִ� �����͸� ��Ʈ������ ������.