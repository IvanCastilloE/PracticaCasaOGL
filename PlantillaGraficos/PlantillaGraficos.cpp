// PlantillaGraficos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

using namespace std;


void dibujarTecho() {
	//Establecemos el tipo de primitiva
	glBegin(GL_TRIANGLES);
	//Establecemos el color
	glColor3f(1.0f, 0.5f, 0.0f);
	//Envíar vértices
	glVertex3f(0.9f, 0.5f, 0.0f);
	glVertex3f(-0.4f, 0.5f, 0.0f);
	glVertex3f(0.25f, 0.9f, 0.0f);


	//Especificar que dejaremos de dibujar
	glEnd();
}
void dibujarMarcoVentanaInt() {
	glBegin(GL_LINES);
	glColor3f(1.0f, 0.4f, 0.6f);
	glVertex3f(0.45f, 0.3f, 0.0f);
	glVertex3f(0.45f, 0.0f, 0.0f);
	glVertex3f(0.30f, 0.15f, 0.0f);
	glVertex3f(0.60f, 0.15f, 0.0f);

	glEnd();
}
void dibujarSol() {
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.96f, 0.21f);
	for (double i = 0; i < 360; i+=0.5) {
		glVertex3f(0.2*cos(i * 3.1416 / 180)-0.8, 0.2*sin(i * 3.1416 / 180)+0.8, 0.0f);
	}
	glEnd();
}
void dibujaVentana() {
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.0f, 0.5f, 0.7f);
	glVertex3f(0.30f, 0.0f, 0.0f);
	glVertex3f(0.6f, 0.0f, 0.0f);
	glVertex3f(0.6f, 0.3f, 0.0f);
	glVertex3f(0.30f, 0.3f, 0.0f);
	glVertex3f(0.30f, 0.0f, 0.0f);
	glEnd();

}

void dibujarMarcoventana() {
	glBegin(GL_LINE_STRIP);
	glColor3f(0.5f, 0.5f, 0.0f);
	glVertex3f(0.30f, 0.0f, 0.0f);
	glVertex3f(0.6f, 0.0f, 0.0f);
	glVertex3f(0.6f, 0.3f, 0.0f);
	glVertex3f(0.30f, 0.3f, 0.0f);
	glVertex3f(0.30f, 0.0f, 0.0f);
	glEnd();
}

void dibujarCasa() {
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.7f, 0.5f, 0.2f);
	glVertex3f(-0.2f, -0.5f, 0.0f);
	glVertex3f(0.7f, -0.5f, 0.0f);
	glVertex3f(-0.2f, 0.5f, 0.0f);
	glVertex3f(0.7f, 0.5f, 0.0f);
	glEnd();
}
void dibujarCesped() {
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.0f, 1.0, 0.0f);
	glVertex3f(-1.0f, -0.3, 0.0f);
	glVertex3f(-1.0f, -1.0, 0.0f);
	glVertex3f(1.0f, -0.3, 0.0f);
	glVertex3f(1.0f, -1.0, 0.0f);
	glEnd();

}
void dibujarPuerta() {
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.0f, 0.5f, 0.5f);

	glVertex3f(0.1f, -0.5f, 0.0f);
	glVertex3f(0.4f, -0.5f, 0.0f);
	glVertex3f(0.4f, -0.1f, 0.0f);
	glVertex3f(0.1f, -0.1f, 0.0f);
	glVertex3f(0.1f, -0.5f, 0.0f);
	glEnd();
}
void dibujarPomo() {
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.96f, 0.21f);
	for (double i = 0; i < 360; i += 0.5) {
		glVertex3f(0.01 * cos(i * 3.1416 / 180) + 0.35, 0.01 * sin(i * 3.1416 / 180) - 0.3, 0.0f);
	}
	glEnd();

}
void dibujarTronco() {
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.7f, 0.5f, 0.2f);
	glVertex3f(-0.8f, -0.52f, 0.0f);
	glVertex3f(-0.6f, -0.52f, 0.0f);
	glVertex3f(-0.6f, -0.08f, 0.0f);
	glVertex3f(-0.8f, -0.08f, 0.0f);
	glVertex3f(-0.8f, -0.52f, 0.0f);

	glEnd();

}
void dibujarHojas() {
	glBegin(GL_POLYGON);
	glColor3f(0.1f, 1.0f, 0.1f);
	for (double i = 0; i < 360; i += 0.5) {
		glVertex3f(0.25 * cos(i * 3.1416 / 180) - 0.7, 0.15 * sin(i * 3.1416 / 180) - 0.0, 0.0f);
	}
	for (double i = 0; i < 360; i += 0.5) {
		glVertex3f(0.25 * cos(i * 3.1416 / 180) - 0.7, 0.15 * sin(i * 3.1416 / 180) + 0.2, 0.0f);
	}
	for (double i = 0; i < 360; i += 0.5) {
		glVertex3f(0.25 * cos(i * 3.1416 / 180) - 0.7, 0.15 * sin(i * 3.1416 / 180) + 0.4, 0.0f);
	}
	glEnd();
}
void dibujarRayosSol() {
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0f, 0.96f, 0.21f);
	glVertex3f(-0.7f, 1.0f, 0.0f);
	glVertex3f(-0.6f,1.0f,0.0f);
	glVertex3f(-0.7f, 0.9f, 0.0f);
	glVertex3f(-0.7f, 0.8f, 0.0f);
	glVertex3f(-0.5f, 0.6f, 0.0f);


	glEnd();
}

void dibujar() {
	dibujarTecho();
	dibujarCesped();
	dibujarTronco();
	dibujarHojas();
	dibujarCasa();
	dibujarMarcoventana();
	dibujaVentana();

	dibujarPuerta();
	dibujarPomo();
	dibujarMarcoVentanaInt();
	dibujarSol();
	dibujarRayosSol();

}

int main()
{
	//Declarar una ventana
	GLFWwindow* window;

	//Si no se pudo iniciar GLFW
	//Terminamos la ejecución
	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}
	//Si se pudo iniciar GLFW
	//Inicializamos la ventana
	window = glfwCreateWindow(600, 600, "Ventana", NULL, NULL);

	//Si no se pudo crear la ventana
	//Terminamos la ejecución
	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	//Establecemos la ventana como contexto

	glfwMakeContextCurrent(window);

	//una vez establecido el contexto
	//se activan las funciones "modernas" (gpu)
	glewExperimental = true;

	GLenum errores = glewInit();
	if (errores != GLEW_OK) {
		glewGetErrorString(errores);
	}

	const GLubyte* versionGL = glGetString(GL_VERSION);
	cout << "Version OpenGL: " << versionGL;




	//Ciclo de dibujo (DrawLoop)
	while (!glfwWindowShouldClose(window)) {

		//Establecer región de dibujo
		glViewport(00, 0, 600, 600);
		//Establecemos el color de borrado
		//Valores RGBA
		glClearColor(0, 0.8, 1.0, 1);
		//Borrar
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//Actualizar valores y dibujar
		dibujar();
		glfwPollEvents();
		glfwSwapBuffers(window);

	}
	//Después del ciclo de dibujo
	//Eliminamos ventana y procesos de GLFW
	glfwDestroyWindow(window);
	glfwTerminate();

}