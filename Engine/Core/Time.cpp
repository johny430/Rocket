#include "Time.h"

Time::Time()
{
    m_Current = glfwGetTime();
}

Time::~Time()
{
}

void Time::Update()
{
    m_Current = glfwGetTime();
    m_Delta = m_Current - m_LastTime;
    m_LastTime = m_Current;
}
