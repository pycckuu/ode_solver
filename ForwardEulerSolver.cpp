#include "ForwardEulerSolver.hpp"
#include "iostream"

double RightHandSide(double y, double t){
  return 1 + t;
}
double ForwardEulerSolver::SolveEquation() {
  current_value = initialValue;
  for (current_time = initialTime; current_time < finalTime; current_time += stepSize)
  {
    current_value = initialValue + stepSize * RightHandSide(current_value, current_time);
  }  
  return 0;
}