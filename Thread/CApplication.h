// *************************************************************************************************************
//
//  Modul-Name     : CApplication.h
//
//  Copyrights by Hans-Juergen Lange <hjl@simulated-universe.de>. All rights reserved.
//
// *************************************************************************************************************
#pragma once
#ifndef CAPPLICATION_INC
#define CAPPLICATION_INC
//
//  This is the class
class CApplication {
public:
    CApplication() ;
    virtual ~CApplication() ;
    virtual bool InitInstance(const int argc, char* argv[]) ;
    virtual int Run(void) ;
    virtual void ExitInstance(void) ;
public:
    bool Running;
};

#endif  // CAPPLICATION_INC
