#pragma once
#include "Core/Base.h"

class Time
{
public:
	Time();
	~Time();

	void Update();

private:
	float m_Current;
	float m_Delta = 0.0f;
	float m_LastTime = 0.0f;
};