// *************************************************************************************************************
//
//  Modul-Name     : CRenderer.h
//
//  Copyrights by Hans-Juergen Lange <hjl@simulated-universe.de>. All rights reserved.
//
// *************************************************************************************************************
#pragma once
#ifndef CRENDERER_INC
#define CRENDERER_INC
//
//  List of forwards needed in this module.
class CWorld;
//
//  This is the class
class CRenderer : public CThread {
public:
    bool InitInstance(void) ;
    int Run(void) ;
    void Create(SDL_Window* aWnd) ;
public:
    float*        points;
    GLuint        vbo;
    GLuint        vao;
    std::string   vertex_shader;
    std::string   fragment_shader;
    GLuint        vs;
    GLuint        fs;
    GLuint        shader_programme;
private:
    SDL_GLContext GLContext;
    SDL_Window*   Window;
    CWorld        World;
    CMatrix       Projection;
};

#endif  // CRENDERER_INC
