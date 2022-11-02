// 22_10_03_002_Decisiones_CP2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Angel Jared Ruiz Miramontes
// Conoceremos las decisiones en programacion

#include <iostream>
#include <string>
#include <locale.h>
#include <locale>

int main()
{
    setlocale(LC_ALL, "spanish");
    bool Bandera = false;
    int cout = 0;
    std::string nombre = "Angel";
    std::string n_ingresado = "";
    std::string contra = "Holamundo";
    std::string c_ingresado = "";
    std::cout << "sistema: " << Bandera << "\n";

    std::cout << "Hola usuario ingresa tu nombre: " << "\n";
    std::getline(std::cin, n_ingresado);
    if (nombre == n_ingresado)
    {
        std::cout << "Nombre ingresado correcto" << "\n";
        cout = cout + 1;
    }
    else
    {
        std::cout << "Nombre ingresado incorrecto" << "\n";
    }
    std::cout << "Ingresa tu Contraseña: " << "\n";
    std::getline(std::cin, c_ingresado);
    if (contra == c_ingresado);
    {
        std::cout << "Contraseña correcta" << "\n";
        cout = cout + 1;
    }
    if (cout < 2)
    {
        std::cout << "Datos ingresados Incorrectos" << "\n";
    }
    if (cout == 2)
    {
        Bandera = true;
    }
    std::cout << "El estado del sistema es: " << Bandera;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
