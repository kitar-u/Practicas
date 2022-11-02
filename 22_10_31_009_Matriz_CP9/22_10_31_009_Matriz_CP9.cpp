// 22_10_31_009_Matriz_CP9.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale>
#include <locale.h>
#include <string>

int main()
{
	/*
	 = { {1,2,3,4,5,6,7,8,9,10},{11,12,13,14,15,16,17,18,19,20},{21,22,23,24,25,26,27,28,29,30},{31,32,33,34,35,36,37,38,39,40},{41,42,43,44,45,46,47,48,49,50},{51,52,53,54,55,56,57,58,59,60},{61,62,63,64,65,66,67,68,69,70},{71,72,73,74,75,76,77,78,79,80},{81,82,83,84,85,86,87,88,89,90},{91,92,93,94,95,96,97,98,99,100} };
	*/
	/*
	int edades[3][2] = { {1,2},{9,8},{14,21} };
	int filas = (sizeof(edades) / sizeof(edades[0]));
	std::cout << filas;
	int columnas = (sizeof(edades[0]) / sizeof(edades[0][0]));
	std::cout << columnas;
	std::cout << "\n";
	*/
	int Matriz_3[3][3];
	
	/*
	//Metodo para rellenar la Matriz
	for (int i = 0; i < (sizeof(Matriz_3) / (sizeof(Matriz_3[0]))); i++)
	{
		for (int j = 0; j < (sizeof(Matriz_3[0]) / (sizeof(Matriz_3[0][0]))); j++)
		{
			Matriz_3[i][j] = 0;
		}
	}
	*/
	//Metodo Para mostrar una matriz
	std::cout << "Matriz[3][3] \n";
	for (int i = 0; i < (sizeof(Matriz_3) / (sizeof(Matriz_3[0]))); i++)
	{
		for (int j = 0; j < (sizeof(Matriz_3[0]) / (sizeof(Matriz_3[0][0]))); j++)
		{
			Matriz_3[i][j] = rand() %10;
		}
	}
	for (int i = 0; i < (sizeof(Matriz_3) / (sizeof(Matriz_3[0]))); i++)
	{
		for (int j = 0; j < (sizeof(Matriz_3[0]) / (sizeof(Matriz_3[0][0]))); j++)
		{
			std::cout << Matriz_3[i][j] << " ";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
	std::cout << "Matriz[5][5] \n";
	int Matriz_5[5][5];
	for (int i = 0; i < (sizeof(Matriz_5) / (sizeof(Matriz_5[0]))); i++)
	{
		for (int j = 0; j < (sizeof(Matriz_5[0]) / (sizeof(Matriz_5[0][0]))); j++)
		{
			Matriz_5[i][j] = rand() %10;
		}
	}
	for (int i = 0; i < (sizeof(Matriz_5) / (sizeof(Matriz_5[0]))); i++)
	{
		for (int j = 0; j < (sizeof(Matriz_5[0]) / (sizeof(Matriz_5[0][0]))); j++)
		{
			std::cout << Matriz_5[i][j] << " ";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
	std::cout << "Matriz[10][10] \n";
	int Matriz_10[10][10];
	for (int i = 0; i < (sizeof(Matriz_10) / (sizeof(Matriz_10[0]))); i++)
	{
		for (int j = 0; j < (sizeof(Matriz_10[0]) / (sizeof(Matriz_10[0][0]))); j++)
		{
			Matriz_10[i][j] = rand() %10;
		}
	}
	for (int i = 0; i < (sizeof(Matriz_10) / (sizeof(Matriz_10[0]))); i++)
	{
		for (int j = 0; j < (sizeof(Matriz_10[0]) / (sizeof(Matriz_10[0][0]))); j++)
		{
			std::cout << Matriz_10[i][j] << " ";
		}
		std::cout << "\n";
	}
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
