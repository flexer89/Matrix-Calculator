#pragma once
#include <vector>
#include <iostream>

int** CreateMatrix(int** matrix, int row, int col);
void DeleteMatrix(int** matrix, int row);
void FillMatrix(int** matrix, int row, int col);
void ShowMatrix(int** matrix, int row, int col);
void AddMatrix(int** matrix1, int** matrix2, int rows, int cols);
void SubstractMatrix(int** matrix1, int** matrix2, int rows, int cols);
void NumberMultiply(int** matrix, int rows, int cols, int number);
void MatrixbyMatrix(int** matrix1, int** matrix2, int** ResultMatrix, int M1rows, int M2rows, int M2cols);
void TransposeMatrix(int** matrix1, int** matrix2, int M1rows, int M1cols);
