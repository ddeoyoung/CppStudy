#pragma once

// Ό³Έν :
class MyDefaultClass
{
public:
	// constrcuter destructer
	MyDefaultClass();
	~MyDefaultClass();

	// delete Function
	MyDefaultClass(const MyDefaultClass& _Other) = delete;
	MyDefaultClass(MyDefaultClass&& _Other) noexcept = delete;
	MyDefaultClass& operator=(const MyDefaultClass& _Other) = delete;
	MyDefaultClass& operator=(MyDefaultClass&& _Other) noexcept = delete;

protected:

private:

};

