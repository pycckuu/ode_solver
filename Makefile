SOURCES=main.cpp OdeSolver.cpp ForwardEulerSolver.cpp Runge-Kutta.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=main

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