CC=gcc
AR=ar
CLEANCMD=rm -rf
INSTALLCMD=mv
COPYCMD=cp -rf
CFLAGS=-Wall 
INCPATH=../include
SRCPATH=.
HFILES=$(INCPATH)/csimple.h
CFILES=$(SRCPATH)/csimple.c
OBJFILES=csimple.o
LIBNAME=libcsimple.a
LIBSPATH=/usr/lib
INCSPATH=/usr/include

$(LIBNAME)	:	$(OBJFILES)
	ar -cvq $(LIBNAME) $(OBJFILES)
$(OBJFILES)	: 	$(CFILES)
	$(CC) -c $(CFILES) $(CFILES) -I$(INCPATH)
clean		:
	$(CLEANCMD) $(OBJFILES)
install		:
	$(INSTALLCMD) $(LIBNAME) $(LIBSPATH)
	$(COPYCMD) $(HFILES) $(INCSPATH)

