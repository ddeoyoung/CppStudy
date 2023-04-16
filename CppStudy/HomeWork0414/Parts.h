#pragma once
#include <GameEngineConsole/ConsoleGameObject.h>

// Ό³Έν :
class Parts : public ConsoleGameObject
{
public:
	// constrcuter destructer
	Parts();
	~Parts();

	Parts* GetNext()
	{
		return Next;
	}

	Parts* GetPrev()
	{
		return Prev;
	}

	void SetNext(Parts* _NextPart)
	{
		Next = _NextPart;
		Next->Prev = this;
	}

	void Start();
	void BackRender();

	Parts* GetLastPart()
	{
		if (nullptr == Next)
		{
			return this;
		}

		return Next->GetLastPart();
	}

	// delete Function
	Parts(const Parts& _Other) = delete;
	Parts(Parts&& _Other) noexcept = delete;
	Parts& operator=(const Parts& _Other) = delete;
	Parts& operator=(Parts&& _Other) noexcept = delete;

protected:
	void Update() override;

private:
	Parts* Next = nullptr;
	Parts* Prev = nullptr;
};

