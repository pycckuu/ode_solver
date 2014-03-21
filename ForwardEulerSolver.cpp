#include "ForwardEulerSolver.hpp"
#include "iostream"

double ForwardEulerSolver::RightHandSide(double y, double t){
  // std::cout<< "time: " << 1 + t << "\n";
  return 1 + t;
}
double ForwardEulerSolver::SolveEquation() {
  current_value = initialValue;
  for (current_time = initialTime; current_time < finalTime; current_time += stepSize)
  {
    current_value = initialValue + stepSize * ForwardEulerSolver::RightHandSide(current_value, current_time);
    std::cout << "current value: " << current_value << "\n";
    initialValue = current_value;
  }  
  return 0;
}