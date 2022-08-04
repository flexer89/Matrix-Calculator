#include <iostream>
#include "Matrix.h"

int main()
{
    //Stworzenie macierzy składowych i wynikowej
	int** Matrix1 = nullptr;
	int** Matrix2 = nullptr;
    int** ResultMatrix = nullptr;

	int choice;
	int M1rows, M1cols, M2rows, M2cols;
	while (1)
	{
		system("cls");
		std::cout << "\n\tMatrix Calculator 1.0 ";
		std::cout << "\n\n Created By: Jakub Olszak | flexer89";
		std::cout << "\n\n";
		std::cout << "\n 1. Add Two Matrix";
		std::cout << "\n 2. Substract Two Matrix ";
		std::cout << "\n 3. Multiply Matrix by Matrix ";
		std::cout << "\n 4. Multiply Matrix by a number ";
		std::cout << "\n 5. Transpose Matrix ";
		std::cout << "\n 6. Quit Program ";
		std::cout << "\n\n";
		std::cout << "\n Enter Your Choice :=> ";
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			std::cout << "Add Two Matrix\nRemember! Matrix dimensions should be equal.\n\n\n";
			std::cout << "Give dimensions of first Matrix :=>";
			std::cin >> M1rows >> M1cols;
			std::cout << "Give dimensions of second Matrix :=>";
			std::cin >> M2rows >> M2cols;
			if (M1rows == M2rows && M1cols == M2cols)
			{
				system("cls");
				std::cout << "Dimensions are correct!\n\n";
				Matrix1 = CreateMatrix(Matrix1, M1rows, M1cols);
				Matrix2 = CreateMatrix(Matrix2, M2rows, M2cols);
				ResultMatrix = CreateMatrix(ResultMatrix, M2rows, M2cols);
				FillMatrix(Matrix1, M1rows, M1cols);
				FillMatrix(Matrix2, M2rows, M2cols);
				system("cls");
				std::cout << "First Matrix:\n";
				ShowMatrix(Matrix1, M1rows, M1cols);
				system("pause");
				std::cout << "Second Matrix:\n";
				ShowMatrix(Matrix2, M2rows, M2cols);
				system("pause");
				AddMatrix(Matrix1, Matrix2, ResultMatrix, M1rows,M1cols);
				system("cls");
				std::cout << "Result Matrix:\n";
				ShowMatrix(ResultMatrix, M2rows, M2cols);
			}
			DeleteMatrix(Matrix1, M1rows);
			DeleteMatrix(Matrix2, M2rows);
			DeleteMatrix(ResultMatrix, M2rows);
			system("pause");
			break;
		case 2:
			system("cls");
			std::cout << "Substract Two Matrix\nRemember! Matrix dimensions should be equal.\n\n\n";
			std::cout << "Give dimensions of first Matrix :=>";
			std::cin >> M1rows >> M1cols;
			std::cout << "Give dimensions of second Matrix :=>";
			std::cin >> M2rows >> M2cols;
			if (M1rows == M2rows && M1cols == M2cols)
			{
				system("cls");
				std::cout << "Dimensions are correct!\n\n";
				Matrix1 = CreateMatrix(Matrix1, M1rows, M1cols);
				Matrix2 = CreateMatrix(Matrix2, M2rows, M2cols);
				ResultMatrix = CreateMatrix(ResultMatrix, M2rows, M2cols);
				FillMatrix(Matrix1, M1rows, M1cols);
				FillMatrix(Matrix2, M2rows, M2cols);
				system("cls");
				std::cout << "First Matrix:\n";
				ShowMatrix(Matrix1, M1rows, M1cols);
				system("pause");
				std::cout << "Second Matrix:\n";
				ShowMatrix(Matrix2, M2rows, M2cols);
				system("pause");
				AddMatrix(Matrix1, Matrix2, ResultMatrix, M1rows, M1cols);
				system("cls");
				std::cout << "Result Matrix:\n";
				ShowMatrix(ResultMatrix, M2rows, M2cols);
			}
			DeleteMatrix(Matrix1, M1rows);
			DeleteMatrix(Matrix2, M2rows);
			DeleteMatrix(ResultMatrix, M2rows);
			system("pause");
			break;
		case 3:
			system("cls");
			std::cout << "Multiply Matrix by Matrix\n";
			system("pause");
			break;
		case 4:
			system("cls");
			std::cout << "Multiply Matrix by a number\n";
			system("pause");
			break;
		case 5:
			system("cls");
			std::cout << "Transpose Matrix\n";
			system("pause");
			break;
		case 6:
			system("cls");
			std::cout << "Exit a program\n";
			system("pause");
			return 0;
		default:
			std::cout << "Please give a correct number!\n";
			system("pause");
			break;
		}
	}
		
}
