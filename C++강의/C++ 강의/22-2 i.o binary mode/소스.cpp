#include <stdio.h>

void main() {
	FILE* fp;

	int array[3] = { 12342,23123413,231 };
	int readArray[3];


	fp = fopen("binaya.dat", "wb");
	// fopen�� ���۸� ����� �ִ� ����̴�. (������/outputStream�� ����)
	// ���۰� �� �� �� �ʿ��ϴ� ����/�б�
	//fopen("�����̸�",wb:����/rb:�б�);

	// fopen �а� �� �� �ִ� ���� ����
	if (fp == NULL) {
		printf("���� ���⿡ �����߽��ϴ�.");
		return;
	}

	//fprintf(fp, str);
	//�ؽ�Ʈ ��忡����

	fwrite(array, sizeof(int), 3, fp);
	
	fclose(fp);
	//malloc�� free�� ����.


	fp = fopen("binaya.dat", "rb");

	if (fp == NULL) {
		printf("���� ���⿡ �����߽��ϴ�. ");
	}


	fread(readArray, sizeof(int), 3, fp);


	for (int i = 0; i < 3; i++) {
		printf("readArray[%d] = %d\n", i, readArray[i]);
	}

	fclose(fp);


}