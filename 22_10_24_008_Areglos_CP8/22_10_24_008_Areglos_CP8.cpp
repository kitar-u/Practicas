// 22_10_24_008_Areglos_CP8.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Angel Jared Ruiz Miramontes
// En este programa aprenderemos la sintaxys de los arreglos
// A recorrerlos y a recolectar datos

#include <iostream>
#include <locale>
#include <locale.h>
#include <string>

int main()
{
	
	//Tipo de dato; Nombre de la variable; [# de elementos]
	
	/*
	int vec1[10];
	char vec2[50];
	bool vec3[60];
	std::string vec4[100];
	float vec5[2];
	double vec6[5];

	//Arreglos Predefinidos
	std::string vec7[5] = { "Dato1", "Dato2", "Dato3", "Dato4", "Dato5" };
	int vec8[] = { 1,2,3,4,5,6,7,8,9 };

	std::cout << "El vector 7 en su posicion 3 tiene a: " << vec7[2] << "\n";
	std::cout << "El vector 7 en su posicion 2 tiene a: " << vec7[1] << "\n";

	vec7[0] = "Santiago";
	std::cout << "El vector 7 en su posicion 1 tiene a: " << vec7[0] << "\n";
	// Metodo para recordar todo el arreglo
	for (int i = 0; i < 5; i++)
	{
		std::cout << "El vector 7 tiene a: " << vec7[i] << " En la posicion " << i << " Y es el elemento: " << i + 1 << "\n";
	}
	
	int edades[3][2] = { {1,2},{9,8},{14,21} };
	int filas = (sizeof(edades) / sizeof(edades[0]));
	std::cout << filas;
	int columnas = (sizeof(edades[0]) / sizeof(edades[0][0]));
	std::cout << columnas;
	std::string juego[3] = { "Dark Souls ", "Nier Replicant ", "Persona 5" };
	std::string Autor[3] = { "Hidetaka Miyazaki" ,"Yoko Taro", "Katsura Hashino"};
	int fecha[3] = { 2011,2010,2019 };
	*/
	
	std::string juego[3];
	std::string Autor[3];
	std::string fecha[3];
		for (int i = 0; i < 3; i++)
		{
			std::cout << "Juego " << i + 1 << "\n";
			std::getline(std::cin, juego[i]);
			std::cout << "Autor " << i + 1 << "\n";
			std::getline(std::cin, Autor[i]);
			std::cout << "Año " << i + 1 << "\n";
			std::getline(std::cin, fecha[i]);
		}
		std::cin.get();
		system("CLS");
		std::cout << "Biblioteca de juegos guardados \n";
		std::cout << " \n";
		for (int i = 0; i < 3; i++)
		{
			std::cout << "Juego " << i + 1 << " -> " << juego[i] << "\n";
			std::cout << "Autor " << i + 1 << " -> " << Autor[i] << "\n";
			std::cout << "Año " << i + 1 << " -> " << fecha[i] << "\n";
			std::cout << " \n";
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
