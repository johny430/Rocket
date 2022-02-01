#include "Application.h"
#include "Utils/ResourseManager.h"

Application::Application() : m_Window(640, 480, "App")
{
    ResourseManager manager;
}

int Application::Run()
{
    while (m_Window.Active())
    {
        m_Time.Update();
        m_Renderer.Clear();



        m_Window.SwapBuffers();
        m_Input.PollEvents();
    }
    return 0;
}

Application::~Application()
{
}