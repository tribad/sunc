// *************************************************************************************************************
//
//  Modul-Name     : CSDLApplication.h
//
//  Copyrights by Hans-Juergen Lange <hjl@simulated-universe.de>. All rights reserved.
//
// *************************************************************************************************************
// HOC *********************************************************************************************************
//          |         |
// YYYYMMDD | Creator | description
//--------------------------------------------------------------------------------------------------------------
//          |         |
//----------+---------+-----------------------------------------------------------------------------------------
//          |         |
// HOC end *****************************************************************************************************
#pragma once
#ifndef CSDLAPPLICATION_INC
#define CSDLAPPLICATION_INC
//
//  This is the class
class CSDLApplication : public CApplication {
public:
    bool InitInstance(const int argc, char* argv[]) ;
    int Run(void) ;
    void ExitInstance(void) ;
    void DefaultEventHandler(const SDL_Event* aEvent) ;
};

#endif  // CSDLAPPLICATION_INC
