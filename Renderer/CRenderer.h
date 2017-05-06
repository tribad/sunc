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
class CRenderer {
public:
    void Init(void) ;
    void Draw(void) ;
public:
    float*      points;
    GLuint      vbo;
    GLuint      vao;
    std::string vertex_shader;
    std::string fragment_shader;
    GLuint      vs;
    GLuint      fs;
    GLuint      shader_programme;
private:
    CWorld      World;
    CMatrix     Projection;
};

#endif  // CRENDERER_INC
