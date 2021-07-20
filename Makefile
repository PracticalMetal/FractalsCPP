CC = g++
PROJECT = output
SRC = main.cpp
LIBS = include/fractal.cpp `pkg-config --cflags --libs opencv4`

$(PROJECT):$(SRC)
	$(CC) $(SRC) -o $(PROJECT) $(LIBS)

clean:
	rm -f $(PROJECT)