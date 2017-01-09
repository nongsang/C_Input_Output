#include <stdio.h>

int main()
{
	FILE* stream = fopen("data.txt", "wt");
	long distance;

	fputs("ABCDEFG", stream);
	fclose(stream);

	stream = fopen("data.txt", "rt");

	fseek(stream, 0, SEEK_SET);					// SEEK_SET의 사용
	fprintf(stdout, "%c\n", fgetc(stream));

	fseek(stream, 4, SEEK_SET);					// SEEK_SET의 사용
	fprintf(stdout, "%c\n", fgetc(stream));

	fseek(stream, -1, SEEK_END);				// SEEK_END의 사용
	fprintf(stdout, "%c\n", fgetc(stream));

	fseek(stream, -2, SEEK_CUR);				// SEEK_CUR의 사용
	fprintf(stdout, "%c\n", fgetc(stream));

	fseek(stream, -1, SEEK_END);
	distance = ftell(stream);					// ftell()의 사용
	printf("거리 : %ld\n", distance);

	fseek(stream, 0, SEEK_END);						// 이를 응용하여 파일 크기 구하기
	printf("파일 크기 : %d byte\n", ftell(stream));

	fclose(stream);
}
// fseek의 사용방법

// 11번째 줄
// SEEK_SET은 파일의 시작 부분을 나타낸다.
// 파일의 시작 위치부터 0'바이트' 만큼 파일 포인터를 이동한다.
// 파일의 시작 위치는 A이므로 0만큼 이동하면 A이다.

// 14번째 줄
// 파일의 시작 위치부터 4바이트 만큼 파일 포인터를 이동한다.
// 파일의 시작 위치는 A이므로 4만큼 이동하면 E이다.

// 17번째 줄
// 파일의 끝 위치부터 -1바이트 만큼 파일 포인터를 이동한다.
// 앞쪽으로 1바이트 만큼 이동한다는 뜻이다.
// 여기서 중요한 점은 SEEK_END는 EOF의 처음 부분을 가리킨다는 것이다.
// EOF의 끝이 아닌 EOF의 첫부분이다.
// 만약 EOF의 끝을 나타낸다면 -1만큼 이동했을 때 출력되는 값은 EOF값이 될 것이다.
// 따라서 EOF의 시작점에서 -1만큼 이동했으니 G의 시작점을 가리키게 되어 G를 출력하게 된다.

// 20번째 줄
// 파일 포인터의 현재 위치에서 -2만큼 이동한 값을 가리킨다.

// (제일 중요~~~~~~~~~~~~~~~~~~~~~)
// fseek를 하게 되면 파일 포인터를 이동하게 된다.
// 만약 파일 출력(fprintf)을 실행할 경우 출력과 함께 파일 포인터도 이동을 하게 된다.
// 17번째 줄 처럼 SEEK_END로 부터 -1의 위치에서 출력을 하게 되면 파일 포인터의 위치는 EOF의 처음을 가리키게 된다.

// 26번째 줄
// ftell을 사용하여 파일 포인터의 위치를 알려준다.
// 파일 포인터의 기준은 시작점으로 부터 몇 byte 떨여졌는지를 알려준다.

// 29번째 줄
// 파일 포인터를 끝으로 보낸다.
// ftell을 한다면 파일의 크기를 구할 수 있다.