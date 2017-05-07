// *************************************************************************************************************
//
//  Modul-Name     : CThread.cpp
//
//  Copyrights by Hans-Juergen Lange <hjl@simulated-universe.de>. All rights reserved.
//
// *************************************************************************************************************
#include <pthread.h>
#include "CThread.h"
// Optional
int CThread::Count;
void* startfnc(void* ptr) {
    void* retval = 0;
// User-Defined-Code:AAAAAAFb4cTmz51FngE=
    CThread *lpThread;

    lpThread=((CThread *)(ptr));
    if (lpThread->InitInstance()!=0) {
        CThread::Count++;
        retval = (void*)((long)((CThread *)(ptr))->Run());
        lpThread->ExitInstance();

        CThread::Count--;
        pthread_exit(retval);
    } else {
    }
// End-Of-UDC:AAAAAAFb4cTmz51FngE=
    return  (retval);
}

CThread::CThread()  {
// User-Defined-Code:AAAAAAFb4ZvO550IH7A=
    Id=0;
// End-Of-UDC:AAAAAAFb4ZvO550IH7A=
}

CThread::~CThread()  {
// User-Defined-Code:AAAAAAFb4ZwEt50PbrM=
// End-Of-UDC:AAAAAAFb4ZwEt50PbrM=
}

void CThread::Create(void) {
// User-Defined-Code:AAAAAAFb4ZxJU50XPNg=
    pthread_attr_t attr;

    pthread_attr_init(&attr);
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);
    pthread_create(&Id, &attr, startfnc, (void *)(this));
// End-Of-UDC:AAAAAAFb4ZxJU50XPNg=
}

bool CThread::InitInstance(void) {
    bool retval = true;
// User-Defined-Code:AAAAAAFb4ZxzzZ0erIU=
// End-Of-UDC:AAAAAAFb4ZxzzZ0erIU=
    return  (retval);
}

int CThread::Run(void) {
    int retval = 0;
// User-Defined-Code:AAAAAAFb4Z1Zq50uXwo=
    return (-1);
// End-Of-UDC:AAAAAAFb4Z1Zq50uXwo=
    return  (retval);
}

void CThread::ExitInstance(void) {
// User-Defined-Code:AAAAAAFb4Z2EA502IPI=
// End-Of-UDC:AAAAAAFb4Z2EA502IPI=
}

