#include "Item.h"
#include <GameEngineBase/GameEngineRandom.h>
#include <GameEngineConsole/ConsoleGameScreen.h>

Item::Item() 
{
	RenderChar = '&';

	// 아이템 랜덤한 위치에 출력
	int X = GameEngineRandom::MainRandom.RandomInt(0, ConsoleGameScreen::GetMainScreen().GetScreenSize().X - 1);
	int Y = GameEngineRandom::MainRandom.RandomInt(0, ConsoleGameScreen::GetMainScreen().GetScreenSize().Y - 1);
	SetPos({X, Y});
}

Item::~Item() 
{
}

void Item::Update() 
{
	ConsoleGameObject::Update();

}