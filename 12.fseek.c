#include <stdio.h>

int main()
{
	FILE* stream = fopen("data.txt", "wt");
	long distance;

	fputs("ABCDEFG", stream);
	fclose(stream);

	stream = fopen("data.txt", "rt");

	fseek(stream, 0, SEEK_SET);					// SEEK_SET�� ���
	fprintf(stdout, "%c\n", fgetc(stream));

	fseek(stream, 4, SEEK_SET);					// SEEK_SET�� ���
	fprintf(stdout, "%c\n", fgetc(stream));

	fseek(stream, -1, SEEK_END);				// SEEK_END�� ���
	fprintf(stdout, "%c\n", fgetc(stream));

	fseek(stream, -2, SEEK_CUR);				// SEEK_CUR�� ���
	fprintf(stdout, "%c\n", fgetc(stream));

	fseek(stream, -1, SEEK_END);
	distance = ftell(stream);					// ftell()�� ���
	printf("�Ÿ� : %ld\n", distance);

	fseek(stream, 0, SEEK_END);						// �̸� �����Ͽ� ���� ũ�� ���ϱ�
	printf("���� ũ�� : %d byte\n", ftell(stream));

	fclose(stream);
}
// fseek�� �����

// 11��° ��
// SEEK_SET�� ������ ���� �κ��� ��Ÿ����.
// ������ ���� ��ġ���� 0'����Ʈ' ��ŭ ���� �����͸� �̵��Ѵ�.
// ������ ���� ��ġ�� A�̹Ƿ� 0��ŭ �̵��ϸ� A�̴�.

// 14��° ��
// ������ ���� ��ġ���� 4����Ʈ ��ŭ ���� �����͸� �̵��Ѵ�.
// ������ ���� ��ġ�� A�̹Ƿ� 4��ŭ �̵��ϸ� E�̴�.

// 17��° ��
// ������ �� ��ġ���� -1����Ʈ ��ŭ ���� �����͸� �̵��Ѵ�.
// �������� 1����Ʈ ��ŭ �̵��Ѵٴ� ���̴�.
// ���⼭ �߿��� ���� SEEK_END�� EOF�� ó�� �κ��� ����Ų�ٴ� ���̴�.
// EOF�� ���� �ƴ� EOF�� ù�κ��̴�.
// ���� EOF�� ���� ��Ÿ���ٸ� -1��ŭ �̵����� �� ��µǴ� ���� EOF���� �� ���̴�.
// ���� EOF�� ���������� -1��ŭ �̵������� G�� �������� ����Ű�� �Ǿ� G�� ����ϰ� �ȴ�.

// 20��° ��
// ���� �������� ���� ��ġ���� -2��ŭ �̵��� ���� ����Ų��.

// (���� �߿�~~~~~~~~~~~~~~~~~~~~~)
// fseek�� �ϰ� �Ǹ� ���� �����͸� �̵��ϰ� �ȴ�.
// ���� ���� ���(fprintf)�� ������ ��� ��°� �Բ� ���� �����͵� �̵��� �ϰ� �ȴ�.
// 17��° �� ó�� SEEK_END�� ���� -1�� ��ġ���� ����� �ϰ� �Ǹ� ���� �������� ��ġ�� EOF�� ó���� ����Ű�� �ȴ�.

// 26��° ��
// ftell�� ����Ͽ� ���� �������� ��ġ�� �˷��ش�.
// ���� �������� ������ ���������� ���� �� byte ������������ �˷��ش�.

// 29��° ��
// ���� �����͸� ������ ������.
// ftell�� �Ѵٸ� ������ ũ�⸦ ���� �� �ִ�.