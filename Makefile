CC=mpic++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp OdeSolver.cpp ForwardEulerSolver.cpp Runge-Kutta.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=hello
RM=rm

all: $(SOURCES) $(EXECUTABLE)
    
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	$(RM) *.o hello