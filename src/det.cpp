#include "./../inc/det.h"

#include<iostream>


int det(int** arr, int s){
  if(s == 2) return det2d(arr);
  return 0;
}

int det2d(int** m){
  return m[0][0]*m[1][1] - m[0][1]*m[1][0];
}