#include <stdio.h>

int main()
{
	FILE* stream1;
	FILE* stream2;
	char buf[50];

	stream1 = fopen("data1.txt", "rt");
	stream2 = fopen("data2.txt", "wt");

	while (!feof(stream1))			// 이 부분 중요
	{
		fgets(buf, sizeof(buf), stream1);
		fputs(buf, stream2);
	}

	fclose(stream1);
	fclose(stream2);
}
// 12번째 줄
// stream1이 feof일 때 까지 작업을 수행한다.
// fgets, fgetc, fscanf 전부 파일의 끝을 알리는 값이 서로 다르다.
// 따라서 feof로 통일 한다면 걱정은 사라지게 된다.
// 여기서 중요한 점은 따로 있다.
// stream1에 해당하는 파일의 끝이 개행된 상태로 저장이 됬다면
// stream2는 같은 내용이 2번 저장이 된다.