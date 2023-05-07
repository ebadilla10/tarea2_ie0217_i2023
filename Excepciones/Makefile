CC=g++
SRC1=exceptions.cpp
SRC2=main.cpp
TARGET=salida.o
CLEAN=rm -f $(TARGET)

all: $(TARGET)
	./$(TARGET)

$(TARGET): $(SRC1) $(SRC2) 
	mkdir -p build
	$(CC) $(SRC1) $(SRC2) -o $(TARGET)

clean:
	$(CLEAN)
