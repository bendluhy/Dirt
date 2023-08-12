#include "engine.h"
#include <iostream>
#include <test.h>
void Initialize()
{
    // Initialize GLFW
    if (!glfwInit()) {
    }
    // Create a windowed mode window and its OpenGL context
    GLFWwindow* window = glfwCreateWindow(800, 600, "GLFW Sample Program", NULL, NULL);
    if (!window) {
        glfwTerminate();
    }

    // Make the window's context current
    glfwMakeContextCurrent(window);

    // Loop until the user closes the window
    while (!glfwWindowShouldClose(window)) {
        // Render here, e.g., clear the screen
        glClear(GL_COLOR_BUFFER_BIT);

        // Draw a colored triangle
        glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.0f, 0.0f);   // Red
        glVertex2f(-0.6f, -0.4f);
        glColor3f(0.0f, 1.0f, 0.0f);   // Green
        glVertex2f(0.6f, -0.4f);
        glColor3f(0.0f, 0.0f, 1.0f);   // Blue
        glVertex2f(0.0f, 0.6f);
        glEnd();

        // Swap front and back buffers
        glfwSwapBuffers(window);

        // Poll for and process events
        glfwPollEvents();
    }

    // Clean up and exit
    glfwTerminate();
}
