.prl.gst:
	sc NOLINK CODE=F DATA=F OPTI MGST $*.gst $*.prl

.c.o:
	sc NOLINK CODE=F DATA=F OPTI TO $@ $*.c

OBJ = main.o \
reciter.o sam.o render.o debug.o processframes.o createtransitions.o easysound.o

main.exe: $(OBJ) includes.gst
	sc LINK CODE=F DATA=F OBJ $(OBJ) TO main.exe

includes.gst: includes.prl
main.o: main.c debug.h easysound.h reciter.h ReciterTabs.h render.h RenderTabs.h sam.h SamTabs.h
reciter.o: reciter.c
sam.o: sam.c
render.o: render.c
debug.o: debug.c
processframes.o: processframes.c
createtransitions.o: createtransitions.c
easysound.o: easysound.c