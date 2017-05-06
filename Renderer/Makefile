################################################################################################################
##
##  Makefile for render.so
##
##  Copyrights by Hans-Juergen Lange <hjl@simulated-universe.de>. All rights reserved.
##
################################################################################################################
PROJ=render

SRC=\
    CRenderer.cpp\
    CPart.cpp\
    CWorld.cpp

OBJ=\
    CRenderer.o\
    CPart.o\
    CWorld.o

CXXFLAGS+=-std=gnu++0x -fPIC -g


all : $(PROJ)

$(PROJ) : lib$(PROJ).so lib$(PROJ).a

lib$(PROJ).so : $(OBJ)
	g++ -shared $(CXXFLAGS) $(OBJ) -o $@

lib$(PROJ).a : $(OBJ)
	ar cr $@ $(OBJ)

depend : $(SRC)
	g++ $(CXXFLAGS) -M $(SRC) > depend

clean:
	rm -f $(PROJ)
	rm -f depend
	rm -f $(OBJ)

-include depend

