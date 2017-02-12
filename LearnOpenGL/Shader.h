#pragma once
#include <GL/glew.h>

class Shader
{
public:
    Shader(const char* vertexPath, const char* fragmentPath);
    ~Shader();

    void UseProgram();
    GLuint GetProgram();
private:
    GLuint m_program;
};

