#include "Matrix.h"

int** CreateMatrix(int** matrix, int row, int col)
{
	try
	{
		matrix = new int* [row];
	}
	catch (const std::bad_alloc&)
	{
		std::cerr << "error";
	}

	for (int i = 0; i < row; i++)
	{
		try
		{
			matrix[i] = new int[col];
		}
		catch (const std::bad_alloc&)
		{
			std::cerr << "error";
		}
	}
	return matrix;

}

void DeleteMatrix(int** matrix, int row)
{
	for (int j = 0; j < row; j++)
	{
		delete[] matrix[j];
	}
	delete[] matrix;
}

void FillMatrix(int** matrix, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			std::cout << "Enter [" << i + 1 <<"][" << j + 1 << "] element: ";
			std::cin >> matrix[i][j];
		}
	}
}
void ShowMatrix(int** matrix, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			std::cout << matrix[i][j] << "  ";
		}
		std::cout << std::endl;
	}
}
void AddMatrix(int** matrix1, int** matrix2, int rows,int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			matrix1[i][j] += matrix2[i][j];
		}
	}
}
void SubstractMatrix(int** matrix1, int** matrix2, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			matrix1[i][j] -= matrix2[i][j];
		}
	}
}
void NumberMultiply(int** matrix, int rows, int cols,int number)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			matrix[i][j] *= number;
		}
	}
}
void MatrixbyMatrix(int** matrix1, int** matrix2, int** ResultMatrix, int M1rows, int M2rows, int M2cols)
{
	for (int i = 0; i < M1rows; i++) 
	{
		for (int j = 0; j < M2cols; j++) 
		{
			ResultMatrix[i][j] = 0;
			for (int k = 0; k < M2rows; k++) 
			{
				ResultMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}
}
void TransposeMatrix(int** matrix1, int** matrix2, int M1rows,int M1cols)
{
	for (int i = 0; i < M1rows; i++)
	{
		for (int j = 0; j < M1cols; j++)
		{
			matrix2[j][i] = matrix1[i][j];
		}
	}
}
//TODO::
//Zrobi? menu na switch
//Zrobi? Pozosta?e funkcje dzia?a? na macierzy
//Zrobi? opisy funkcji
