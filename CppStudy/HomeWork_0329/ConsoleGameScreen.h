#pragma once
#include "ConsoleGameMath.h"

// Level1 -> �̰� 1�ܰ�
// ���� ������ ���� �ٺ�

class ConsoleGameScreen
{
public:
	// Ŭ���� ���ο� ���������� ������ �� �ִ�
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

	// �̷��� ������������ �̱��� �����̶�� ��
	// �����̶�? Ŭ������ © �� Ŭ�������� ���質 ������ ¥�� ����� ����ϸ� �ݺ������� �θ� ���Ǵ� ���� �̸����� ��
	// ������������� �Ҹ��� ���α׷��� ��ȣȸ�� ������ ���ϵ��� ��Ƽ� å���� ����
	// �ٵ� ������ �ƹ��� �Ƚ��.

	static ConsoleGameScreen MainScreen;
};