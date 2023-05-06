CXX=g++
CXXFLAGS=-c -Wall
LDFLAGS=

TARGET=Algoritmo
SRC=main_algoritmo.cpp
OBJ=$(SRC:.cpp=.o)

$(TARGET): $(OBJ)
	$(CXX) $(LDFLAGS) -o $(TARGET) $(OBJ)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) $(OBJ)

.PHONY: clean run all

algoritmo: $(TARGET) run

