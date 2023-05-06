CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=stackTemplate.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=stackTemplate.exe

all: $(SOURCES) $(EXECUTABLE)
	./$(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
