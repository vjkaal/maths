#include "./../inc/inv.h"

#include<iostream>
#include<cmath>
#include<iomanip>

void printMatrix(int** M, int s){
  // std::cout<<"size: "<<s<<std::endl;
  for(int i=0;i<s;i++){
    std::cout<<"|";
    for(int j=0;j<s;j++){
      std::cout<<M[i][j]<<" ";
    }
    std::cout<<"|\n";
  }
}

void printInvMatrix(int** M, int s, int d){
  std::cout<<"Inverse of Matrix: \n";
  int c = countDigits(d) + 3;
  std::cout<<c<<std::endl;
  for(int i=0;i<s;i++){
    if(i == s/2) std::cout<<1<<"/"<<d;
    else std::cout<<std::setw(c);
    
    std::cout<<"|";
    for(int j=0;j<s;j++){
      std::cout<<M[i][j]<<" ";
    }
    std::cout<<"|\n";
  }
}

int countDigits(int digit){
  if(digit<0) return int(log10(-digit) + 2);
  return int(log10(digit) + 1);
}