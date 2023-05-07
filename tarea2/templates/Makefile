CC=g++
SRC=templates.cpp
TARGET=build/template

all: $(TARGET)
	./$(TARGET)

$(TARGET): $(SRC)
	@if [ ! -d build ]; then mkdir build;
	$(CC) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)


