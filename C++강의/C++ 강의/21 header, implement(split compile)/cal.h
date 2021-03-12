#pragma once
//#pragma once > 헤더파일의 문서가 중복 포함되는 것을 막아준다. 
// 만약... 또 다른 헤더 파일이 있고 그게 cal.h를 include 한다고 하자
// 그리고 메인에 cal.h랑 새로 만든 헤더 파일을 include 하면 cal.h가 두 번 포함이 되는 꼴이 된다.
//#pragma once는 이런 것을 막아준다.


int add(int a, int b);

int sub(int a, int b);

int mul(int a, int b);

double div(int a, int b);