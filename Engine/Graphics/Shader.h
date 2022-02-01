#pragma once
#include "Core/Base.h"
#include <string>
#include <glm/gtc/type_ptr.hpp>
#include <fstream>
#include <iostream>
#include "glm/glm.hpp"

class Shader
{
public:
	Shader(const char* vertex_shader_source, const  char* fragment_shader_source);
    Shader(const char* vertex_shader_source, const  char* fragment_shader_source, const char* geometry_shader_source);
	~Shader();
	void Bind() const;
	void UnBind() const;
    void SetFloat(unsigned int id, float value);
    void SetFloatArray(unsigned int id, int lenght, float* data);
    void SetInteger(unsigned int id, int value);
    void SetIntegerArray(unsigned int id, int lenght, int* data);
    void SetVector2f(unsigned int id, const glm::vec2& value);
    void SetVector3f(unsigned int id, const glm::vec3& value);
    void SetVector4f(unsigned int id, const glm::vec4& value);
    void SetMatrix3(unsigned int id, const glm::mat3& matrix);
    void SetMatrix4(unsigned int id, const glm::mat4& matrix);
    void SetMatrix4Array(unsigned int id, int lenght, glm::mat4* data);
	unsigned int GetUniformID(const std::string& name) const;
private:
	unsigned int m_ID;
};