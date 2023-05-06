# Makefile 

# Definicion de variables
CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = programa
SRCS = main.cpp headerSort.cpp
OBJS = $(SRCS:.cpp=.o)
HEADERS = headerSort.h

# Genera el programa
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Compila los archivos fuente en objetos
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpiar los archivos objeto y el programa generado
clean:
	rm -f $(OBJS) $(TARGET)

# Ejecucion el programa
algoritmos: $(TARGET)
	./$(TARGET)
