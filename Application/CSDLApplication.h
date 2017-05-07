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
class CRenderer;
//
//  This is the class
class CSDLApplication : public CApplication {
public:
    bool InitInstance(const int argc, char* argv[]) ;
    int Run(void) ;
    void ExitInstance(void) ;
    void DefaultEventHandler(const SDL_Event* aEvent) ;
    void OnAudioDeviceAdd(SDL_Event* aEvent) ;
    void OnAudioDeviceRemove(SDL_Event* aEvent) ;
    void OnControllerAxisMotion(SDL_Event* aEvent) ;
    void OnControllerButtonDown(SDL_Event* aEvent) ;
    void OnControllerButtonUp(SDL_Event* aEvent) ;
    void OnControllerDeviceAdd(SDL_Event* aEvent) ;
    void OnControllerDeviceRemove(SDL_Event* aEvent) ;
    void OnControllerDeviceRemap(SDL_Event* aEvent) ;
    void OnDollarGesture(SDL_Event* aEvent) ;
    void OnDollarRecord(SDL_Event* aEvent) ;
    void OnDropFile(SDL_Event* aEvent) ;
    void OnDropText(SDL_Event* aEvent) ;
    void OnDropBegin(SDL_Event* aEvent) ;
    void OnDropComplete(SDL_Event* aEvent) ;
    void OnFingerMotion(SDL_Event* aEvent) ;
    void OnFingerDown(SDL_Event* aEvent) ;
    void OnFingerUp(SDL_Event* aEvent) ;
    void OnKeyDown(SDL_Event* aEvent) ;
    void OnKeyUp(SDL_Event* aEvent) ;
    void OnMouseMotion(SDL_Event* aEvent) ;
    void OnMouseButtonDown(SDL_Event* aEvent) ;
    void OnMouseButtonUp(SDL_Event* aEvent) ;
    void OnMouseWheel(SDL_Event* aEvent) ;
    void OnJoyAxisMotion(SDL_Event* aEvent) ;
    void OnJoyBallMotion(SDL_Event* aEvent) ;
    void OnJoyHatMotion(SDL_Event* aEvent) ;
    void OnJoyButtonDown(SDL_Event* aEvent) ;
    void OnJoyButtonUp(SDL_Event* aEvent) ;
    void OnJoyDeviceAdd(SDL_Event* aEvent) ;
    void OnJoyDeviceRemove(SDL_Event* aEvent) ;
    void OnMultiGesture(SDL_Event* aEvent) ;
    void OnQuit(SDL_Event* aEvent) ;
    void OnSysWMEvent(SDL_Event* aEvent) ;
    void OnTextEditing(SDL_Event* aEvent) ;
    void OnTextInput(SDL_Event* aEvent) ;
    void OnUserEvent(SDL_Event* aEvent) ;
    void OnUserEvent1(SDL_Event* aEvent) ;
    void OnUserEvent2(SDL_Event* aEvent) ;
    void OnUserEvent3(SDL_Event* aEvent) ;
    void OnUserEvent4(SDL_Event* aEvent) ;
    void OnUserEvent5(SDL_Event* aEvent) ;
    void OnUserEvent6(SDL_Event* aEvent) ;
    void OnUserEvent7(SDL_Event* aEvent) ;
    void OnWindowEvent(SDL_Event* aEvent) ;
private:
    SDL_Window*  MainWindow;
    unsigned int Debug;
    CRenderer    Renderer;
};

#endif  // CSDLAPPLICATION_INC
