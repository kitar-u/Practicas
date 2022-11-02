// 22_11_02_010_Punteros_CP10.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Angel Jared Ruiz Miramontes
// Este archivo contiene la practica de punteros

#include <iostream> //Controla entradas y salidas
#include <string> 
#include <locale> //Nos ayuda a interpretar idiomas
#include <stdlib.h> //Nos protege de bucles infinitos
#include <cstdlib> //Libreria de C para entradas y salidas o control de sistemas
#include <Windows.h> //Funciones de control de programa mediante pausas y dormidas
int main()
{
	// Declaracion de un puntero.
	/*
	int edad = 0;
	int* apuntador = &edad;
	std::cout << "Valor de la variable edad: " << edad << "\n";
	*apuntador = 20;
	std::cout << "Valor de la variable edad: " << edad << "\n";
	std::cout << "Direccion de memoria del puntero del puntero: " << apuntador << "\n";
	std::cout << "Valor del apuntador: " << *apuntador << "\n";
	std::cout << "Direccion de memoria de la edad: " << &edad << "\n";

	system("pause");
	apuntador = NULL;
	*/
	int Matriz[2][3] = { {1,2,4},{9,8,2} };

	/*
	for (int i = 0; i < (sizeof(Matriz) / (sizeof(Matriz[0]))); i++)
	{
		for (int j = 0; j < (sizeof(Matriz[0]) / (sizeof(Matriz[0][0]))); j++)
		{

	    }
	}
	*/

	for (int i = 0; i < (sizeof(Matriz) / (sizeof(Matriz[0]))); i++)
	{
		for (int j = 0; j < (sizeof(Matriz[0]) / (sizeof(Matriz[0][0]))); j++)
		{
			std::cout << Matriz[i][j] << " ";
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
