#include "./../inc/inv.h"

int** transpose(int** M, int s){
  int temp = 0;
  for(int i=0;i<s-1;i++){
    for(int j=i;j<s;j++){
      temp = M[i][j];
      M[i][j] = M[j][i];
      M[j][i] = temp;
    }
  }
  return M;
}