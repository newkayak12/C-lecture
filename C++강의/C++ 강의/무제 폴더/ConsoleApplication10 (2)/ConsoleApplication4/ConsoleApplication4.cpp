#include<iostream>
#include<list>
#include<stack>
#include<queue>
using namespace std;

struct Node {
	int data;
	Node*Next;
	// 논리적으로 붙어있는
	// 필요할 때 마다 공간을 만들고 만든 공간에 주소 값을 붙임(HEAD NODE/ TAIL NODE가 있음)
};


int main() {
	//STL > STANDARD TEMPLATE LIBRARY
	// java의 컬렉션 프레임웍같이




	int array[100];
	//배열은 물리적으로 인접하게 만들어진다. > 공간을 늘였다. 줄였다가 안됨... > 설계 차원에서
	// > 데이터의 삽입과 삭제가 용이하지 않음
	// 그래서 만든게 LinkedList > 물리적으로는 떨어져 있는데 논리적으로는 붙여있는....


	list<int> array2;
	

	for (int i = 0; i < 20; i++) {
		array2.push_back(i);
	}


	std: list<int> ::iterator it;
	for (it = array2.begin(); it != array2.end(); ++it) {
		cout << *it << endl;

	}
	// 자바랑 다르게 iterator로 꺼내네


	array2.remove(4);
	


	// 자료구조>>>
			//데이터를 가지고 적층구조로 쌓는 것을 STACK이라고 한다. LIFO (LAST in FIRST out) >> 히스토리에서 사용한다. (지금까지 왔던 과정을 역순으로 되돌리는)>> 웹브라우저 뒤로가기
																									//>> 혹은 휴대폰 UI 뒤로가기
																									// > 집어 넣을 때 push/ 뺄 때 pop
	stack <int> arr;

	// 이렇게 주어진 것을 stl(템플릿)이라고 한다. 


			// 마치 대롱과 같이 있는 것 QUE FIFO (First in Frst out)   >> 데이터가 들어가는 곳과 나오는 곳이 다르다. >> 아... 미션을 ABCD> 스타에서 웨이포인트로 명령 예약할 때 이런거 쓰지
																												//>> 대기열에 주로 사용 (CPU 스케쥴링???) // 은행에서 대기표 뽑고 기다렸다 처리하는..
																											// 서버에 유저들의 요청을 차례대로 처리할 때


	queue <int> arr2;



	// 고정 개수 > 배열// 가변 개수 > 리스트 이런식으로
	// 자료구조로 만들어내는게 알고리즘......





	return 0;
}