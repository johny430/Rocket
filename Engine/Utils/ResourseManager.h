#pragma once
#include "Graphics/Shader.h"
#include "Graphics/Texture.h"

static class ResourseManager
{
public:
	Shader ShaderFromFile(const std::string& vertex_path, const std::string fragment_path);
	Shader ShaderFromFile(const std::string& vertex_path, const std::string fragment_path, const std::string geometry_path);

	Texture Texture2DFromImage(const std::string& path);


private:

};