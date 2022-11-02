// 22_10_10_004_Ciclos_CP4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Angel Jared Ruiz Miramontes
// Ciclos While Do-While For

#include <iostream>
#include <Windows.h>
int main()
{
	bool seguir = true;
	int contador = 0;
	//Lo peor que pueden usar es el while porque se cometen muchos errores

	while (seguir)
	{
		std::cout << "# " << contador << "\n";
		contador = contador + 1;
		Sleep(777);
		if (contador == 100)
		{
			seguir = false;
		}
	}
		// Do while se ejecuta  por lo menos 1 vez.
		contador = 0;
	do
	{
		std::cout << "do# " << contador << "\n";
		contador = contador + 1;
		Sleep(777);
	} while (contador <= 100);
	//For Es la mayor sentencia de control
	for (int cout = 0; cout < 100; cout++)
	{

		std::cout << "for# " << cout << "\n";
		Sleep(777);
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
