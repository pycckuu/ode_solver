#ifndef FORWARDEULERSOLVERDEF
#define FORWARDEULERSOLVERDEF

#include "OdeSolver.hpp"

class ForwardEulerSolver : public OdeSolver {
public:
  double SolveEquation();
};

#endif // FORWARDEULERSOLVERDEF

