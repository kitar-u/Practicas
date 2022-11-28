// 22_11_24_016_Producto_De_Dos_Numeros_CP15.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Angel Jared Ruiz Miramontes
// Practica Producto de Dos Numeros 

#include <iostream>

int Mult(int Nume_1, int Nume_2) {
    if (Nume_2 == 1) return Nume_1;
    if (Nume_2 > 0) {
        return Nume_1 + Mult(Nume_1, Nume_2 - 1);
    }
    else {
        return -Nume_1 + Mult(Nume_1, Nume_2 + 1);
    }
    return 0;
}

int main()
{
    int Nume_1, Nume_2;
    std::cout << "Ingrese el primer numero y que sea entero: \n";
    std::cin >> Nume_1;
    std::cout << "ingrese otro numero entero: \n";
    std::cin >> Nume_2;
    std::cout << "El resultado de la multiplicacion " << Nume_1 << " * " << Nume_2 << " Es = " << Mult(Nume_1, Nume_2) << "\n";
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
