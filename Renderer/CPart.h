// *************************************************************************************************************
//
//  Modul-Name     : CPart.h
//
//  Copyrights by Hans-Juergen Lange <hjl@simulated-universe.de>. All rights reserved.
//
// *************************************************************************************************************
#pragma once
#ifndef CPART_INC
#define CPART_INC
//
//  This is the class
class CPart : public CMatrix {
public:
    void Draw(void) ;
public:
    std::map<std::string, CShader> VertexShader;
};

#endif  // CPART_INC
