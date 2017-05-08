export CC = g++
export CFLAGS = -Wall -g -ansi -std=c++11
export AR = ar crv

export TOPDIR = $(CURDIR)
export LIBDIR = $(CURDIR)/lib
export SRCDIR = $(CURDIR)/src
export OUTDIR = $(CURDIR)/out
export OPENAIR = openair
export INCDIR = $(SRCDIR)

# shell cmds
export RM = rm -rf


all:
	cd $(SRCDIR); $(MAKE)

.PHONE: clean
clean:
	cd $(SRCROOT); $(MAKE) clean
	-$(RM) $(OUTDIR)/*

