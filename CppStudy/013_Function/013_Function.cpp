﻿// 013_Function.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 함수의 선언방법
// 1. 함수는 다른 함수 내부에서는 선언하지 못한다
// 2. 함수는 리턴값이라는것이 존재

//   리턴값    이름        이 함수에 넘길 메모리
    void    Function(    )
{ // 함수의 시작

} // 함수의 끝



/*


 리턴값의 의미
    이 함수의 결과를 외부로 보내겠다.
    void: 아무것도 보내지 않겠다.

 이름의 의미
    램 200만 바이트번째에 있다는 주소값이 된다.
    변수와 똑같이 함수도 그에 대한 내용이 있고
    메모리를 써서 그것을 표현하고 있다.
    메모리가 존재한다면 그에 대한 위치도 무조건 필요하다.
    이름은 그 위치를 의미하게 된다.

 인자의 의미
    무조건 적으로 그 실행흐름의 지역변수입니다.

 리턴의 의미 자신을 호출한 외부 메모리영역에 전달하는 메모리값
 + 사용한 즉시 자신을 포함한 실행흐름을 끝낸다.


*/

int Plus(int _Left, int _Right)
{
    return _Left + _Right;
}

// 이름이 같은 변수는 선언할수 없다.
// 함수를 실행하는데 필요한 메모리 비용은 언제나
// 인자 전체 크기 + a
int Test(int _Value)
{
    // Test_Value
    _Value = 10;
    _Value *= 10;
    _Value -= 20;
    return 100;
}


int main()
{
    // int Value = 20;

    int Result = Plus(20, 30); // 4바이트 메모리 사용


    // 이것도 똑같이 4바이트를 사용한 것. (=보이지 않는 결과값)
    Plus(20, 30);

    // int ReturnSize = sizeof(Plus(20, 30));

    sizeof(Plus(20, 30));
    

    // main_Value
    int _Value = 20;
    Test(_Value);

    // sizeof(Test(_Value));

    // void 는 sizeof할수 없다.
    // sizeof(void);
}