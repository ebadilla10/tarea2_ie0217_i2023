CXX=g++
CXXFLAGS=-Wall

EXCEPTIONS_TARGET=exceptions_main
TIPOS_TARGET=tipos_excepciones

all: $(EXCEPTIONS_TARGET) $(TIPOS_TARGET)

$(EXCEPTIONS_TARGET): exceptions_main.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

$(TIPOS_TARGET): tipos_excepciones.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

.PHONY: clean

clean:
	rm -f $(EXCEPTIONS_TARGET) $(TIPOS_TARGET)

exceptions: $(EXCEPTIONS_TARGET)
	./$(EXCEPTIONS_TARGET)

tipos: $(TIPOS_TARGET)
	./$(TIPOS_TARGET)
