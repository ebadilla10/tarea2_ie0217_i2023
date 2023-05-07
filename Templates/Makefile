SHELL := cmd.exe

CC=g++
SRC=stackTemplate.cpp
TARGET=build\stackTemplate.exe
CLEAN=del /f $(TARGET)

all: $(TARGET)
	$(TARGET)

$(TARGET): $(SRC)
	@if not exist build mkdir build
	$(CC) $(SRC) -o $(TARGET)

clean:
	$(CLEAN)

