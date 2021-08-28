a.exe:projecttest.o server.o 
	gcc projecttest.o server.o
projecttest.o:projecttest.c func.h
	gcc -c projecttest.c 
server.o:server.c func.h
	gcc -c server.c 