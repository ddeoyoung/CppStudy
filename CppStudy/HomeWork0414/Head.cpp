#include "Head.h"
#include <conio.h>
#include <GameEngineConsole/ConsoleGameScreen.h>

#include <vector>
#include "Body.h"

bool Head::IsPlay = true;

Head::Head() 
{
	RenderChar = '@';
	SetPos(ConsoleGameScreen::GetMainScreen().GetScreenSize().Half());
}

Head::~Head() 
{
}

void Head::IsBodyCheck() // Body�� �Ծ����� üũ
{

}

void Head::NewBodyCreateCheck() // ���ο� Body�� �����ƴ��� üũ
{

}


void Head::Update()
{
	// ȭ�� ������ ������ ���� ����
	if (true == ConsoleGameScreen::GetMainScreen().IsScreenOver(GetPos()))
	{
		IsPlay = false;
	}


	if (0 == _kbhit())
	{
		SetPos(GetPos() + Dir);
		IsBodyCheck();
		NewBodyCreateCheck();
		return;
	}

	char Ch = _getch();

	int2 NextPos = { 0, 0 };

	switch (Ch)
	{
	case 'a':
	case 'A':
		Dir = int2::Left;
		break;
	case 'd':
	case 'D':
		Dir = int2::Right;
		break;
	case 'w':
	case 'W':
		Dir = int2::Up;
		break;
	case 's':
	case 'S':
		Dir = int2::Down;
		break;
	case 'q':
	case 'Q':
		// ���� ����
		IsPlay = false;
		return;
	default:
		return;
	}

	//SetPos(GetPos() + Dir);
	//IsBodyCheck();
	//NewBodyCreateCheck();

	
	Parts* LastPart = GetLastPart();
	int2 PrevPos = LastPart->GetPos();

	LastPart->Start();

	SetPos(GetPos() + Dir);

	// Body�� �Ծ��ٸ� Head�� NextParts�� �̾���̰� Body ���� �����
	if (GetPos() == Body::GetCurBody()->GetPos())
	{
		Body::GetCurBody()->SetPos(PrevPos); // �̾���̱�
		LastPart->SetNext(Body::GetCurBody()); // ���� LastPart�� �̾���� Body�� ����

		Body::CreateBody(); // Body ���� �����
	}



	if (true == ConsoleGameScreen::GetMainScreen().IsScreenOver(GetPos()))
	{
		IsPlay = false;
	}



}
