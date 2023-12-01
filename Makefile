# Makefile for mylib

lib.name = host~

class.sources = src/host~.c

datafiles = 

PDLIBDIR=/Users/samdietz/Documents/Pd/collaboratepd

include pd-lib-builder/Makefile.pdlibbuilder

