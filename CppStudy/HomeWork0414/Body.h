#pragma once
#include <GameEngineConsole/ConsoleGameObject.h>

#include "Parts.h"

class ConsoleGameScreen;
class Body : public Parts
{
public:
	// constrcuter destructer
	Body();
	~Body();

	static void CreateBody();

	static Body* GetCurBody();

	// delete Function
	Body(const Body& _Other) = delete;
	Body(Body&& _Other) noexcept = delete;
	Body& operator=(const Body& _Other) = delete;
	Body& operator=(Body&& _Other) noexcept = delete;

protected:
	void Update() override;

private:
	static Body* CurBody;
};