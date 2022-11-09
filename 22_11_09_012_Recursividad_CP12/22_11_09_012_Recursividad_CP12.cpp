// 22_11_09_012_Recursividad_CP12.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Angel Jared Ruiz Miramontes
// En este programa veremos recursividad.

#include <iostream>

/*
void invertir(int num)
{
    std::cout << num % 10;
    if (num > 10)
    {
        invertir(num / 10);
    }
}
*/
void binario(int bin) {
    if (bin > 1) binario(bin / 2);
    std::cout << bin % 2;
}

int main()
{
    /*
    int numerito;
    do
    {
        std::cout << "ingresar un numero de mas de 4 cifras: \n";
        std::cin >> numerito;
        if(numerito < 0)
        {
            std::cout << "Ingrese un numero entero y positivo dde 4 cifras... \n";
        }
    } while (numerito < 0);
    invertir(numerito);
    std::cout << std::endl << std::endl;
    */
    int nume;
    do
    {
        std::cout << "ingresar un numero entero: \n";
        std::cin >> nume;
        if (nume < 0)
        {
            std::cout << "Numero invalido ingrese un entero positivo... \n";
        }
    } while (nume < 0);
    std::cout << "Numero: " << nume;
    std::cout << "\nBinario: ";
    binario(nume);

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
