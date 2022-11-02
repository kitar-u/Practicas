// 22_10_10_003_Deciciones_Multiples_CP3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Angel Jared Ruiz Miramontes
// En este programa aprenderemos switch case
// 

#include <iostream>
#include <string>

int main()
{
    float Numero_1, Numero_2, Numero_3, Numero_4, Numero_5, Numero_6, Numero_7, Numero_8;
    int Op = 0;
    std::cout << "Bienvenido usuario ¿que es lo que quiere hacer? \n" << "Op 0.-Suma \n" << "Op 1.-Resta \n" << "Op 2.-Multiplicasion \n" << "Op 3.-Division \n";
    std::cin >> Op;
    switch (Op)
    {
    case 0:
        std::cout << "Usted eligio Suma \n";
        std::cout << "Elija el primer numero para Sumar: \n";
        std::cin >> Numero_1;
        std::cout << "Ingrese el segundo numero: \n";
        std::cin >> Numero_2;
        std::cout << "La respuesta es: " << Numero_1 + Numero_2 << "\n";
        break;
    case 1:
        std::cout << "Usted eligio Resta \n";
        std::cout << "Elija el primer numero para Restar: \n";
        std::cin >> Numero_3;
        std::cout << "Ingrese el segundo numero: \n";
        std::cin >> Numero_4;
        std::cout << "La respuesta es: " << Numero_3 - Numero_4 << "\n";
        break;
    case 2:
        std::cout << "Usted eligio Multiplicacion \n";
        std::cout << "Elija el primer numero para Multiplicar: \n";
        std::cin >> Numero_5;
        std::cout << "Ingrese el segundo numero: \n";
        std::cin >> Numero_6;
        std::cout << "La respuesta es: " << Numero_5 * Numero_6 << "\n";
        break;
    case 3:
        std::cout << "Usted eligio Division \n";
        std::cout << "Elija el primer numero para Dividir: \n";
        std::cin >> Numero_7;
        std::cout << "Ingrese el segundo numero: \n";
        std::cin >> Numero_8;
        std::cout << "La respuesta es: " << Numero_7 / Numero_8 << "\n";
    default:
        std::cout << "Por que pones algo que no esta? \n";
    }

    int ocp = 0;
    std::cout << "Buenas que quieres hacer? \n" << "Ocp 0.-nada \n" << "ocp 1.- Nada menos \n";
    std::cin >> ocp;
    //sintaxys de Switch case
    switch (ocp)
    {
    case 0:
        //Codigo de caso 0
        std::cout << "Bienvenido a la opcion 0 bracero \n";
        break;
    case 1:
        //Codigo de caso 1
        std::cout << "Pasale esta usted en la opcion #1 \n";
        break;
    default:
        std::cout << "Sorry chavo te equivocaste pero durisimo \n";
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
