// 076_MyCout.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


class MyCout
{
public:
    void operator<<(const char* _Test)
    {
        printf_s(_Test);
    }

private:
};


namespace std
{
    MyCout MCout;
}

int main()
{

    std::MCout << "Hello World!\n";

    std::cout << "Hello World!\n";
}
