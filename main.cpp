#include "stdio.h"
#include "OdeSolver.hpp"
#include "ForwardEulerSolver.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
  ForwardEulerSolver example;
  example.stepSize = 0.00001;
  example.initialTime = 0;
  example.finalTime = 1;
  example.initialValue = -1;
  example.SolveEquation();
  return 0;
}
