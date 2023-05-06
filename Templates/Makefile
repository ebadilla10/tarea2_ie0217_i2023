# Makefile

# Variables
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Primer programa
TARGET1 = programa1
SRCS1 = stackTemplate_punto4y5.cpp
OBJS1 = $(SRCS1:.cpp=.o)

# Segundo programa
TARGET2 = programa2
SRCS2 = stackTemplate.cpp
OBJS2 = $(SRCS2:.cpp=.o)

# Reglas para generar los programas
all: $(TARGET1) $(TARGET2)

$(TARGET1): $(OBJS1)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(TARGET2): $(OBJS2)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Reglas para compilar los archivos fuente en objetos
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para limpiar los archivos objeto y los programas generados
clean:
	rm -f $(OBJS1) $(TARGET1) $(OBJS2) $(TARGET2)

ejemploFinal:$(TARGET1)
	./$(TARGET1)

Original:$(TARGET2)
	./$(TARGET2)
