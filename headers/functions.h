//
// Created by Erika on 2/21/2023.
//

#ifndef LABOR2_FUNCTIONS_H
#define LABOR2_FUNCTIONS_H
#include <stdlib.h>
#include <stdio.h>
#include "konstans.h"
int** allocateMemoryForMatrix1(int rows, int cols);
void allocateMemoryForMatrix2(int rows, int cols, int ***dpMatrix);
void readMatrix(int *pRows, int *pCols, int ***dpArray, const char *input);
void printMatrix(int rows, int cols, int **pMatrix, const char *output);
void deallocateMemoryForMatrix(int rows, int ***dpMatrix);
int minimumValueOfRow(int cols, int *pRow);
#endif //LABOR2_FUNCTIONS_H
