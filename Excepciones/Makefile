# Makefile

# Variables
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Primer programa
TARGET1 = programa1
SRCS1 = ejemploExcepciones.cpp
OBJS1 = $(SRCS1:.cpp=.o)

# Segundo programa
TARGET2 = programa2
SRCS2 = main.cpp exceptions_2.cpp
OBJS2 = $(SRCS2:.cpp=.o)
HEADERS2 = exceptions_2.h

# Tercer programa
TARGET3 = programa3
SRCS3 = exceptions.cpp
OBJS3 = $(SRCS3:.cpp=.o)

# Reglas para generar los programas
all: $(TARGET1) $(TARGET2) $(TARGET3)

$(TARGET1): $(OBJS1)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(TARGET2): $(OBJS2)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(TARGET3): $(OBJS3)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Reglas para compilar los archivos fuente en objetos
%.o: %.cpp $(HEADERS2)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para limpiar los archivos objeto y los programas generados
clean:
	rm -f $(OBJS1) $(TARGET1) $(OBJS2) $(TARGET2) $(OBJS3) $(TARGET3)

# Regla para ejecutar el primer programa
ejemploExcepciones: $(TARGET1)
	./$(TARGET1)

# Regla para ejecutar el segundo programa
excepcionesHeader: $(TARGET2)
	./$(TARGET2)

# Regla para ejecutar el tercer programa
excepcionesOriginal: $(TARGET3)
	./$(TARGET3)
