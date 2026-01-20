# Makefile.inc - common definitions used by all makefiles

CC = gcc
ennerre_DIR = ../
ennerre_INCL_DIR = ${ennerre_DIR}include

CFLAGS = -g \
	   -Wall \
	   -Wno-sign-compare \
	   -Wno-unused-parameter \
	   -Wextra \
	   -DDEBUG    

LDLIBS = -lpthread

RM = rm -f
