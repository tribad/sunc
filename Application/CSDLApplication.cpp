// *************************************************************************************************************
//
//  Modul-Name     : CSDLApplication.cpp
//
//  Copyrights by Hans-Juergen Lange <hjl@simulated-universe.de>. All rights reserved.
//
// *************************************************************************************************************
#include <SDL2/SDL.h>
#include <GL/gl.h>
#include <string>
#include <vector>
#include "../Thread/CApplication.h"
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
        if (MainWindow != 0) {
            GLContext = SDL_GL_CreateContext(MainWindow);
        }
        Renderer.Init();
    }
// End-Of-UDC:AAAAAAFbzUKRnpRtfi0=
    return  (retval);
}

int CSDLApplication::Run(void) {
    int retval = -1;
// User-Defined-Code:AAAAAAFbzULa1ZR7T48=
    Running = true;

    for (;Running;) {
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            switch (event.type) {
            case SDL_AUDIODEVICEADDED:
                break;
            case SDL_AUDIODEVICEREMOVED:
                break;
            case SDL_CONTROLLERAXISMOTION:
                break;
            case SDL_CONTROLLERBUTTONDOWN:
                break;
            case SDL_CONTROLLERBUTTONUP:
                break;
            case SDL_CONTROLLERDEVICEADDED:
                break;
            case SDL_CONTROLLERDEVICEREMOVED:
                break;
            case SDL_CONTROLLERDEVICEREMAPPED:
                break;
            case SDL_DOLLARGESTURE:
                break;
            case SDL_DOLLARRECORD:
                break;
            case SDL_DROPFILE:
                break;
            case SDL_DROPTEXT:
                break;
            case SDL_DROPBEGIN:
                break;
            case SDL_DROPCOMPLETE:
                break;
            case SDL_FINGERMOTION:
                break;
            case SDL_FINGERDOWN:
                break;
            case SDL_FINGERUP:
                break;
            case SDL_KEYDOWN:
                break;
            case SDL_KEYUP:
                if (event.key.keysym.sym == SDLK_ESCAPE) {
                    Running = false;
                }
                break;
            case SDL_MOUSEMOTION:
                break;
            case SDL_MOUSEBUTTONDOWN:
                break;
            case SDL_MOUSEBUTTONUP:
                break;
            case SDL_MOUSEWHEEL:
                break;
            case SDL_JOYAXISMOTION:
                break;
            case SDL_JOYBALLMOTION:
                break;
            case SDL_JOYHATMOTION:
                break;
            case SDL_JOYBUTTONDOWN:
               break;
            case SDL_JOYBUTTONUP:
                break;
            case SDL_JOYDEVICEADDED:
                break;
            case SDL_JOYDEVICEREMOVED:
                break;
            case SDL_MULTIGESTURE:
                break;
            case SDL_QUIT:
                Running = false;
                break;
            case SDL_SYSWMEVENT:
                break;
            case SDL_TEXTEDITING:
            case SDL_TEXTINPUT:

            case SDL_USEREVENT:
                break;
            case SDL_USEREVENT+1:
                break;
            case SDL_USEREVENT+2:
                break;
            case SDL_USEREVENT+3:
                break;
            case SDL_USEREVENT+4:
                break;
            case SDL_USEREVENT+5:
               break;
            case SDL_USEREVENT+6:
                break;
            case SDL_USEREVENT+7:
                break;
            case SDL_WINDOWEVENT:
                break;
            default:
                DefaultEventHandler(&event);
                break;
            }
        }
        Renderer.Draw();
        SDL_GL_SwapWindow(MainWindow);
    }
// End-Of-UDC:AAAAAAFbzULa1ZR7T48=
    return  (retval);
}

void CSDLApplication::ExitInstance(void) {
// User-Defined-Code:AAAAAAFbzUMyvZSJioc=
    SDL_GL_DeleteContext(GLContext);
    SDL_Quit();
// End-Of-UDC:AAAAAAFbzUMyvZSJioc=
}

void CSDLApplication::DefaultEventHandler(const SDL_Event* aEvent) {
// User-Defined-Code:AAAAAAFbzXEFmZWhZJg=
// End-Of-UDC:AAAAAAFbzXEFmZWhZJg=
}

