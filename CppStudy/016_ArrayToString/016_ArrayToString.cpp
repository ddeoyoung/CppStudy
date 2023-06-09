﻿// 016_ArrayToString.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    {
        int Value1 = 10;
        int Value2 = 10;
    }

    {
        // 자동으로 전부다 0으로 초기화 된다.
        int ArrValue[5] = {};
        int ArrValue2[5] = { 0, };

        // 제로 베이스 이기 때문에
        //                   1  2  3  4  5
        int ArrValue3[5] = { 0, 1, 2, 3, 4/*, 5*/ };

        int ArrValue4[5] = { 2, };

        int a = 0;
    }

    {
        // 초기화 제발 부탁드립니다.
        int ArrValue[5];
        int a = 0;
    }

    {
        // 자동으로 전부다 0으로 초기화 됩니다.
        bool ArrValue[5] = {};

        bool ArrValue2[5] = { true, };

        // 제로 베이스 이기 때문에
        //                   1  2  3  4  5
        bool ArrValue3[5] = { false, true, true, true, true/*, 5*/ };

        bool ArrValue4[5] = { true, };

        bool a = 0;
    }

    {
        char ArrValue1[5] = { 'a', 'b', 'c' }; // 기본

        char ArrValue2[5] = "abc"; // 축약형

        // 모든 이름은 시작위치를 표현하게 됩니다.
        // => 자료형을 선언하고 그 뒤에 이름을 붙였어
        // [] <= 랜덤인덱스 연산자
        ArrValue2[0];

        // V <= 이런 이름은 무조건 메모리의 시작 위치를 표현하게 됩니다.
        char V;

        // V[0]

        // 배열의 경우에는 랜덤인덱스 연산자를 통해서 
        // ArrValue2 100번지라고 하면
        ArrValue2[0];
        // ArrValue2[정수]
        // ArrValue2 시작위치 + (sizoef(자료형) * 정수)
        // 위치의 데이터에 접근하겠다는 뜻이 됩니다.
        ArrValue2[3];
        // ArrValue2 == 100번지
        // 100 + sizeof(char) * 3
        // 100 + 1 * 3
        // 103

        char ArrTest[10] = "abcdefghi";
        // char GetValue = ArrTest[0];
        char GetValue = ArrTest[0];
    }
    {
        int ArrValueInt[11] = { 0, };

        // ArrValueInt[0] 100번지
        // ArrValueInt의 시작번지 + sizeof(int) * 0
        // 100 + 4 * 0 == 100

        // ArrValueInt[3] 100번지
        // ArrValueInt의 시작번지 + sizeof(int) * 3
        // 100 + 4 * 3 == 112



        // char ArrValue[11] = "0123456789";

        // char Value = ArrValue[-31231231];

        // ArrValue[0] 100번지
        // ArrValue의 시작번지 + sizeof(char) * 0
        // 100 + 1 * 0

        // ArrValue[1] 101번지
        // ArrValue의 시작번지 + sizeof(char) * 1
        // 100 + 1 * 1
    }
}

