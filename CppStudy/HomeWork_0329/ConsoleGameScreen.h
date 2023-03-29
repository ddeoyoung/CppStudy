#pragma once
#include "ConsoleGameMath.h"

// Level1 -> 이게 1단계
// 수학 물리와 같은 근본

class ConsoleGameScreen
{
public:
	// 클래스 내부에 전역변수를 선언할 수 있다
	static const int ScreenYSize = 10;
	static const int ScreenXSize = 20;

	static ConsoleGameScreen& GetMainScreen()
	{
		return MainScreen;
	}

	static int2 GetScreenSize();

	void ScreenClear();

	void ScreenPrint() const;

	bool IsScreenOver(const int2& _Pos) const;

	void SetScreenCharacter(const int2& _Pos, char _Ch);

protected:

private:
	char Arr[ScreenYSize][ScreenXSize] = { 0, };

	ConsoleGameScreen();

	// 이러한 디자인패턴을 싱글톤 패턴이라고 함
	// 패턴이란? 클래스를 짤 때 클래스간의 관계나 구조를 짜는 방식이 비슷하며 반복적으로 널리 사용되는 것을 이름붙인 것
	// 갱스오브포라고 불리는 프로그래머 동호회가 디자인 패턴들을 모아서 책으로 출판
	// 근데 지금은 아무도 안써요.

	static ConsoleGameScreen MainScreen;
};