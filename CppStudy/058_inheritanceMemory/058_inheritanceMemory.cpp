﻿// 058_inheritanceMemory.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class A
{
public:
    __int64 Test;

public:
    // 생성자
    A()
        : Test(10)
    {
        printf_s("A 생성자\n");
    }

    // 소멸자
    ~A()
    {
        printf_s("A 소멸자\n");
    }
};

class B : public A
{
public:
    char Value;
    // 생성자
    B()
        // : Test(20)
    {
        Test = 30;
        printf_s("B 생성자\n");
    }

    // 소멸자
    // 소멸자는 ~클래스 이름입니다. <= 다른 이름은 소멸자로 인정되지 않습니다.
    // 생성자와 비교해보면 직접 호출이 가능하지만 아무도 하지 않고
    // 무조건 이게 호출되면 이게 지워졌다고 생각할 것이기 때문에
    // 직접 호출한다고 메모리가 파괴되느냐? 안된다.
    // 인자를 넣어줄수 없다.
    ~B(/*int Value*/)
    {
        Test = 20;
        printf_s("B 소멸자\n");
    }
};

int main()
{
    B NewB = B();

    // 호출할수는 있지만 메모리가 파괴되는것은 아닙니다.
    // 이걸 쓸수있는데 쓰는 사람은 못봤다.
    // 상식을 벗어난 행위로 봅니다.
    NewB.~B();

    int Value = sizeof(B);

    // 나머지 클래스 디폴트(아무것도 안했는데 되는것들)
    // 추상화 virtual
    // 힙

} // <= 실행흐름의 끝에서 벌어지는 일은?
