include ../Makefile.inc 

LINUX_EXE = ennerre

EXE = ${LINUX_EXE}

objects = ennerre.o server.o errorlog.o time_and_date.o become_daemon.o std_pthread_MUTEX.o

all : ${EXE}

${EXE}: $(objects)
	${CC} $(objects) -o ${EXE} ${LDLIBS}

ennerre.o: ennerre.c
	${CC} ennerre.c ${CFLAGS} -c -o $@
server.o: server.c ${ennerre_INCL_DIR}/server.h
	${CC} server.c -I${ennerre_INCL_DIR} ${CFLAGS} -c -o $@
errorlog.o: errorlog.c ${ennerre_INCL_DIR}/errorlog.h ${ennerre_INCL_DIR}/time_and_date.h
	${CC} errorlog.c -I${ennerre_INCL_DIR} ${CFLAGS} -c -o $@
time_and_date.o: time_and_date.c ${ennerre_INCL_DIR}/errorlog.h ${ennerre_INCL_DIR}/time_and_date.h
	${CC} time_and_date.c -I${ennerre_INCL_DIR} ${CFLAGS} -c -o $@
become_daemon.o: become_daemon.c ${ennerre_INCL_DIR}/become_daemon.h ${ennerre_INCL_DIR}/errorlog.h
	${CC} become_daemon.c -I${ennerre_INCL_DIR} ${CFLAGS} -c -o $@
std_pthread_MUTEX.o: std_pthread_MUTEX.c ${ennerre_INCL_DIR}/std_pthread_MUTEX.h
	${CC} std_pthread_MUTEX.c -I${ennerre_INCL_DIR} ${CFLAGS} -c -o $@

.PHONY : clean
clean : 
	-${RM} ${EXE} $(objects) *~ .*~

showall :
	@ echo ${EXE}
