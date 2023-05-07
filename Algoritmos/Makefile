# Doxygen configuration file
DOXYFILE := Doxyfile

.PHONY: clean doc run

all: 
	g++ *.cpp -o main

run: 
	./main.exe

clean:
	rm -f main.exe

doc:
	doxygen $(DOXYFILE)
