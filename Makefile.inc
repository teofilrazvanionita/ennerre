# Makefile.inc - common definitions used by all makefiles

CC = gcc
ennerre_DIR = ../
ennerre_INCL_DIR = ${ennerre_DIR}include

CFLAGS = -g \
	   -Wall \
	   -I/usr/include/nacl \
	   -Wno-sign-compare \
	   -Wno-unused-parameter \
	   -Wextra \
	   -DDEBUG    

LDLIBS = -lpthread -lnacl

RM = rm -f
