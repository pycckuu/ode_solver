#ifndef ODESOLVERDEF
#define ODESOLVERDEF

class OdeSolver {
public:
  double current_time;
  double current_value;  
  double stepSize;
  double initialTime;
  double finalTime;
  double initialValue;
  void SetStepSize (double h);
  void SetTimeInterval (double t0, double t1);
  void SetInitialValue (double y0);
  virtual double RightHandSide (double y, double t) = 0;
  virtual double SolveEquation() = 0;
};

#endif // ODESOLVERDEF