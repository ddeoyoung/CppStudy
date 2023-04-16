#include "Body.h"
#include <GameEngineBase/GameEngineRandom.h>
#include <GameEngineConsole/ConsoleGameScreen.h>
#include <GameEngineConsole/ConsoleGameObject.h>

Body* Body::CurBody = nullptr;

// ���ο� Body �����ϰ� �����ϱ�
void Body::CreateBody()
{
	int X = GameEngineRandom::MainRandom.RandomInt(0, ConsoleGameScreen::GetMainScreen().GetScreenSize().X - 1);
	int Y = GameEngineRandom::MainRandom.RandomInt(0, ConsoleGameScreen::GetMainScreen().GetScreenSize().Y - 1);
	CurBody->SetPos({ X, Y });
}


Body* Body::GetCurBody()
{
	return CurBody;
}

Body::Body() 
{
	RenderChar = 'O';
}

Body::~Body() 
{
}


void Body::Update()
{
	if (nullptr == GetPrev())
	{
		return;
	}
	SetPos(GetPrev()->GetPos());

	// ConsoleGameObject::Update();
}