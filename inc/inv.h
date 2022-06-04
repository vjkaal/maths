#ifndef INV_H
#define INV_H

int countDigits(int);
void printMatrix(int**, int);
void printInvMatrix(int**, int, int);

int det(int**, int);
int det2d(int**);
int det_full(int**, int);
int** createMatrix(int**, int, int, int);

int** transpose(int**, int);
int** inverse(int**, int, int);

#endif