#pragma once
#include "Core/Base.h"

class Window
{
public:
	Window(int widht,int height,const char* title);
	~Window();

	void SwapBuffers();
	bool Active();
private:
	static void ResizeEvent();
private:
	GLFWwindow* m_Window;
};