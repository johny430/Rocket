#pragma once
#include "Core/Base.h"

class Input
{
public:
	Input() {};
	~Input() {};
	void PollEvents() {
		glfwPollEvents();
	};
private:

};