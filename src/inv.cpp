#include "./../inc/inv.h"

int** inverse(int** M, int s, int d){
  for(int i=0;i<s;i++){
    for(int j=0;j<s;j++){
      M[i][j] /= d;
    }
  }
  return M;
}