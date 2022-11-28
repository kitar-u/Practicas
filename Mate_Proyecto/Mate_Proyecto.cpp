// Mate_Proyecto.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Angel Jared Ruiz Miramontes

#include <iostream>

int main()
{
    int sel;
    double n, a, deri;
    std::cout << "1- Form: a(x)^n                      2- Form: a^x       \n";
    std::cout << "3- Form: lna(x)                      4- Form: Sina(x)^n \n";
    std::cout << "5- Form: Cosa(x)^n                   6- Form: Tana(x)^n \n";
    std::cout << "Selecciona una opcion: \n";
    std::cin >> sel;
    system("CLS");
    switch (sel) {
    case 1:
        std::cout << "Ponga el valor de a y el valor de n. \n";
        std::cout << "a(x)^n \n";
        std::cout << "a: "; std::cin >> a; std::cout << "\n";
        std::cout << "n: "; std::cin >> n; std::cout << "\n";
        std::cout << "La derivada de: " << a << "x^" << n;
        std::cout << " Es = " << a * n << "x^" << n - 1 << "\n";
        break;
    case 2:
        std::cout << "Ponga el valor de a. \n";
        std::cout << "a^x \n";
        std::cout << "a: "; std::cin >> a; std::cout << "\n";
        std::cout << "La derivada de: " << a << "^x";
        std::cout << " Es = " << a << "^x" << "ln" << a << "\n";
        break;
    case 3:
        std::cout << "Ponga el valor de a y el valor de n. \n";
        std::cout << "lna(x^n) \n";
        std::cout << "a: "; std::cin >> a; std::cout << "\n";
        std::cout << "Si x no esta elevado ponga 1 \n";
        std::cout << "n: "; std::cin >> n; std::cout << "\n";
        if (n == 1) {
            std::cout << "La derivada de: " << "ln" << a << "x";
            std::cout << " Es =   " << a << "\n";
            std::cout << "                          ----- \n";
            std::cout << "                           " << a << "x \n";
        }
        else {
            std::cout << "La derivada de: " << "ln" << a << "x^" << n;
            std::cout << " Es =  " << a * n << "X^" << n - 1 << "\n";
            std::cout << "                            ------- \n";
            std::cout << "                             " << a << "x^" << n << "\n";
        }
        break;
    case 4:
        std::cout << "Ponga el valor de a y el valor de n. \n";
        std::cout << "Sina(x)^n \n";
        std::cout << "Si no esta significa que es 1. \n";
        std::cout << "a: "; std::cin >> a; std::cout << "\n";
        std::cout << "Si x no esta elevado ponga 1 \n";
        std::cout << "n: "; std::cin >> n; std::cout << "\n";
        std::cout << "La derivada de: " << "Sin" << a << "x^" << n;
        std::cout << " Es = " << a * n << "x^" << n - 1 << "Cos" << a << "x^" << n << "\n";
        break;
    case 5:
        std::cout << "Ponga el valor de a y el valor de n. \n";
        std::cout << "Cosa(x)^n \n";
        std::cout << "Si no esta a significa que es 1. \n";
        std::cout << "a: "; std::cin >> a; std::cout << "\n";
        std::cout << "Si x no esta elevado ponga 1 \n";
        std::cout << "n: "; std::cin >> n; std::cout << "\n";
        std::cout << "La derivada de: " << "Cos" << a << "x^" << n;
        std::cout << " Es = " << -a * n << "x^" << n - 1 << "Sin" << a << "x^" << n << "\n";
        break;
    case 6:
        std::cout << "Ponga el valor de a y el valor de n. \n";
        std::cout << "Tana(x)^n \n";
        std::cout << "Si no esta significa que es 1 ponga 1 \n";
        std::cout << "a: "; std::cin >> a; std::cout << "\n";
        std::cout << "Si x no esta a elevado ponga 1 \n";
        std::cout << "n: "; std::cin >> n; std::cout << "\n";
        std::cout << "La derivada de: " << "Tan" << a << "x^" << n;
        std::cout << " Es = " << a * n << "x^" << n - 1 << "Sec^2 " << a << "x^" << n << "\n";
        break;
    default:
        std::cout << "Elegiste una opcion incorrecta \n";
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
