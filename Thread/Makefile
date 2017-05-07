################################################################################################################
##
##  Makefile for thread.so
##
##  Copyrights by Hans-Juergen Lange <hjl@simulated-universe.de>. All rights reserved.
##
################################################################################################################
PROJ=thread

SRC=\
    CApplication.cpp\
    CThread.cpp

OBJ=\
    CApplication.o\
    CThread.o

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

