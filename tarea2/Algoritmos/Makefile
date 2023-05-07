CC=g++
SRC1=bubbleSort.cpp
SRC2=insertionSort.cpp
SRC3=selectionSort.cpp
SRC4=quickSort.cpp
SRC5=main.cpp
TARGET=salida.o
CLEAN=rm -f $(TARGET)

all: $(TARGET)
	./$(TARGET)

$(TARGET): $(SRC1) $(SRC2) $(SRC3) $(SRC4) $(SRC5)
	mkdir -p build
	$(CC) $(SRC1) $(SRC2) $(SRC3) $(SRC4) $(SRC5) -o $(TARGET)


clean:
	$(CLEAN)
