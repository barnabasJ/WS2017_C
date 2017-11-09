# compile the hello program with spaces instead of Tabs
# the compiler to use
CC = clang-4.0

# compiler flags:
# -g    adds debugging information to the executable file
# -Wall turns on most, but not all, compiler warnings
CFLAGS  = -g -Weverything

#files to link:
#LFLAGS = -lcs50

# require that an argument be provided at the command line for the target name:
TARGET = $(target)

all: $(TARGET)
$(TARGET): $(TARGET).c ; $(CC) $(CFLAGS) -o ./build/$(TARGET) $(TARGET).c
