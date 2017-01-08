#include <stdio.h>

int main()
{
	FILE* stream1;			// �б� �������� ���� ��Ʈ���̴�.
	FILE* stream2;			// ���� �������� ���� ��Ʈ���̴�.
	int file_state1;
	int file_state2;
	int input = 0;

	stream1 = fopen("data1.txt", "rt");		// �ؽ�Ʈ ���� �б����� ������ ����.
	stream2 = fopen("data2.txt", "wt");		// �ؽ�Ʈ ���� �������� ������ ����.
	if (NULL == (stream1 || stream2))
		puts("���� ���� ����");

	puts("���Ϸ� ���� ������ �Է�");
	while (EOF != input)
	{
		input = fgetc(stream1);			// �б� �������� ������ ��Ʈ���� input ������ �����Ѵ�.
		fputc(input, stream2);			// input�� �ִ� �����͸� ���� �������� ������ ��Ʈ���� �����ش�.
		fputc(input, stdout);			// input�� �ִ� �����͸� ����ͷ� ������ �����ش�.
	}

	file_state1 = fclose(stream1);
	file_state2 = fclose(stream2);
	if (EOF == (file_state1 || file_state2))
		puts("���� �ݱ� ����");
}
// 5, 6��° ��
// �б� ����, ���� �������� �����Ͽ���.

// 11��° ��
// data1.txt�� �ؽ�Ʈ ���, �б� �������� �����Ͽ���.

// 12��° ��
// data2.txt�� �ؽ�Ʈ ���, ���� �������� �����Ͽ���.

// 19��° ��
// �����͸� ������ ���� input�� ����Ͽ� �б� ���� ��Ʈ���� �����Ͽ� ���� �ϳ��ϳ��� �޾� �����Ѵ�.

// 20��° ��
// �����͸� ������ ���� input�� ���� ���� ��Ʈ���� �����Ͽ� ���� �ϳ��ϳ��� �����Ѵ�.

// 21��° ��
// input�� �����͸� ����Ϳ� ������ش�.