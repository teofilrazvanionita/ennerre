include ../Makefile.inc 

LINUX_EXE = ennerre

EXE = ${LINUX_EXE}

objects = ennerre.o

all : ${EXE}

${EXE}: $(objects)
	${CC} $(objects) -o ${EXE} ${LDLIBS}

ennerre.o: ennerre.c
	${CC} ennerre.c ${CFLAGS} -c -o $@

.PHONY : clean
clean : 
	-${RM} ${EXE} $(objects) *~ .*~

showall :
	@ echo ${EXE}
