#include "OdeSolver.hpp"
#include "ForwardEulerSolver.hpp"
#include "Runge-Kutta.hpp"
#include <iostream>
#include <mpi.h>

int main(int argc, char const *argv[])
{
  MPI::Init();
  RungeKutta example;
  example.stepSize = 0.1;
  example.initialTime = 0;
  example.finalTime = 1;
  example.initialValue = 2; 
  example.SolveEquation();
  
  int num_procs = MPI::COMM_WORLD.Get_size();
  int rank = MPI::COMM_WORLD.Get_rank();

  std::cout << rank << num_procs;

  MPI::Finalize();

  return 0;
}
