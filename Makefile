# CC=mpic++
# CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp OdeSolver.cpp ForwardEulerSolver.cpp Runge-Kutta.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=main
# RM=rm

# include ${PETSC_DIR}/conf/variables
# include ${PETSC_DIR}/conf/rules

# all: $(SOURCES) $(EXECUTABLE)
    
# $(EXECUTABLE): $(OBJECTS) 
# 	$(CC) $(LDFLAGS) $(OBJECTS) -o $@



CFLAGS           =
FFLAGS		 			 =
CPPFLAGS         =
FPPFLAGS         =
MANSEC           = SNES

include ${PETSC_DIR}/conf/variables
include ${PETSC_DIR}/conf/rules

$(EXECUTABLE): ${OBJECTS}  chkopts
	-${CLINKER} -o $(EXECUTABLE) ${OBJECTS} ${PETSC_SNES_LIB}
	${RM} ${OBJECTS}

del:
	$(RM) *.o ${EXECUTABLE}