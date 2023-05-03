// 084_DefaultParameter.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void Function(int _Value = 50)
{
    std::cout << _Value << std::endl;
}


void Function(int _Value, int _Test = 50)
{
    std::cout << _Value << std::endl;
}



// 디폴트 인자는 무조건 인자의 가장 오른쪽부터 만들수 있다.
//void Function0(int _Value = 50, int _Test)
//{
//    std::cout << _Value << std::endl;
//}
int main()
{
    Function(10, 20);

    Function();
    Function();
    Function();
    Function();
    Function();
    Function();
    Function();
    // Function(20);

    std::cout << "Hello World!\n";
}