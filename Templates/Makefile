# Doxygen configuration file
DOXYFILE := Doxyfile

.PHONY: clean doc run

all: 
	g++ -Wall stackTemplate.cpp -o main.exe

run: 
	./main.exe

clean:
	rm -f main.exe

doc:
	doxygen $(DOXYFILE)
