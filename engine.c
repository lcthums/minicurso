#include "engine.h"

bool initOpenGL() {
	glewExperimental = GL_TRUE;
	GLenum status = glewInit();

	if (status != GLEW_OK) {
		//fprintf(stderr, "Error: failed to initialize OpenGL\n%s\n",glewGetErrorString(status));
		return false;
	}

	//printf("%s\n",glGetString(GL_VERSION));

	return true;
}