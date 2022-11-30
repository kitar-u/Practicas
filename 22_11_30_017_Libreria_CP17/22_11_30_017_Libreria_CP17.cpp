// 22_11_30_017_Libreria_CP17.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "MathLibrary.h"
int main()
{
    int nume_1, nume_2;
    float nume_3, nume_4;
    std::cout << "Introdusca un numero para sumar: \n";
    std::cin >> nume_1;
    std::cout << "introdusca el segundo numero: \n";
    std::cin >> nume_2;
    std::cout << "El resultado es = " << suma(nume_1, nume_2);
    std::cout << "\n";
    std::cout << "Introdusca un numero para restar: \n";
    std::cin >> nume_1;
    std::cout << "introdusca el segundo numero: \n";
    std::cin >> nume_2;
    std::cout << "El resultado es = " << rest(nume_1, nume_2);
    std::cout << "\n";
    std::cout << "Introdusca un numero para multiplicar: \n";
    std::cin >> nume_1;
    std::cout << "introdusca el segundo numero: \n";
    std::cin >> nume_2;
    std::cout << "El resultado es = " << mult(nume_1, nume_2);
    std::cout << "\n";
    std::cout << "ahora se dividira, introdusca un numero: \n";
    std::cin >> nume_3;
    std::cout << "introdusca el segundo numero que dividira al primero: \n";
    std::cin >> nume_4;
    std::cout << "El resultado es = " << divi(nume_1, nume_2);
    std::cout << "\n";
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
