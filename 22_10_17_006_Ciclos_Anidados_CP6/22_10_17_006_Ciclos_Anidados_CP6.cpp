// 22_10_17_006_Ciclos_Anidados_CP6.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
	/*
	std::string Color_CP1 = "Rubio";
	std::string Color_CP2 = "Pelirojo";
	std::string Color_OP1 = "Azules";
	std::string Color_OP2 = "Marrones";
	if(Color_CP1 == "Rubio")
	{
		std::cout << "Tu personaje tiene color de cabello Rubio \n";
		if (Color_OP1 == "Azules")
		{
			std::cout << "Tu personaje tiene los ojos de color azul \n";
			std::cout << "Tu personaje es Trump \n";
		}
	}
	*/
	/*
	int arreglo[3] = { 1,2,3 };
	int cajas[3][3] = { { 1,2,3},{4,5,6 },{7,8,9}};
	// Ciclo para mostrar el areglo simple
	for (int i = 0; i < 3; i++)
	{
		std::cout << " La posicion " << i << " tiene el valor: " << arreglo[i] << "\n";
	}
	// Ciclo para mostrar la matriz
	for (int j = 0; j < 3; j++)
	{
		std::cout << "Indice J: \n";
		for (int k = 0; k < 3; k++)
		{
			std::cout << "Indice K: \n";
			std::cout << "La posicion [" << j << "," << k << "] Tiene el valor " << cajas[j][k] << "\n";
		}
	}
	*/
	int ajk[9][1] = { {1},{2},{3},{4},{5},{6},{7},{8},{9} };
	for (int j = 0; j < 10; j++) 
	{
		
	for (int k = 0; k < 10; k++)
	{		
		std::cout << "\nIndice J: [" << j << "] \n";
		std::cout << "Indice K: [" << k << "] \n"; 
		std::cout << "\nLa posicion [" << j << "," << k << "]\n";
		Sleep(777);
	}
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
