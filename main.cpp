#include "OdeSolver.hpp"
#include "ForwardEulerSolver.hpp"
#include "Runge-Kutta.hpp"

int main(int argc, char const *argv[])
{
  RungeKutta example;
  example.stepSize = 0.1;
  example.initialTime = 0;
  example.finalTime = 1;
  example.initialValue = 2; 
  example.SolveEquation();
  return 0;
}
