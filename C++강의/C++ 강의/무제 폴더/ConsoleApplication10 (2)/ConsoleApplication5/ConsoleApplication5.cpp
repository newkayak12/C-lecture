
#include <iostream>
using namespace std;

// 한 프로젝트에 동일한 클래스가 있을 수 없고 동일한 이름의 함수 역시 있을 수 없다.
// >> 리턴타입/파라미터까지 다 똑같은 경우는 있을 수 없다. 



// 예전에는 프로젝트 사이즈가 작었다. > 한 공간 안에서 개발을 했다.
// 근데 요즘에는 비대해지고 이름이 겹치는 경우가 생긴다. 

//이런 문제를 해결하기 위해서 만든게 NAMESPACE라는 논리 공간이다.
// using namespace std = std라는 네임스페이스를 사용하겠다. >> 같은 이름의 함수라도 다른 네임스페이스에 있으면 서로 다른 것으로 본다.


namespace test {
	class Math {

	};
}

namespace test2 {
	class Math {

	};
}

namespace test3{
	namespace test301 {

		class Math {

		};
	}
}
///이렇게 중첩도 가능


int main()
{

	//그러면 사용할 때는
	test::Math a;
	test2::Math b; 
	//이렇게 말이다.
	//근데 계속 네임스페이스 붙이는거 편할까???
	test3::test301::Math c;


	//이렇게 아예 선언해버리는거지
	using namespace test2;
	Math e; // 이녀석은 test2의 math

	using test2::Math;

	return 0;
}

//밖에다 쓴 것은 이 소스파일 안에 있는 전반적으로 포괄하려는 목적// 함수 안에서 선언한 것은 함수 안에서만 국지적으로 사용하려고 선언하는 것.. 당연히 속도 차이가 나지

//using test2::Math;
// 이러면 아예 확정지어버리는 namespace
//

