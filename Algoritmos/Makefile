SHELL := cmd.exe

CC=g++
SRC1=fuenteSort.cpp 
TARGET=build\fuenteSort.exe
CLEAN=del /f $(TARGET)

all: $(TARGET)
	$(TARGET)

$(TARGET): $(SRC1)
	if not exist build mkdir build
	$(CC) $(SRC1) -o $(TARGET)

clean:
	$(CLEAN)
