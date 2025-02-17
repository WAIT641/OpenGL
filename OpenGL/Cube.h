#pragma once
#include "Object.h"

class Cube : public Object
{
public:
	void Draw();

	//int vertexColorLocation = glGetUniformLocation(shaderProgram, "Color");
	//glUniform4f(vertexColorLocation, 0.0f, greenValue, 0.0f, 1.0f);
};

