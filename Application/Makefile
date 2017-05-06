################################################################################################################
##
##  Makefile for sunc
##
##  Copyrights by Hans-Juergen Lange <hjl@simulated-universe.de>. All rights reserved.
##
################################################################################################################
PROJ=sunc

SRC=\
    main.cpp\
    CSDLApplication.cpp

OBJ=\
    main.o\
    CSDLApplication.o

CXXFLAGS+=-std=c++14 -fPIC -g $(INCLUDEPATH)

STATICLIBS=

DYNLIBS=\
     -lSDL2\
     -lrender\
     -lOpenGL\
     -lthread

LIBPATH=\
     -L../Renderer\
     -L../Thread

INCLUDEPATH=

all : $(PROJ)

$(PROJ) : $(OBJ)
	g++ $(CXXFLAGS) $(LDFLAGS) $(LIBPATH) $(OBJ) -Wl,-Bstatic -Wl,--start-group $(STATICLIBS) -Wl,--end-group -Wl,-Bdynamic -Wl,--start-group $(DYNLIBS) -Wl,--end-group -o $@

depend : $(SRC)
	g++ $(CXXFLAGS) -M $(SRC) > depend

clean:
	rm -f $(PROJ)
	rm -f depend
	rm -f $(OBJ)

-include depend

