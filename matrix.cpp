#include<iostream>
#include<ctime>

#include "./inc/det.h"

void print2dArray(int** array, int size){
  for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
      std::cout<<array[i][j]<<" ";
    }
    std::cout<<"\n";
  }
}

int main(){
  srand(time(NULL));

  int r = 0;
  std::cout<<"Enter no of rows of matrix(atleast 2): ";
  std::cin>>r;

  int **matrix;
  matrix = new int *[r];
  for(int i=0;i<r;i++) matrix[i] = new int[r];

  for(int i=0;i<r;i++) for(int j=0;j<r;j++) matrix[i][j] = rand()%10;

  print2dArray(matrix, r);

  int determinant = det(matrix, r);
  std::cout<<"Determinant: "<<determinant<<std::endl;

  return 0;
}