// *************************************************************************************************************
//
//  Modul-Name     : CWorld.h
//
//  Copyrights by Hans-Juergen Lange <hjl@simulated-universe.de>. All rights reserved.
//
// *************************************************************************************************************
#pragma once
#ifndef CWORLD_INC
#define CWORLD_INC
//
//  List of forwards needed in this module.
class CPart;
//
//  This is the class
class CWorld : public CMatrix {
public:
    void Draw(void) ;
public:
    std::vector<CPart*> Part;
};

#endif  // CWORLD_INC
