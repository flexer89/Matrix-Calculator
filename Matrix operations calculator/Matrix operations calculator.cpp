#include <iostream>
#include "Matrix.h"

int main()
{
	int choice;
	int M1rows, M1cols, M2rows, M2cols;
	while (1)
	{
		system("cls");
		std::cout << "\n\tMatrix Calculator 0.5 ";
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
			std::cout << "Add Two Matrix\nRemember! Matrix dimensions should be equal.\n\n";

			std::cout << "Give dimensions of first Matrix: \n";
			std::cout << "Rows :=>";
			std::cin >> M1rows;
			std::cout << "Columns :=>";
			std::cin >> M1cols;

			std::cout << "\nGive dimensions of second Matrix: \n";
			std::cout << "Rows :=>";
			std::cin >> M2rows;
			std::cout << "Columns :=>";
			std::cin >> M2cols;

			if (M1rows == M2rows && M1cols == M2cols)
			{
				system("cls");
				std::cout << "Dimensions are correct!\n\n";
				system("pause");

				//If conditions are correct, Pointers to dynamic arrays are created
				int** Matrix1 = nullptr;
				int** Matrix2 = nullptr;

				Matrix1 = CreateMatrix(Matrix1, M1rows, M1cols);
				Matrix2 = CreateMatrix(Matrix2, M2rows, M2cols);

				system("cls");
				std::cout << "Fill First Matrix\n";
				FillMatrix(Matrix1, M1rows, M1cols);
				system("cls");
				std::cout << "Fill Second Matrix\n";
				FillMatrix(Matrix2, M2rows, M2cols);
				system("cls");
				std::cout << "First Matrix:\n";
				ShowMatrix(Matrix1, M1rows, M1cols);
				system("pause");
				std::cout << "Second Matrix:\n";
				ShowMatrix(Matrix2, M2rows, M2cols);
				system("pause");
				AddMatrix(Matrix1, Matrix2, M1rows,M1cols);
				system("cls");
				std::cout << "Result Matrix:\n";
				ShowMatrix(Matrix1, M2rows, M2cols);

				//Deleting pointers, clearing memory
				DeleteMatrix(Matrix1, M1rows);
				DeleteMatrix(Matrix2, M2rows);
			}
			else
			{
				system("cls");
				std::cout << "You entered wrong dimensions. Try again.\n";
				system("pause");
				break;
			}
			system("pause");
			break;
		case 2: 
			system("cls");
			std::cout << "Substract Two Matrix\nRemember! Matrix dimensions should be equal.\n\n";

			std::cout << "Give dimensions of first Matrix: \n";
			std::cout << "Rows :=>";
			std::cin >> M1rows;
			std::cout << "Columns :=>";
			std::cin >> M1cols;

			std::cout << "\nGive dimensions of second Matrix: \n";
			std::cout << "Rows :=>";
			std::cin >> M2rows;
			std::cout << "Columns :=>";
			std::cin >> M2cols;

			if (M1rows == M2rows && M1cols == M2cols)
			{
				system("cls");
				std::cout << "Dimensions are correct!\n\n";
				system("pause");
				//If conditions are correct, Pointers to dynamic arrays are created
				int** Matrix1 = nullptr;
				int** Matrix2 = nullptr;

				Matrix1 = CreateMatrix(Matrix1, M1rows, M1cols);
				Matrix2 = CreateMatrix(Matrix2, M2rows, M2cols);
				system("cls");
				std::cout << "Fill First Matrix\n";
				FillMatrix(Matrix1, M1rows, M1cols);
				system("cls");
				std::cout << "Fill Second Matrix\n";
				FillMatrix(Matrix2, M2rows, M2cols);
				system("cls");
				std::cout << "First Matrix:\n";
				ShowMatrix(Matrix1, M1rows, M1cols);
				system("pause");
				std::cout << "Second Matrix:\n";
				ShowMatrix(Matrix2, M2rows, M2cols);
				system("pause");
				SubstractMatrix(Matrix1, Matrix2, M1rows, M1cols);
				system("cls");
				std::cout << "Result Matrix:\n";
				ShowMatrix(Matrix1, M1rows, M1cols);

				//Deleting pointers, clearing memory
				DeleteMatrix(Matrix1, M1rows);
				DeleteMatrix(Matrix2, M2rows);
			}
			else
			{
				system("cls");
				std::cout << "You entered wrong dimensions. Try again.\n";
				system("pause");
				break;
			}
			system("pause");
			break; 
		case 3:
			system("cls");
			std::cout << "Multiply Matrix by Matrix\n";
			system("pause");
			break;
		case 4:{
		int** Matrix = nullptr;
		int MultiplyFactor;

		system("cls");
		std::cout << "Multiply Matrix by a number\n\n";

		std::cout << "Give dimensions of first Matrix: \n";
		std::cout << "Rows :=>";
		std::cin >> M1rows;
		std::cout << "Columns :=>";
		std::cin >> M1cols;

		system("cls");
		std::cout << "Give a Number to Multiply :=>";
		std::cin >> MultiplyFactor;

		std::cout << "Fill Matrix\n";
		Matrix = CreateMatrix(Matrix, M1rows, M1cols);
		FillMatrix(Matrix, M1rows, M1cols);
		system("cls");
		std::cout << "Matrix:\n";
		ShowMatrix(Matrix, M1rows, M1cols);
		system("pause");

		NumberMultiply(Matrix, M1rows, M1cols, MultiplyFactor);
		system("cls");
		std::cout << "Result Matrix:\n";
		ShowMatrix(Matrix, M1rows, M1cols);

		DeleteMatrix(Matrix, M1rows);
		system("pause");
		break; }
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
