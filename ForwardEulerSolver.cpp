#include "ForwardEulerSolver.hpp"

double ForwardEulerSolver::SolveEquation() {
  std::ofstream results;
  results.open("results.txt");
  results << "time\t|\tvalue\n";
  current_value = initialValue;
  for (current_time = initialTime; current_time < finalTime; current_time += stepSize)
  {
    OdeSolver::WritingResultsIntoFile(results, current_time, current_value);
    current_value += stepSize * OdeSolver::RightHandSide(current_time, current_value);
  }  
  results.close();
  return 0;
}