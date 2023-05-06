CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=algoritmos.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=algoritmos.exe

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
