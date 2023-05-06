CXX=g++
CXXFLAGS=-c -Wall
LDFLAGS=
SOURCES=exceptions.cpp main.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=exceptions.exe

all: $(SOURCES) $(EXECUTABLE)
	./$(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
