﻿// 004_Var.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//


/*

프로젝트를 생성할 때 콘솔앱을 설정했다.

속성 - 링커 - 시스템 - 하위시스템에 이미 콘솔로 설정됐기 때문에
콘솔창으로 띄운다는 설정이 이미 되어있는 것.

함수의 시작과 끝 사이를 지역 (혹은 스코프)라고 한다.
지역에 선언된 숫자 = 지역에 선언된 메모리
10과 같은 고정된 숫자를 상수라고 한다.

열거형, 사용자 정의 자료형, 실수형, 논리형, 정수형 등
이런 형들을 표현하기 위한 자료형이 있다.
자료형에 이름을 붙여주는 것 = 변수 선언
변수 선언은 내 프로그램에 메모리를 선언해주는 것

*/



#include <iostream>

int main()
{
// 자료형      이름
    int      PlayerAtt;
    int      PlayerHp;
    int      MonsterHp;
    int      MonsterAtt;



/*

자료형의 의미
    1. int는 4바이트
    2. 처리 형태 (= 정수다)

이름의 의미
    1. 메모리 위치 
    (내 프로그램의 시작 위치에서 N바이트 떨어진 위치에 만들어진다 => 주소값으로 치환됨 => 램에서의 물리적 위치)

*/

    std::cout << "Hello World!\n";
}
