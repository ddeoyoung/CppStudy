#pragma once
#include "ConsoleGameObject.h"

class Monster : public ConsoleGameObject
{
public:
	Monster();
	void Update();

	void ChangeDir()
	{
		Dir *= (-1);
	}

	int GetDir() const
	{
		return Dir;
	}

private:
	int Dir = 1;
};

