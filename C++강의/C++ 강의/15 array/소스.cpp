#include <stdio.h>

//Array 배열... 
//int array[100];   // 이러면 400byte를 할당 받지
					// 4byte 단위로 잘라서 쓴다.
						// 이 400byte를 하나로 묶어서 배열명(array)의 주소 값(주소 상수)을 받는다. 
							// array는 하나의 주소 값을 가지고 있는 ddns와 비슷하다.
								// 그래서 array = 100; 같은건 올 수 가 없지 만약 배열의 주소가 2000 이면  2000=100; 이거랑 똑같은거니까
									

// array[1]; 배열식... array에서 1칸 떨어진 곳.. > 즉, 데이터 타입 바이트 수 만큼 떨어진 공간 
//array배열이 2000 번지라면 array[1]은  2008번지에 있는 곳


// 배열은 각각의 저장공간이 인정해서 만들어지기 때문에 가능하다.



void main() {

	int array[101];
	// 배열은 동일한 데이터 타입의 저장공간이 여러 개 필요할 때 사용한다.
	//0~100의 값을 저장하라

	for (int i = 0; i < 101; i++) {
		array[i] = i;

		printf("num %d\n", array[i]);


		if (array[i]==0){

		}
		else if (array[i] % 2 == 0) {
		printf("even %d\n", array[i]);

		}
		
		if (array[i] == 0) {

		}

		else if (array[i] % 2 == 0 && array[i] % 3 == 0) {
			printf("2와 3의 배수 %d\n", array[i]);


		}
		
	}
	
		// 배열 값을 모두 출력
	//짝수
	//2, 3의 배수




	//int array[100];
		//이런 경우를 일차원 배열이라고 한다.
	/*int array[10][10];
		 이런 경우를 이차원 배열이라고 한다.*/

	//마치 행렬과도 같다.....

// 이차원 배열을 사용해서 1~100까지의 값을 저장하라
	printf("\n\n");
	int arr[10][10];
	for (int i = 0; i < 10; i++) {
		for (int k = 0; k < 10; k++) {
			arr[i][k] = ((i) * 10 + (k + 1));
			printf("num %d\n", arr[i][k]);

			if ((arr[i][k] % 2 == 0) && (arr[i][k] % 3 == 0)) {
				arr[i][k] *= 2;
				printf("*2 %d\n", arr[i][k]);
			}

		}
		
		}
	//값을 넣는 부분과 출력하는 부분을 따로 해라.... 흠...






}