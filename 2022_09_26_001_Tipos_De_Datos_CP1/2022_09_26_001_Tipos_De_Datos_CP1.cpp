// 2022_09_26_001_Tipos_De_Datos_CP1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Angel Jared Ruiz Miramontes
// En esta practica conoceremos la sintaxys para decrarar variables
// Solicitar, Recibir y mostrar valores

#include <iostream>
#include <string>

int main()
{
    //Reglas o Sintaxys de declarar variables
    //1)Tipos de dato, 2)Nombre, 3)Inicializacion, 4)Fin de comando.
    bool Comprobacion = 0;

    //Sintaxys para Hablar con el usuario
    //1.- Palabra reservada 2.- Conectar 3.- Entre comillas escribir
    //4.- Conectar 5.- Salto de linea 6.- Fin de comando.
    std::cout << "Hola usuario" << std::endl;
    std::cout << "El valor de la comprobacion es: " << Comprobacion << std::endl;

    //Sintaxys para Pedir Valores
    std::cout << "Hola ingresa 0 o 1 para saber si es False o True\n";

    //Sintaxys recibir valores
    //1.- Palabra reservada para pedir valores, 2.- Conectar 3.- Variable donde se guarda lo solicitado.
    std::cin >> Comprobacion;

    //Sintaxys para Mostrar Valores
    std::cout << "El valor de la comprobacion recibido es: " << Comprobacion << std::endl;

    //String
    std::string Nombre;
    std::cout << "Hola usuario ingrese su nombre" << std::endl;
    std::getline(std::cin , Nombre);
    std::cout << "Su nombre es " << Nombre << std::endl;

    //Int
    int Numero_1;
    std::cout << "Hola usuario ingrese cual es su edad" << std::endl;
    std::cin >> Numero_1;
    std::cout << "Su edad es : " << Numero_1 << std::endl;

    //Float
    float Numero_2;
    std::cout << "ingrese su estatura en metros" << std::endl;
    std::cin >> Numero_2;
    std::cout << "Su estatura es : " << Numero_2 << std::endl;

    //Double
    double Numero_3;
    std::cout << "Ingrese su numero telefonico" << std::endl;
    std::cin >> Numero_3;
    std::cout << "Su numero es: " << Numero_3 << std::endl;

    //Char
    char Numero_4;
    std::cout << "Ingrese su genero. Ponga M para masculino y F para femenino" << std::endl;
    std::cin >> Numero_4;
    std::cout << "Su genero es : " << Numero_4 << std::endl; 
       

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
