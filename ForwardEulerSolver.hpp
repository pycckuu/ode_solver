#ifndef FORWARDEULERSOLVERDEF
#define FORWARDEULERSOLVERDEF

#include "OdeSolver.hpp"

class ForwardEulerSolver : public OdeSolver {
public:
  double RightHandSide(double y, double t);
  double SolveEquation();
};

#endif // FORWARDEULERSOLVERDEF

