// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    //Suma
    float Numero_1, Numero_2;
    std::cout << "Hola aventurero, deberas completar una serie de desafios" << "\n";
    std::cout << "Llegaste a un nuevo sitio y una persona misteriosa te dice que tienes que hacer una apuesta : " << "\n";
    std::cout << "Cuanto dinero decides poner? " << "\n";
    std::cin >> Numero_1;
    std::cout << "No entiendes bien pero te dice que hagas una segunda apuesta " << "\n";
    std::cin >> Numero_2;
    std::cout << "Parece que ganaste la persona misteriosa te entrega el dinero y desaparece entre la neblina : " << Numero_1 + Numero_2 << "\n";

    //Resta
    float Numero_3, Numero_4;
    std::cout << "Otra persona aparecio te dice que pongas monedas en una mesa" << "\n";
    std::cout << "Cuantas monedas pondras?: " << "\n";
    std::cin >> Numero_3;
    std::cout << "Parece que te pide que pongas otra pila de monedas: " << "\n";
    std::cout << "Cuantas monedas pondras?: " << "\n";
    std::cin >> Numero_4;
    std::cout << "Parece que la persona te robo un par de monedas quizás no deberías seguir apostando en este lugar" << Numero_3 - Numero_4 << "\n";

    //Multiplicacion
    float Numero_5, Numero_6;
    std::cout << "Queee? Parece que un enemigo salvaje aparecio supongo que tendras que pelear contra el" << "\n";
    std::cout << "Pon un valor de ataque rapido: " << "\n";
    std::cin >> Numero_5;
    std::cout << "Rapido necesitamos otro valor de ataque: " << "\n";
    std::cin >> Numero_6;
    std::cout << "Tuvimos suerte fue un golpe critico, aunque parece que con solo un toque lo derrotabamos quizas nos excedimos un poco " << Numero_5 * Numero_6 << "\n";

    //Divison 
    float Numero_7, Numero_8;
    std::cout << "Este lugar es muy extraño parece que todo se resuelve de manera muy aleatoria" << "\n";
    std::cout << "Sabes que pasa? Asi es una situacion sin sentido que te pide algun valor de alguna cosa para resolver algo : " << "\n";
    std::cout << "Solo ingresa un numero no se ni que nos pide este lugar: " << "\n";
    std::cin >> Numero_7;
    std::cout << "Ya te la sabes, otro numero yeeeeiii: " << "\n";
    std::cin >> Numero_8;
    std::cout << "Parece que se robo una fraccion de lo que pusimos" << Numero_7 / Numero_8 << "\n";

    //Potencia 
    float Numero_9, axu;
    std::cout << "Una cosa misteriosa se acerca parece ser lo ultimo que esta en este lugar" << "\n";
    std::cout << "Te habla en un idioma desconocido, pero conociendo este lugar nos está pidiendo poner algo : " << "\n";
    std::cin >> Numero_9;
    axu = pow(Numero_9, 2);
    std::cout << "Parece que nos genero una gran cantidad de cosas que teniamos: " << axu << "\n";

    //Raiz 
    double raiz, Numero_10;  
    std::cout << "Te menti aun hay otra persona misteriosa. De donde salio?" << "\n";
    std::cout << "Dice que pongamos unas monedas: " << "\n";
    std::cin >> Numero_10;  
    raiz = sqrt(Numero_10);  
    std::cout << "Dijo jaja magia y desaparecio, lo unico que hizo fue dejarte una cantidad lamentable de dinero como se supone que se usa ese dinero" << "=" << raiz << "\n";

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
