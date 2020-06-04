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

	return 0;
}