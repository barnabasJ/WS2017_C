# compile the hello program with spaces instead of Tabs
# the compiler to use
CC = clang-4.0

# compiler flags:
# -g    adds debugging information to the executable file
# -Wall turns on most, but not all, compiler warnings
CFLAGS  = -g -Weverything

#files to link:
#LFLAGS = -lbarnabas.h

default: triangularMatrix

triangularMatrix: triangularMatrix.c barnabas.a
	$(CC) $(CFLAGS) triangularMatrix.c ./lib/barnabas.a -o $@

barnabas.a: barnabas.o
	ar -rcv ./lib/$@ ./artefacts/$^

barnabas.o: barnabas.c
	$(CC) $(CFLAGS) -c $^ -o ./artefacts/$@

