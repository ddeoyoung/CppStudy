// 007_Operator01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


int Plus(int _left, int _right)
{
	return _left + _right;
}

int main()
{

	/*
	<중단점 단축키>

	F5 -> 중단점이 존재하는 곳까지 한번에 실행
	F10 -> 처리형태가 구부노디는 한 명령씩 실행
	F9 -> 중단점 설정
	*/

	int aaaaa;
	int Left = 7;
	int Right = 3;
	int Result = 0;

	// 연산자에는 보통 
	// 단항 연산자 <= 메모리영역이 1개만 필요하면 단항
	// 이항 연산자 <= 메모리영역이 2개만 필요하면 단항
	// 삼항 연산자 <= 메모리영역이 3개만 필요하면 단항

	// ex) = 연산자는 이항 연산자 입니다.
	// Left 3을 사용해서 2개의 메모리영역이 있어야만 동작하기 때문에 
	// 이항 연산자라고 한다.


	// 산술연산자는 보통 이항이 많다.
	//        7      3
	Result = Left + Right;
	Result = Left - Right;
	Result = Left * Right;
	// c++에서 정수의 나눗셈은 몫만 나온다
	Result = Left / Right;
	Result = Left % Right;

	// 단항연산자
	Result = -Left;
	Result = +Left;

	// 전치(전위)
	Result = ++Left;
	Result = --Left;

	// 후치(후위)
	Result = Left++;
	Result = Left--;




	// 연산자 순서
	Result = 1 + 2 * 3;

	// () 괄호 연산자
	// 연산순서를 프로그래머가 지정하게 해줄수 있는 연산자 입니다.
	Result = (1 + 2) * 3;

	/*
	bool 자료형은 '논리형'
	논리형은 true와 false로 참과 거짓이라는 2가지만 표현
	(true: 논리형 상수 참 / false: 논리형 상수 거짓)
	*/


	// 비교 연산자 / 관계 연산자
	bool bResult = true;
	bResult = false;

	bResult = Left == Right; // 같다
	bResult = Left != Right; // 같지 않다.
	bResult = Left < Right; // 작다
	bResult = Left > Right; // 크다
	bResult = Left <= Right; // 작거나 같다.
	bResult = Left >= Right; // 크거나 같다


	// 논리 연산자
	// and (둘다 참이라면 참 / 하나라도 거짓이라면 거짓)
	bResult = true && true;
	bResult = true && false;
	bResult = false && false;

	// or (둘중 하나라도 참이라면 참 모두 거짓이라면 거짓)
	bResult = true || true;
	bResult = true || false;
	bResult = false || false;

	Left = Plus(Left, 3);

	Left = 7 + 3;
	// Left + 3

}
