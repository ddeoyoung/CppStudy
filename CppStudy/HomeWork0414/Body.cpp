#include "Body.h"
#include <GameEngineBase/GameEngineRandom.h>
#include <GameEngineConsole/ConsoleGameScreen.h>
#include <GameEngineConsole/ConsoleObjectManager.h>
#include "GameEnum.h"

Body::Body()
{

	RenderChar = L'¡ß';

	int X = GameEngineRandom::MainRandom.RandomInt(0, ConsoleGameScreen::GetMainScreen().GetScreenSize().X - 1);
	int Y = GameEngineRandom::MainRandom.RandomInt(0, ConsoleGameScreen::GetMainScreen().GetScreenSize().Y - 1);
	SetPos({ X, Y });
}

Body::~Body()
{
}

void Body::Update()
{
	//int2 BodyPos = GetPos();
	//if (BodyPos == int2::Left)
	//{
	//	RenderChar = L'¢¸';
	//}
	//else if (BodyPos == int2::Right)
	//{
	//	RenderChar = L'¢º';
	//}
}