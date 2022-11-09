// 22_11_07_011_Objetos_CP11.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Angel Jared Ruiz Miramontes
// Intro a objetos

#include <iostream>
#include <time.h>

struct alumno
{
	int defensa;
	int vida;
	float ataque;
	long velocidad;
}jugador;
int main()
{
	alumno flores;
	flores.ataque = rand() % 50;
	flores.vida = rand() % 50;
	flores.defensa = rand() % 50;
	flores.velocidad = rand() % 50;

	alumno Juls;
	Juls.ataque = rand() % 50;
	Juls.vida = rand() % 50;
	Juls.defensa = rand() % 50;
	Juls.velocidad = rand() % 50;
	if (flores.ataque < Juls.ataque)
	{
		std::cout << "Juls es mas poderoso " << std::endl;
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
