# compile the hello program with spaces instead of Tabs
# the compiler to use
CC = clang-4.0

# compiler flags:
# -g    adds debugging information to the executable file
# -Wall turns on most, but not all, compiler warnings
CFLAGS  = -g -Wall

#files to link:
LFLAGS = -L./lib -lbarnabas

# require that an argument be provided at the command line for the target name:
TARGET = $(target)

$(TARGET): $(TARGET).c libbarnabas.a
	$(CC) $(CFLAGS) -o ./build/$(TARGET) $(TARGET).c $(LFLAGS)

libbarnabas.a: barnabas.o
	ar -rcv ./lib/$@ ./artefacts/$^

barnabas.o: barnabas.c
	$(CC) -c $(CFLAGS) -o ./artefacts/$@ $^
