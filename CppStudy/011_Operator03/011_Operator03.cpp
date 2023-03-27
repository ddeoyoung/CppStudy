// 011_Operator03.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{

    // 삼항연산자
    // a ? b : c

    // 참 혹은 거짓 메모리 ? 참일 때 메모리 : 거짓일 때 메모리
    
    // 조건 ? 참 : 거짓

    int Left = 7;
    int Right = 3;
    int Result = 0;

    Result = (Left != Right) ? 100 : 200;
    Result = true ? 100 : 200;
    Result = false ? 100 : 200;

    // sizeof연산자 단항 연산자
    // ()안에 있는 메모리영역의 바이트 크기를 리턴합니다.
    // sizeof(메모리영역)
    // sizeof(int 영역)
    Result = sizeof(Left);
    Result = sizeof(int);
    Result = sizeof(bool);
}
