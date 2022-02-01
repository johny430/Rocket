#include "Window.h"

Window::Window(int widht, int height, const char* title)
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_SAMPLES, 4);
    m_Window = glfwCreateWindow(640, 480, title, nullptr, nullptr);
    glfwMakeContextCurrent(m_Window);
    glfwSetInputMode(m_Window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
    gladLoadGL();
}

Window::~Window()
{
    glfwTerminate();
}

void Window::SwapBuffers()
{
    glfwSwapBuffers(m_Window);
}

bool Window::Active()
{
    return !glfwWindowShouldClose(m_Window);
}
