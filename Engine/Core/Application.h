#pragma once
#include "Core/Window.h"
#include "Core/Input.h"
#include "Core/Time.h"
#include "Graphics/Renderer.h"

class Application
{
public:
	Application();
	~Application();

	int Run();
private:
	Window m_Window;
	Input m_Input;
	Renderer m_Renderer;
	Time m_Time;
};