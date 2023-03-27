// 012_FunctionAndMemory.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <iostream>

/*

<함수>

    : 이름이 있는 실행흐름

    main이라는 이름의 실행흐름을 만들기 위해서 메모리가 필요하다
    나만의 실행흐름을 만들고 이름을 붙일 수도 있다 = 함수

*/

void Function()
{
	{
		int Value = 20;
	}

	{
		int Value = 30;
	}

	return;
}

int main()
{

	// Unname scope 
	// 이름이 없는 실행흐름
	{
		int Value = 100;
	}

	// 함수 실행 방법 :
	// f11을 누를면 다른 이름있는 실행흐름 내부로 들어갈 수 있다.
	// f10은 그 실행흐름을 한번에 다 실행해버리는 용도가 생기게 된다.
	Function();
}
