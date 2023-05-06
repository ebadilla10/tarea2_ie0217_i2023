CXX = g++
CXXFLAGS = -c -Wall
LDFLAGS =
SOURCES = algoritmos.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = algoritmos

all: $(SOURCES) $(EXECUTABLE)
	./$(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
