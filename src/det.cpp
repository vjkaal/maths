#include "./../inc/inv.h"


#include<cmath>

int det(int** arr, int s){
  if(s == 2) return det2d(arr);
  else return det_full(arr, s);
  return 0;
}

int det2d(int** m){
  return m[0][0]*m[1][1] - m[0][1]*m[1][0];
}

int det_full(int** m, int size){
  int sum = 0;
  for(int i=0;i<size;i++){
    if(m[0][i] == 0) continue;
    sum += (pow(-1, 0+i) * m[0][i] * det(createMatrix(m, size, 0, i), size-1));
  }
  return sum;
}

int** createMatrix(int** M, int size, int x, int y){
  int** ret;
  ret = new int *[size-1];
  for(int i=0;i<size-1;i++) ret[i] = new int[size-1];
  
  int m = 0, n = 0;


  for(int i=0;i<size;i++){
    if(i == x) continue;
    for(int j=0;j<size;j++){
      if(j == y) continue;
      ret[m][n] = M[i][j];
      // std::cout<<m<<n<<" "<<M[i][j]<<" "<<ret[m][n]<<std::endl;
      n++;
    }
    m++;
    n=0;
  }

  // std::cout<<'\n';
  // printMatrix(ret, size-1);
  
  return ret;
}