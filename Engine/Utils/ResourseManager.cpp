#include "ResourseManager.h"

Shader ResourseManager::ShaderFromFile(const std::string& vertex_path, const std::string fragment_path)
{
    std::string line, vertex_source, fragment_source;
    std::ifstream file(vertex_path);
    if (file.is_open())
    {
        while (getline(file, line))
        {
            vertex_source += line + "\n";
        }
        file.close();
    }
    else {
        std::cout << "file not loaded" << std::endl;
    }
    std::ifstream file2(fragment_path);
    if (file.is_open())
    {
        while (getline(file, line))
        {
            fragment_source += line + "\n";
        }
        file2.close();
    }
    else {
        std::cout << "file not loaded" << std::endl;
    }
    return Shader(vertex_source.c_str(),fragment_path.c_str());
}

Shader ResourseManager::ShaderFromFile(const std::string& vertex_path, const std::string fragment_path, const std::string geometry_path)
{
    std::string line, vertex_source, fragment_source, geometry_source;
    std::ifstream file(vertex_path);
    if (file.is_open())
    {
        while (getline(file, line))
        {
            vertex_source += line + "\n";
        }
        file.close();
    }
    else {
        std::cout << "file not loaded" << std::endl;
    }
    std::ifstream file2(fragment_path);
    if (file2.is_open())
    {
        while (getline(file2, line))
        {
            fragment_source += line + "\n";
        }
        file2.close();
    }
    else {
        std::cout << "file not loaded" << std::endl;
    }
    std::ifstream file3(geometry_path);
    if (file3.is_open())
    {
        while (getline(file3, line))
        {
            geometry_source += line + "\n";
        }
        file3.close();
    }
    else {
        std::cout << "file not loaded" << std::endl;
    }
    return Shader(vertex_source.c_str(),fragment_source.c_str(),geometry_source.c_str());
}

Texture ResourseManager::Texture2DFromImage(const std::string& path)
{
    return Texture(path);
}
