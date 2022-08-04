#pragma once
#include <vector>
#include <iostream>

int** CreateMatrix(int** matrix, int row, int col);
void DeleteMatrix(int** matrix, int row);
void FillMatrix(int** matrix, int row, int col);
void ShowMatrix(int** matrix, int row, int col);
void AddMatrix(int** m1, int** m2, int** m3, int rows, int cols);
int** SubstractMatrix(int** m1, int** m2, int** m3);
