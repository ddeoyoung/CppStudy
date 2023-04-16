#include "Parts.h"

Parts::Parts() 
{

}

Parts::~Parts() 
{

}

void Parts::Update() 
{
	ConsoleGameObject::Update();
}

void Parts::Start()
{
	if (nullptr == Prev)
	{
		return;
	}
	SetPos(Prev->GetPos());
	return Prev->Start();
}