.prl.gst:
	sc NOLINK CODE=F DATA=F OPTI MGST $*.gst $*.prl

.c.o:
	sc NOLINK CODE=F DATA=F OPTI TO $@ $*.c

OBJ = main.o \
reciter.o sam.o render.o debug.o processframes.o createtransitions.o

main.exe: $(OBJ) includes.gst
	sc LINK CODE=F DATA=F OBJ $(OBJ) TO main.exe

includes.gst: includes.prl
main.o: main.c
reciter.o: reciter.c
sam.o: sam.c
render.o: render.c
debug.o: debug.c
processframes.o: processframes.c
createtransitions.o: createtransitions.c