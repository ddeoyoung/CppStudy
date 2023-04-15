#include "Player.h"
#include <conio.h>
#include <Windows.h>
#include <GameEngineConsole/ConsoleGameScreen.h>
#include <GameEngineConsole/ConsoleObjectManager.h>
#include "Bomb.h"
#include "GameEnum.h"
#include "Item.h"

bool Player::IsGameUpdate = true;

Player::Player()
{
	RenderChar = '*';
	SetPos(ConsoleGameScreen::GetMainScreen().GetScreenSize().Half());

}

// ��ź���� üũ
bool Player::IsBomb(int2 _NextPos)
{
	std::list<ConsoleGameObject*>& BombGroup
		= ConsoleObjectManager::GetGroup(ObjectOrder::Bomb);

	for (ConsoleGameObject* Ptr : BombGroup)
	{
		if (nullptr == Ptr)
		{
			continue;
		}

		int2 BombPos = Ptr->GetPos();
		if (_NextPos == BombPos)
		{
			return true;
		}
	}

	return false;
}

// ���������� üũ
void Player::IsItem()
{
	std::list<ConsoleGameObject*>& ItemGroup
		= ConsoleObjectManager::GetGroup(ObjectOrder::Item);
	
	for (ConsoleGameObject* Ptr : ItemGroup)
	{
		if (nullptr == Ptr)
		{
			continue;
		}

		int2 ItemPos = Ptr->GetPos();
		
		// �÷��̾��� ��ġ�� ������ ��ġ�� ���ٸ�
		if (Player::GetPos() == ItemPos)
		{
			Ptr->Death(); // ������ �������
			++BombPower;  // ��ź ���� ����
			ConsoleObjectManager::CreateConsoleObject<Item>(ObjectOrder::Item); // ������ ������ġ �����
		}
	}
}

void Player::Update()
{
	IsItem();

	if (0 == _kbhit())
	{
		return;
	}

	char Ch = _getch();

	int2 NextPos = { 0, 0 };

	switch (Ch)
	{
	case 'a':
	case 'A':
		NextPos = Pos;
		NextPos.X -= 1;
		// ȭ�� �ٱ����� ������ �ʰų�, ��ź�� ��ġ�� ��ġ�� ���� �� �̵��� �� �ִ�
		if (false == ConsoleGameScreen::GetMainScreen().IsScreenOver(NextPos) && false == IsBomb(NextPos))
		{
			Pos.X -= 1;
		}
		break;
	case 'd':
	case 'D':
		NextPos = Pos;
		NextPos.X += 1;
		if (false == ConsoleGameScreen::GetMainScreen().IsScreenOver(NextPos) && false == IsBomb(NextPos))
		{
			Pos.X += 1;
		}
		break;
	case 'w':
	case 'W':
		NextPos = Pos;
		NextPos.Y -= 1;
		if (false == ConsoleGameScreen::GetMainScreen().IsScreenOver(NextPos) && false == IsBomb(NextPos))
		{
			Pos.Y -= 1;
		}
		break;
	case 's':
	case 'S':
		NextPos = Pos;
		NextPos.Y += 1;
		if (false == ConsoleGameScreen::GetMainScreen().IsScreenOver(NextPos) && false == IsBomb(NextPos))
		{
			Pos.Y += 1;
		}
		break;
	case 'f':
	case 'F':
	{
		// ��ź ��ġ
		Bomb* NewBomb = ConsoleObjectManager::CreateConsoleObject<Bomb>(ObjectOrder::Bomb);
		NewBomb->Init(BombPower);
		NewBomb->SetPos(GetPos());
		break;
	}
	case 'q':
	case 'Q':
	{
		// ���� ����
		IsGameUpdate = false;
		break;
	}
	default:
		break;
	}
}
