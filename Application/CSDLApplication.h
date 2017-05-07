// *************************************************************************************************************
//
//  Modul-Name     : CSDLApplication.h
//
//  Copyrights by Hans-Juergen Lange <hjl@simulated-universe.de>. All rights reserved.
//
// *************************************************************************************************************
#pragma once
#ifndef CSDLAPPLICATION_INC
#define CSDLAPPLICATION_INC
//
//  List of forwards needed in this module.
class CWorld;
class CRenderer;
//
//  This is the class
class CSDLApplication : public CApplication {
public:
    bool InitInstance(const int argc, char* argv[]) ;
    int Run(void) ;
    void ExitInstance(void) ;
    void DefaultEventHandler(const SDL_Event* aEvent) ;
private:
    SDL_Window* MainWindow;
    CRenderer   Renderer;
};

#endif  // CSDLAPPLICATION_INC
