include ../Makefile.inc 

LINUX_EXE = ennerre

EXE = ${LINUX_EXE}

objects = ennerre.o become_daemon.o

all : ${EXE}

${EXE}: $(objects)
	${CC} $(objects) -o ${EXE} ${LDLIBS}

ennerre.o: ennerre.c
	${CC} ennerre.c ${CFLAGS} -c -o $@
become_daemon.o: become_daemon.c ${ennerre_INCL_DIR}/become_daemon.h
	${CC} become_daemon.c -I${ennerre_INCL_DIR} ${CFLAGS} -c -o $@

.PHONY : clean
clean : 
	-${RM} ${EXE} $(objects) *~ .*~

showall :
	@ echo ${EXE}
