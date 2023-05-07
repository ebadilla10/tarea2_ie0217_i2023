SHELL := cmd.exe

CC=g++
SRC1=Sorting_algorithms.cpp 
SRC2=main.cpp
TARGET=build\Sorting_algorithms.exe
CLEAN=del /f $(TARGET)

all: $(TARGET)
	$(TARGET)

$(TARGET): $(SRC1) $(SRC2)
	if not exist build mkdir build
	$(CC) $(SRC1) $(SRC2) -o $(TARGET)

clean:
	$(CLEAN)
