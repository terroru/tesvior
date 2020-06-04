#include "libs.h"

int main()
{

	glfwInit();

	//create window

	

	glewExperimental = GL_TRUE;

	if (glewInit() != GLEW_OK)
		std::cout << "nie dziala" << "\n";
	else
		std::cout << "umiem kodzic" << "\n";

	//GLFWwindow* window = glfwCreateWindow();

	// I love you Ania <3

	return 0;
}