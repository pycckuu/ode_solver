#include "OdeSolver.hpp"

void OdeSolver::SetStepSize (double h) {
  stepSize = h;
}

void OdeSolver::SetTimeInterval (double t0, double t1) {
  initialTime = t0;
  finalTime = t1;
}

void OdeSolver::SetInitialValue (double y0) {
  initialValue = y0;
}