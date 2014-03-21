#include "stdio.h"
#include "OdeSolver.hpp"
#include "ForwardEulerSolver.hpp"
#include "iostream"

int main(int argc, char const *argv[])
{
  ForwardEulerSolver example;
  example.SetStepSize(0.1);
  std::cout << example.stepSize;
  return 0;
}
