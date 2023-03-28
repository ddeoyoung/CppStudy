// 018_Const01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


// 함수의 스택에서의 메모리 크기는 컴파일시 고정되어야 한다.
// ex) c++의 함수의 실행흐름을 만들기 위한 스택크기는
//     exe파일에 이미 다 정의되어 있어야 한다.

int main()
{
    "Testchar"; // const char[9]

    int Value = 20;

    const bool cb = 20;

    const char cc = 20;

    // 한번더 보게 될것
    const int ci = 20;


    // 특정 자료형앞에 const 키워드를 붙이면
    // 그 메모리를 비트적 상수화 시킨다.


    // int ArrSize = 30;
    // int Value[ArrSize] = {}; 불가능 -> 메모리 크기가 변수이기 때문

    const int ArrSize = 30;
    int Value[ArrSize] = {}; // 가능
}
