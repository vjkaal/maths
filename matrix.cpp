#include<iostream>
#include<ctime>

#include "./inc/inv.h"

int main(){
  srand(time(NULL));

  int r = 0;
  std::cout<<"Enter no of rows of matrix(atleast 2): ";
  std::cin>>r;

  int **matrix;
  matrix = new int *[r];
  for(int i=0;i<r;i++) matrix[i] = new int[r];

  for(int i=0;i<r;i++) for(int j=0;j<r;j++) matrix[i][j] = rand()%10;

  printMatrix(matrix, r);

  int dt = det(matrix, r);
  std::cout<<"Determinant: "<<dt<<std::endl;

  int** tr = transpose(matrix, r);
  printMatrix(matrix, r);

  // int** inv = inverse(tr, r, dt);
  printInvMatrix(tr, r, dt);

  return 0;
}