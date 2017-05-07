// *************************************************************************************************************
//
//  Modul-Name     : main.cpp
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
#include "main.h"
// Optional
CSDLApplication* sunc;
int main(int argc, char* argv[]) {
    int retval = 0;
// User-Defined-Code:AAAAAAFbyQJnYMG55BA=
    sunc = new CSDLApplication;

    if (sunc->InitInstance(argc, argv)) {
        retval = sunc->Run();

        sunc->ExitInstance();
    }

// End-Of-UDC:AAAAAAFbyQJnYMG55BA=
    return  (retval);
}

