// 22_10_04_003_PrintScan_CP3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Angel Jared Ruiz Miramontes 
// Printf y Scanf

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string>
#include <stdbool.h>

int main()
{
    //String
    char Name[10], Name1[10];
    printf("Hola Usuario, Ingrese su nombre: \n");
    scanf("%s %s", Name, Name1);
    printf("Su nombre es: %s %s \n", Name, Name1);

    //Char
    char gen;
    printf("Ponga 'M' para Masculino y 'F' para Femenino: \n");
    scanf(" %c", &gen);
    printf("Su genero es: %c \n", gen);

    //Int
    int Edad;
    printf("Ingrese su edad: \n");
    scanf("%i", &Edad);
    printf("Su edad es: %i \n", Edad);

    //Float
    float Numero_1;
    printf("Ingrese su estatura en metros: \n");
    scanf("%f", &Numero_1);
    printf("Su estatura es: %.2f \n", Numero_1);
    //Double
    double Numero_2;
    printf("Ingrese su numero telefonico: \n");
    scanf("%o", &Numero_2);
    printf("Su numero telefonico es: %o \n", Numero_2);
    
    //Bool
    bool X = 1;
    int tr;
    printf("Su datos estan correctos? \n");
    printf("Ponga '0' para falso y '1' para verdadero: \n");
    scanf("%i", &tr);
    if (X == tr)
    {
        printf("Su datos entonces son verdaderos \n");
    }
    else
    {
        printf("Su datos son falsos \n");
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
