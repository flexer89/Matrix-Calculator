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
void AddMatrix(int** m1, int** m2, int** m3, int rows,int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			m3[i][j] = m1[i][j] + m2[i][j];
		}
	}
}
int** SubstractMatrix(int** m1, int** m2, int** m3)
{
	return 0;
}
//TODO::
//Zrobiæ menu na switch
//Zrobiæ Pozosta³e funkcje dzia³añ na macierzy
//Zrobiæ opisy funkcji
