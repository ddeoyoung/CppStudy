#pragma once
#include "Parts.h"

// 설명 :
class Head : public Parts
{
public:
	// constrcuter destructer
	Head();
	~Head();

	// delete Function
	Head(const Head& _Other) = delete;
	Head(Head&& _Other) noexcept = delete;
	Head& operator=(const Head& _Other) = delete;
	Head& operator=(Head&& _Other) noexcept = delete;

	static bool IsPlay;

protected:
	void Update() override;
	void IsBodyCheck();
	void NewBodyCreateCheck();

private:
	int2 Dir = int2::Up; // 처음 시작할 때, 뱀은 정지상태

};

