// 22_11_24_013_Maximo_Comun_Divisor_CP13.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Angel Jared Ruiz Miramontes 
// Practica de Maximo Comun Divisor

#include <iostream>

int MCD(int Nume_1, int Nume_2) {
    if (Nume_1 == 0) {
        return Nume_2;
    }
    else MCD(Nume_2 % Nume_1, Nume_1);
}

int main()
{
    int Nume_1, Nume_2;
    do {
        std::cout << "Ingrese un numero entero y que sea positivo: \n";
        std::cin >> Nume_1;
        if (Nume_1 < 0) {
            std::cout << "Por favor ingrese un numero que sea entero y positivo: \n";
        }
    } while (Nume_1 < 0);
    do {
        std::cout << "Ingrese el segundo numero y que sea entero y positivo: \n";
        std::cin >> Nume_2;
        if (Nume_2 < 0) {
            std::cout << "Por favor ingrese un numero que sea entero y positivo: \n";
        }
    } while (Nume_2 < 0);
    if (Nume_1 > Nume_2) {
        std::cout << "El Maximo comun divisor de: (" << Nume_1 << "," << Nume_2 << ") es =" << MCD(Nume_1, Nume_2);
    }
    else if (Nume_2 > Nume_1) {
        std::cout << "El Maximo comun divisor de: (" << Nume_2 << "," << Nume_1 << ") es = " << MCD(Nume_2, Nume_1);
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
