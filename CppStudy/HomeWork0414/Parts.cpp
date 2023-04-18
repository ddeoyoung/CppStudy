#include "Parts.h"

Parts::Parts() 
{

}

Parts::~Parts() 
{

}

void Parts::Update() 
{
	//int2 CurPos = GetPrevPos();
	//int2 NextPos = GetPos();

	//int2 Dir = NextPos - CurPos;

	//if (Dir == int2::Right)
	//{
	//	RenderChar = L'▶';
	//}

	ConsoleGameObject::Update();

}

void Parts::NextMove()
{
	Parts* Next = GetNext();


	if (nullptr == Next)
	{
		return;
	}


	// 다음 위치 - 현재 위치
	int2 CurPos = GetPrevPos();
	int2 NextPos = Next->GetPos();

	int2 dir = { CurPos.X - NextPos.X, CurPos.Y - NextPos.Y };

	if (dir == int2::Right)
	{
		Next->RenderChar = L'▶';
	}
	if (dir == int2::Left)
	{
		Next->RenderChar = L'◀';
	}
	if (dir == int2::Up)
	{
		Next->RenderChar = L'▲';
	}
	if (dir == int2::Down)
	{
		Next->RenderChar = L'▼';
	}




	Next->SetPos(GetPrevPos());

	// ▲ ▼ ◀ ▶
	// 다음 위치 - 현재 위치

	/*int2 CurPos = GetPrevPos();
	int2 NextPos = GetPos();

	int2 Dir = NextPos - CurPos;

	if (Dir == int2::Right)
	{
		RenderChar = L'▶';
	}*/


	return Next->NextMove();

}