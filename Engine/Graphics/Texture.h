#pragma once
#include <iostream>
#include "Core/Base.h"
#include <string>
#include <stb_image.h>

class Texture
{
public:
	Texture(const std::string& path);
	~Texture();

	void Bind() const;
private:
	unsigned int m_ID;
};