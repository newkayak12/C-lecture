#include <stdio.h>
#include <stdlib.h>

int* MakeSpace(int size) {
	return (int*)malloc(sizeof(int) * size);
}


// 



void main() {
	// 동적변수는 실행 중에 우리들이 저장 공간을 동적으로 할당 할 때 사용

	//void* malloc(int size);

	//(원형이다. 위의 것이)

	/*ss 자동 변수
		cs 우리가 만든 코드
			ps
				heap 동적 변수
*/

	//malloc은 heap에 우리가 만들어 달라고 하는대로 그냥 공간만 만들어준다. 100byte면 그대로 그리고 void형 포인터를 반환

		// void * 주소 값이 형이 결정나지 않은 주소값이다.  주소값은 무조건 4byte이다. 
	
		
		/*int* pa; 이든
		double* pac; 이든 pa/pac는 다 주소 값 자체는 4byte
		단지 그 공간에 저장되어 있는 자료들의 크기가 4byte/8byte 라는 소리인 것*/

	/*int* p = (int*)malloc(100);
	
	realloc = 이미 할당 된 값을 재할당할때(공간이 더 필요해) ()-> 기존의 내용을 새로운 곳으로 복사하고 기존의 것은 지우고 새로운 곳의 주소 값을 리턴
		realloc(사용중인 곳의 주소 값, 추가 할당 양);

	calloc = 값을 다 0으로 초기화해준다(할당해주는데)
*/

	//heap의 공간은 언제 없어질까 ? gc가  없어서 우리가 직접 free(p); 이렇게 반환해야한다. 
	// 만약 free 안해주면 메모리 누수가 된다 (컴퓨터 재부팅시까지 유지..)

	/*int size = 0;
	printf("사이즈를 입력해주세요. :");
	scanf_s("%d", & size);

	int* p = (int*)malloc(sizeof(int) * size);

	for (int i = 0; i < size; i++) {
		p[i] = i;
	}

	for (int i = 0; i < size; i++) {
		printf("p[%d] = %d\n", i, p[i]);
	}

	free(p);*/

	// 이러면 실행 중에 변수를 만들다.......... 실행 중에 사이즈 만큼 공간을 만든다.
	// c에서는 malloc을 주로 사용한다.

	//객체지향에서는 new를 사용해서 만든다. 
	// Scanner scn = new Scanner(System.in);
	//int s = scn.nextInt();
	// new int [s]; 이랑 같은 느낌이다. 

	// free는 항상 해야한다. 
	//malloc와 free는 짝꿍이라고 생각해야한다. 


	//MakeSpace 함수를 이용해서 
	// 정수 1~10까지 출력
	int input=0;
	printf("값을 입력해주세요: ");
	scanf_s("%d", &input);
	int*space = MakeSpace(input);

	for (int i = 0; i < input; i++) {
		space[i] = (i + 1);
	}

	for (int i = 0; i < input; i++) {
		printf("space[%d] 공간의 값은 %d\n",i, space[i]);
	}
	


	free(space);


	//double* pDouble = (double*)malloc(40);
	//int* pInt = (int*)malloc(40);

	//pDouble++; > 8바이트씩 이동
	//	pInt++; > 4바이트씩 이동
}