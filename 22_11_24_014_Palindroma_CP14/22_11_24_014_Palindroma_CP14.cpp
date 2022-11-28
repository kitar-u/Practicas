// 22_11_24_014_Palindroma_CP14.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Angel Jared Ruiz Miramontes
// Practica de Palindromo

#include <iostream>
#include <string.h>
#include <string>

int palindromo(char Palabra[], int I, int F) {
    if (I >= F)  return 1;
    if (Palabra[I] == Palabra[F])
        palindromo(Palabra, I + 1, F - 1);
    else return 0;
}

int main()
{
    char Palabra[50];
    int tam, pal;
    std::cout << "ingrese una palabra para averiguar si es palindroma: \n";
    std::cin.getline(Palabra, 50);
    tam = strlen(Palabra);
    pal = palindromo(Palabra, 0, tam - 1);
    if (pal == 1) {
        std::cout << "\nLa Palabra es palindromo ";
    }
    else if (pal == 0) {
        std::cout << "\nLa Palabra no es palindromo ";
    }
    return 0;
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
