#include <stdio.h>

int main()
{
	FILE* stream1;
	FILE* stream2;
	char buf[50];

	stream1 = fopen("data1.txt", "rt");
	stream2 = fopen("data2.txt", "wt");

	while (!feof(stream1))			// �� �κ� �߿�
	{
		fgets(buf, sizeof(buf), stream1);
		fputs(buf, stream2);
	}

	fclose(stream1);
	fclose(stream2);
}
// 12��° ��
// stream1�� feof�� �� ���� �۾��� �����Ѵ�.
// fgets, fgetc, fscanf ���� ������ ���� �˸��� ���� ���� �ٸ���.
// ���� feof�� ���� �Ѵٸ� ������ ������� �ȴ�.
// ���⼭ �߿��� ���� ���� �ִ�.
// stream1�� �ش��ϴ� ������ ���� ����� ���·� ������ ��ٸ�
// stream2�� ���� ������ 2�� ������ �ȴ�.