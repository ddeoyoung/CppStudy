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

void Head::IsBodyCheck() // Body를 먹었는지 체크
{

}

void Head::NewBodyCreateCheck() // 새로운 Body가 생성됐는지 체크
{

}


void Head::Update()
{
	// 화면 밖으로 나가면 게임 종료
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
		// 게임 종료
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

	// Body를 먹었다면 Head의 NextParts로 이어붙이고 Body 랜덤 재생성
	if (GetPos() == Body::GetCurBody()->GetPos())
	{
		Body::GetCurBody()->SetPos(PrevPos); // 이어붙이기
		LastPart->SetNext(Body::GetCurBody()); // 뱀의 LastPart를 이어붙인 Body로 설정

		Body::CreateBody(); // Body 랜덤 재생성
	}



	if (true == ConsoleGameScreen::GetMainScreen().IsScreenOver(GetPos()))
	{
		IsPlay = false;
	}



}
