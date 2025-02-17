#pragma once
class Object
{
public:
	Object();

	float x, y, z;
	unsigned int ShaderProgram;

	void AssignShader(unsigned int Program);
	virtual void Draw();

private:
	unsigned int VAO;
	unsigned int VBO;
	unsigned int EBO;
};

