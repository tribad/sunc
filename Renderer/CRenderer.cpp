// *************************************************************************************************************
//
//  Modul-Name     : CRenderer.cpp
//
//  Copyrights by Hans-Juergen Lange <hjl@simulated-universe.de>. All rights reserved.
//
// *************************************************************************************************************
#include <pthread.h>
#include <SDL2/SDL.h>
#include <GL/gl.h>
#include <string>
#include <vector>
#include <GL/glext.h>
#include "../Thread/CThread.h"
#include "../GrMath/CMatrix.h"
#include "CPart.h"
#include "CWorld.h"
#include "CRenderer.h"
// Optional
bool CRenderer::InitInstance(void) {
    bool retval = true;
// User-Defined-Code:AAAAAAFb3aPrawTtPyE=
    points = new float [9];
    points[0] = 0.0f;
    points[1] = 0.5f;
    points[2] = 0.0f;
    points[3] = 0.5f;
    points[4] = -0.5f;
    points[5] = 0.0f;
    points[6] = -0.5f;
    points[7] = -0.5f;
    points[8] = 0.0f;

    if (Window != 0) {
        GLContext = SDL_GL_CreateContext(Window);
    }

    vbo = 0;
    glGenBuffers(1, &vbo);
    glBindBuffer(GL_ARRAY_BUFFER, vbo);
    glBufferData(GL_ARRAY_BUFFER, 9 * sizeof(float), points, GL_STATIC_DRAW);

    vao = 0;
    glGenVertexArrays(1, &vao);
    glBindVertexArray(vao);
    glEnableVertexAttribArray(0);
    glBindBuffer(GL_ARRAY_BUFFER, vbo);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, NULL);

    vertex_shader = "#version 400\n"
                    "in vec3 vp;"
                    "void main() {"
                    "  gl_Position = vec4(vp, 1.0);"
                    "}";

    fragment_shader = "#version 400\n"
                      "out vec4 frag_colour;"
                      "void main() {"
                      "  frag_colour = vec4(0.5, 0.0, 0.5, 1.0);"
                      "}";

    vs = glCreateShader(GL_VERTEX_SHADER);
    const char* vss = vertex_shader.c_str();
    glShaderSource(vs, 1, &vss, NULL);
    glCompileShader(vs);
    fs = glCreateShader(GL_FRAGMENT_SHADER);
    const char* fss=fragment_shader.c_str();
    glShaderSource(fs, 1, &fss, NULL);
    glCompileShader(fs);


    shader_programme = glCreateProgram();
    glAttachShader(shader_programme, fs);
    glAttachShader(shader_programme, vs);
    glLinkProgram(shader_programme);

// End-Of-UDC:AAAAAAFb3aPrawTtPyE=
    return  (retval);
}

int CRenderer::Run(void) {
    int retval = 0;
// User-Defined-Code:AAAAAAFb3aQYswUYq6c=
    for (;;) {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glUseProgram(shader_programme);
        glBindVertexArray(vao);
        // draw points 0-3 from the currently bound VAO with current in-use shader
        glDrawArrays(GL_TRIANGLES, 0, 3);
        SDL_GL_SwapWindow(Window);
    }
// End-Of-UDC:AAAAAAFb3aQYswUYq6c=
    return  (retval);
}

void CRenderer::Create(SDL_Window* aWnd) {
// User-Defined-Code:AAAAAAFb4eVaoKAAllA=
    Window = aWnd;
    CThread::Create();
// End-Of-UDC:AAAAAAFb4eVaoKAAllA=
}

