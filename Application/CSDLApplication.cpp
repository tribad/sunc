// *************************************************************************************************************
//
//  Modul-Name     : CSDLApplication.cpp
//
//  Copyrights by Hans-Juergen Lange <hjl@simulated-universe.de>. All rights reserved.
//
// *************************************************************************************************************
#include <SDL2/SDL.h>
#include <pthread.h>
#include <GL/gl.h>
#include <string>
#include <vector>
#include <GL/glext.h>
#include "../Thread/CApplication.h"
#include "../Thread/CThread.h"
#include "../GrMath/CMatrix.h"
#include "../Renderer/CPart.h"
#include "../Renderer/CWorld.h"
#include "../Renderer/CRenderer.h"
#include "CSDLApplication.h"
// Optional
#include "main.h"
bool CSDLApplication::InitInstance(const int argc, char* argv[]) {
    bool retval = false;
// User-Defined-Code:AAAAAAFbzUKRnpRtfi0=
    retval = (SDL_Init(SDL_INIT_VIDEO) == 0);

    if (retval) {
        SDL_DisplayMode dm;
        SDL_GetDesktopDisplayMode(0, &dm);

        MainWindow = SDL_CreateWindow(
            "Simulated-Universe Native Client Example",                  // window title
            SDL_WINDOWPOS_UNDEFINED,           // initial x position
            SDL_WINDOWPOS_UNDEFINED,           // initial y position
            dm.w,                               // width, in pixels
            dm.h,                               // height, in pixels
            SDL_WINDOW_OPENGL | SDL_WINDOW_FULLSCREEN                 // flags - see below
        );
        Renderer.Create(MainWindow);
    }
// End-Of-UDC:AAAAAAFbzUKRnpRtfi0=
    return  (retval);
}

int CSDLApplication::Run(void) {
    int retval = -1;
// User-Defined-Code:AAAAAAFbzULa1ZR7T48=
    Running = true;

    SDL_Event event;
    while ((Running) && (SDL_WaitEvent(&event))) {
        switch (event.type) {
        case SDL_AUDIODEVICEADDED:
            OnAudioDeviceAdd(&event);
            break;
        case SDL_AUDIODEVICEREMOVED:
            OnAudioDeviceRemove(&event);
            break;
        case SDL_CONTROLLERAXISMOTION:
            OnControllerAxisMotion(&event);
            break;
        case SDL_CONTROLLERBUTTONDOWN:
            OnControllerButtonDown(&event);
            break;
        case SDL_CONTROLLERBUTTONUP:
            OnControllerButtonUp(&event);
            break;
        case SDL_CONTROLLERDEVICEADDED:
            OnControllerDeviceAdd(&event);
            break;
        case SDL_CONTROLLERDEVICEREMOVED:
            OnControllerDeviceRemove(&event);
            break;
        case SDL_CONTROLLERDEVICEREMAPPED:
            OnControllerDeviceRemap(&event);
            break;
        case SDL_DOLLARGESTURE:
            OnDollarGesture(&event);
            break;
        case SDL_DOLLARRECORD:
            OnDollarRecord(&event);
            break;
        case SDL_DROPFILE:
            OnDropFile(&event);
            break;
        case SDL_DROPTEXT:
            OnDropText(&event);
            break;
        case SDL_DROPBEGIN:
            OnDropBegin(&event);
            break;
        case SDL_DROPCOMPLETE:
            OnDropComplete(&event);
            break;
        case SDL_FINGERMOTION:
            OnFingerMotion(&event);
            break;
        case SDL_FINGERDOWN:
            OnFingerDown(&event);
            break;
        case SDL_FINGERUP:
            OnFingerUp(&event);
            break;
        case SDL_KEYDOWN:
            OnKeyDown(&event);
            break;
        case SDL_KEYUP:
            OnKeyUp(&event);
            if (event.key.keysym.sym == SDLK_ESCAPE) {
                Running = false;
            }
            break;
        case SDL_MOUSEMOTION:
            OnMouseMotion(&event);
            break;
        case SDL_MOUSEBUTTONDOWN:
            OnMouseButtonDown(&event);
            break;
        case SDL_MOUSEBUTTONUP:
            OnMouseButtonUp(&event);
            break;
        case SDL_MOUSEWHEEL:
            OnMouseWheel(&event);
            break;
        case SDL_JOYAXISMOTION:
            OnJoyAxisMotion(&event);
            break;
        case SDL_JOYBALLMOTION:
            OnJoyBallMotion(&event);
            break;
        case SDL_JOYHATMOTION:
            OnJoyHatMotion(&event);
            break;
        case SDL_JOYBUTTONDOWN:
            OnJoyButtonDown(&event);
           break;
        case SDL_JOYBUTTONUP:
            OnJoyButtonUp(&event);
            break;
        case SDL_JOYDEVICEADDED:
            OnJoyDeviceAdd(&event);
            break;
        case SDL_JOYDEVICEREMOVED:
            OnJoyDeviceRemove(&event);
            break;
        case SDL_MULTIGESTURE:
            OnMultiGesture(&event);
            break;
        case SDL_QUIT:
            OnQuit(&event);
            Running = false;
            break;
        case SDL_SYSWMEVENT:
            OnSysWMEvent(&event);
            break;
        case SDL_TEXTEDITING:
            OnTextEditing(&event);
            break;
        case SDL_TEXTINPUT:
            OnTextInput(&event);
            break;
        case SDL_USEREVENT:
            OnUserEvent(&event);
            break;
        case SDL_USEREVENT+1:
            OnUserEvent1(&event);
            break;
        case SDL_USEREVENT+2:
            OnUserEvent2(&event);
            break;
        case SDL_USEREVENT+3:
            OnUserEvent3(&event);
            break;
        case SDL_USEREVENT+4:
            OnUserEvent4(&event);
            break;
        case SDL_USEREVENT+5:
            OnUserEvent5(&event);
           break;
        case SDL_USEREVENT+6:
            OnUserEvent6(&event);
            break;
        case SDL_USEREVENT+7:
            OnUserEvent7(&event);
            break;
        case SDL_WINDOWEVENT:
            OnWindowEvent(&event);
            break;
        default:
            DefaultEventHandler(&event);
            break;
        }
    }
// End-Of-UDC:AAAAAAFbzULa1ZR7T48=
    return  (retval);
}

void CSDLApplication::ExitInstance(void) {
// User-Defined-Code:AAAAAAFbzUMyvZSJioc=
    SDL_Quit();
// End-Of-UDC:AAAAAAFbzUMyvZSJioc=
}

void CSDLApplication::DefaultEventHandler(const SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFbzXEFmZWhZJg=
// End-Of-UDC:AAAAAAFbzXEFmZWhZJg=
}

void CSDLApplication::OnAudioDeviceAdd(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4fn+k6FY97c=
// End-Of-UDC:AAAAAAFb4fn+k6FY97c=
}

void CSDLApplication::OnAudioDeviceRemove(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4frqZGjPLWQ=
// End-Of-UDC:AAAAAAFb4frqZGjPLWQ=
}

void CSDLApplication::OnControllerAxisMotion(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4fr52mjRIAY=
// End-Of-UDC:AAAAAAFb4fr52mjRIAY=
}

void CSDLApplication::OnControllerButtonDown(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4fsELGjTaEg=
// End-Of-UDC:AAAAAAFb4fsELGjTaEg=
}

void CSDLApplication::OnControllerButtonUp(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4fsMlmjVCnU=
// End-Of-UDC:AAAAAAFb4fsMlmjVCnU=
}

void CSDLApplication::OnControllerDeviceAdd(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4fsSQGjXCps=
// End-Of-UDC:AAAAAAFb4fsSQGjXCps=
}

void CSDLApplication::OnControllerDeviceRemove(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4fsYZ2jZZKg=
// End-Of-UDC:AAAAAAFb4fsYZ2jZZKg=
}

void CSDLApplication::OnControllerDeviceRemap(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4fsrhWjblq4=
// End-Of-UDC:AAAAAAFb4fsrhWjblq4=
}

void CSDLApplication::OnDollarGesture(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4fswxWjd+lM=
// End-Of-UDC:AAAAAAFb4fswxWjd+lM=
}

void CSDLApplication::OnDollarRecord(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4fs1Q2jfrPM=
// End-Of-UDC:AAAAAAFb4fs1Q2jfrPM=
}

void CSDLApplication::OnDropFile(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4fs5NGjhaAc=
// End-Of-UDC:AAAAAAFb4fs5NGjhaAc=
}

void CSDLApplication::OnDropText(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4fs8tWjjll0=
// End-Of-UDC:AAAAAAFb4fs8tWjjll0=
}

void CSDLApplication::OnDropBegin(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4ftAGmjlUFI=
// End-Of-UDC:AAAAAAFb4ftAGmjlUFI=
}

void CSDLApplication::OnDropComplete(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4ftDt2jnce8=
// End-Of-UDC:AAAAAAFb4ftDt2jnce8=
}

void CSDLApplication::OnFingerMotion(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4ftHC2jpwGY=
// End-Of-UDC:AAAAAAFb4ftHC2jpwGY=
}

void CSDLApplication::OnFingerDown(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4ftKxmjrkXU=
// End-Of-UDC:AAAAAAFb4ftKxmjrkXU=
}

void CSDLApplication::OnFingerUp(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4ftOVmjtZtA=
// End-Of-UDC:AAAAAAFb4ftOVmjtZtA=
}

void CSDLApplication::OnKeyDown(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4ftRcWjvwlo=
// End-Of-UDC:AAAAAAFb4ftRcWjvwlo=
}

void CSDLApplication::OnKeyUp(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4ftUo2jxE4I=
// End-Of-UDC:AAAAAAFb4ftUo2jxE4I=
}

void CSDLApplication::OnMouseMotion(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4ftX3mjzfzw=
// End-Of-UDC:AAAAAAFb4ftX3mjzfzw=
}

void CSDLApplication::OnMouseButtonDown(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4ftbAGj13v0=
// End-Of-UDC:AAAAAAFb4ftbAGj13v0=
}

void CSDLApplication::OnMouseButtonUp(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4fteGGj3KbA=
// End-Of-UDC:AAAAAAFb4fteGGj3KbA=
}

void CSDLApplication::OnMouseWheel(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4fthXWj5e0k=
// End-Of-UDC:AAAAAAFb4fthXWj5e0k=
}

void CSDLApplication::OnJoyAxisMotion(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4ftlbGj7uH4=
// End-Of-UDC:AAAAAAFb4ftlbGj7uH4=
}

void CSDLApplication::OnJoyBallMotion(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4ftpgmj9X50=
// End-Of-UDC:AAAAAAFb4ftpgmj9X50=
}

void CSDLApplication::OnJoyHatMotion(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4fttVWj/7Ic=
// End-Of-UDC:AAAAAAFb4fttVWj/7Ic=
}

void CSDLApplication::OnJoyButtonDown(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4ftxA2kBRGo=
// End-Of-UDC:AAAAAAFb4ftxA2kBRGo=
}

void CSDLApplication::OnJoyButtonUp(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4ft07GkDFFc=
// End-Of-UDC:AAAAAAFb4ft07GkDFFc=
}

void CSDLApplication::OnJoyDeviceAdd(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4ft88WkFYSA=
// End-Of-UDC:AAAAAAFb4ft88WkFYSA=
}

void CSDLApplication::OnJoyDeviceRemove(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4fuAYGkHBQ8=
// End-Of-UDC:AAAAAAFb4fuAYGkHBQ8=
}

void CSDLApplication::OnMultiGesture(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4fuEqGkJoJg=
// End-Of-UDC:AAAAAAFb4fuEqGkJoJg=
}

void CSDLApplication::OnQuit(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4fuIjmkLqfU=
// End-Of-UDC:AAAAAAFb4fuIjmkLqfU=
}

void CSDLApplication::OnSysWMEvent(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4fuMOWkNavM=
// End-Of-UDC:AAAAAAFb4fuMOWkNavM=
}

void CSDLApplication::OnTextEditing(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4fuP4mkPb60=
// End-Of-UDC:AAAAAAFb4fuP4mkPb60=
}

void CSDLApplication::OnTextInput(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4fuTemkReLE=
// End-Of-UDC:AAAAAAFb4fuTemkReLE=
}

void CSDLApplication::OnUserEvent(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4fuXUmkTBTo=
// End-Of-UDC:AAAAAAFb4fuXUmkTBTo=
}

void CSDLApplication::OnUserEvent1(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4fublmkVMxg=
// End-Of-UDC:AAAAAAFb4fublmkVMxg=
}

void CSDLApplication::OnUserEvent2(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4fugAmkXD5Y=
// End-Of-UDC:AAAAAAFb4fugAmkXD5Y=
}

void CSDLApplication::OnUserEvent3(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4fukqmkZutY=
// End-Of-UDC:AAAAAAFb4fukqmkZutY=
}

void CSDLApplication::OnUserEvent4(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4fuwBWkb+aY=
// End-Of-UDC:AAAAAAFb4fuwBWkb+aY=
}

void CSDLApplication::OnUserEvent5(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4fu2ZGkdp84=
// End-Of-UDC:AAAAAAFb4fu2ZGkdp84=
}

void CSDLApplication::OnUserEvent6(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4fu6BmkfW70=
// End-Of-UDC:AAAAAAFb4fu6BmkfW70=
}

void CSDLApplication::OnUserEvent7(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4fu+Dmkhe7o=
// End-Of-UDC:AAAAAAFb4fu+Dmkhe7o=
}

void CSDLApplication::OnWindowEvent(SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFb4fvCfmkjito=
// End-Of-UDC:AAAAAAFb4fvCfmkjito=
}

