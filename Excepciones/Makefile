SHELL := cmd.exe

CC=g++
SRC1=exceptions.cpp 
SRC2=main.cpp
TARGET=build\exceptions.exe
CLEAN=del /f $(TARGET)

all: $(TARGET)
	$(TARGET)

$(TARGET): $(SRC1) $(SRC2)
	if not exist build mkdir build
	$(CC) $(SRC1) $(SRC2) -o $(TARGET)

clean:
	$(CLEAN)
