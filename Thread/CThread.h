// *************************************************************************************************************
//
//  Modul-Name     : CThread.h
//
//  Copyrights by Hans-Juergen Lange <hjl@simulated-universe.de>. All rights reserved.
//
// *************************************************************************************************************
#pragma once
#ifndef CTHREAD_INC
#define CTHREAD_INC
//
//  This is the class
class CThread {
public:
    CThread() ;
    virtual ~CThread() ;
    void Create(void) ;
    virtual bool InitInstance(void) ;
    virtual int Run(void) ;
    virtual void ExitInstance(void) ;
public:
    static int Count;
protected:
    pthread_t  Id;
};
//
//  These are the operations defined with package scope.
void* startfnc(void* ptr) ;

#endif  // CTHREAD_INC
