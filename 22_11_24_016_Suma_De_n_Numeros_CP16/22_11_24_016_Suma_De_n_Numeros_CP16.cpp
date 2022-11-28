// 22_11_24_016_Suma_De_n_Numeros_CP16.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Angel Jared Ruiz Miramontes
// Practica de Suma de "n" numeros naturales

#include <iostream>

int sumar(int Nume_1) {
    int suma = 0;
    if (Nume_1 == 1) {
        suma = 1;
    }
    else {
        suma = Nume_1 + sumar(Nume_1 - 1);
    }
    return suma;
}

int main()
{
    int Elementos;
    do {
        std::cout << "Ingrese el numero de elementos que quiere sumar: \n";
        std::cin >> Elementos;
    } while (Elementos <= 0);
    std::cout << "La suma es: " << sumar(Elementos);
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
