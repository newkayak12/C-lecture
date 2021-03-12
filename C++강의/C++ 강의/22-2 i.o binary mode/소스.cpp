#include <stdio.h>

void main() {
	FILE* fp;

	int array[3] = { 12342,23123413,231 };
	int readArray[3];


	fp = fopen("binaya.dat", "wb");
	// fopen이 버퍼를 만들어 주는 경우이다. (쓰기모드/outputStream이 생성)
	// 버퍼가 총 두 개 필요하다 쓰기/읽기
	//fopen("파일이름",wb:쓰기/rb:읽기);

	// fopen 읽고 쓸 수 있는 버퍼 생성
	if (fp == NULL) {
		printf("파일 열기에 실패했습니다.");
		return;
	}

	//fprintf(fp, str);
	//텍스트 모드에서만

	fwrite(array, sizeof(int), 3, fp);
	
	fclose(fp);
	//malloc의 free랑 같다.


	fp = fopen("binaya.dat", "rb");

	if (fp == NULL) {
		printf("파일 열기에 실패했습니다. ");
	}


	fread(readArray, sizeof(int), 3, fp);


	for (int i = 0; i < 3; i++) {
		printf("readArray[%d] = %d\n", i, readArray[i]);
	}

	fclose(fp);


}