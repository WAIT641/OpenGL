#include "Object.h"
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

Object::Object()
{
	
}

void Object::AssignShader(unsigned int Program)
{
	ShaderProgram = Program;
}

void Object::Draw()
{
	//VAO
	glBindVertexArray(VAO);

	//VBO
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	//glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	//EBO
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
	//glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);//location, size(vec3 so 3), type, normalized, stride, pointer
	glEnableVertexAttribArray(0);

	glUseProgram(ShaderProgram);

	glBindVertexArray(VAO);
	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
	glBindVertexArray(0);
}