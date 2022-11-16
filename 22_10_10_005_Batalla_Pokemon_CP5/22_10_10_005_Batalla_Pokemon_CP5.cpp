// 22_10_10_005_Batalla_Pokemon_CP5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
	bool Elec = true;
	int PJ = 100;
	int BOSS = 200;

	//Stats

	char Op;

	std::cout << "Bienvenido Usuario elija a su Personaje \n" << "Op A.- Undead \n" << "Op B.- Hunter \n" << "Op C.- Tarnished \n";
	std::cin >> Op;
	switch (Op)
	{
	case 'A':
	case 'a':
		std::cout << "Eligiste Undead \n";
		std::cout << "Escribe - A - para confirmar \n";
		break;
	case 'B':
	case 'b':
		std::cout << "Elegiste Hunter \n";
		std::cout << "Escribe - B - para confirmar \n";
		break;
	case 'C':
	case 'c':
		std::cout << "Elegiste Tarnished \n";
		std::cout << "Escribe - C - para confirmar \n";
		break;
	default:
		std::cout << "No elegiste uno correcto \n";
	}
	char Co;
	std::cin >> Co;
	switch (Co)
	{
	case 'A':
	case 'a':
			srand(time(NULL));
		while (PJ >= 1 && BOSS >= 1)
		{
			char actH;
			int defR;
			std::cout << "\nUndead " << "HP: " << PJ << "\n";
			std::cout << "BOSS \n" << "Gwyn Lord Of Cinder " << "HP: " << BOSS << "\n";
			std::cout << "\nEs tu Turno \n" << "Atk (A) \n" << "Def (D) \n" << "Estus (E) \n";
			std::cin >> actH;
			switch (actH)
			{
			case 'A':
			case 'a':
				std::cout << "\nElegiste Atacar \n";
				BOSS = BOSS - 20;
				defR = 0;
				break;
			case 'D':
			case 'd':
				std::cout << "\nElegiste Defenderte \n";
				defR = (rand() % 5) + 10;
				std::cout << "Defensa de: " << defR << "\n";
				break;
			case 'E':
			case 'e':
				std::cout << "\nUsaste Un Estus \n";
				if (PJ == 100)
				{
					std::cout << "No Puedes curarte mas del 100\n";
					defR = 0;
				}
				if (PJ >= 71)
				{
					PJ = 100;
					defR = 0;
				}
				if (PJ <= 70)
				{
					PJ = PJ + 30;
					defR = 0;
				}
				break;
			default:
				std::cout << "\nNo hiceste Nada \n";
			}
			std::cout << "\nUndead " << "HP: " << PJ << "\n";
			std::cout << "\nBOSS \n" << "Gwyn Lord Of Cinder " << "HP: " << BOSS << "\n";
			std::cin.ignore();
			std::cout << "\nPresione Enter para continuar: " << "\n";
			std::cin.get();
			system("CLS");


			if (BOSS > 1)
			{
				int actionL;
				std::cout << "Turno de Gwyn Lord Of Cinder \n";
				actionL = rand() % 3;
				switch (actionL)
				{
				case 1:
					std::cout << "La Gwym te Ataco \n";
					int AtkP;
					AtkP = (rand() % 10) + 15;
					if (defR > 0)
					{
						std::cout << "Bloqueaste el ataque \n";
						std::cout << "Daño recibido: " << AtkP - defR << "\n";
						PJ = (PJ - (AtkP - defR));
					}
					else
					{
						std::cout << "Resiviste el Ataque: " << AtkP << "\n";
						PJ = PJ - AtkP;
					}
					break;
				case 2:
					std::cout << "La Gwyn uso un Ataque Magico \n";
					int MagP;
					MagP = (rand() % 15) + 15;
					if (defR > 0)
					{
						std::cout << "Bloqueaste el Ataque Magico \n";
						std::cout << " Daño recibido: " << MagP - defR << "\n";
						PJ = (PJ - (MagP - defR));
					}
					else
					{
						std::cout << "Resiviste el Ataque Magico: " << MagP << "\n";
						PJ = PJ - MagP;
					}
					break;
				default:
					std::cout << "Gwyn no hizo nada \n";
				}
				std::cout << "\nUndead " << "HP: " << PJ << "\n";
				std::cout << "\nBOSS \n" << "Gwyn Lord Of Cinder " << "HP: " << BOSS << "\n";
				std::cout << "\nPresione Enter para continuar: " << "\n";
				std::cin.get();
				system("CLS");
			}
			if (BOSS <= 0)
			{
				std::cout << "Derrotaste a Gwyn Lord Of Cinder \n";
				std::cout << "Encendiste la hoguera \n" << "\nAhora eres un Lord Of Cinder \n";
			}
			if (PJ <= 0)
			{
				std::cout << "YOU DIE \n";
			}
		}
		break;
	case 'B':
	case 'b':
			srand(time(NULL));
		while (PJ >= 1 && BOSS >= 1)
		{
			char actH;
			int defR;
			std::cout << "\nHunter " << "HP: " << PJ << "\n";
			std::cout << "BOSS \n" << "La Presencia Lunar " << "HP: " << BOSS << "\n";
			std::cout << "\nEs tu Turno \n" << "Atk (A) \n" << "Def (D)\n" << "Jeringa (J) \n";
			std::cin >> actH;
			switch (actH)
			{
			case 'A':
			case 'a':
				std::cout << "\nElegiste Atacar \n";
				BOSS = BOSS - 20;
				defR = 0;
				break;
			case 'D':
			case 'd':
				std::cout << "\nElegiste Defenderte \n";
				defR = (rand() % 5) + 10;
				std::cout << "Defensa de: " << defR << "\n";
				break;
			case 'J':
			case 'j':
				std::cout << "\nUsaste una jeringa \n";
				if (PJ == 100)
				{
					std::cout << "No Puedes curarte mas del 100\n";
					defR = 0;
				}
				if (PJ >= 71)
				{
					PJ = 100;
					defR = 0;
				}
				if (PJ <= 70)
				{
					PJ = PJ + 30;
					defR = 0;
				}
				break;
			default:
				std::cout << "\nNo hiceste Nada \n";
			}
			std::cout << "\nHunter " << "HP: " << PJ << "\n";
			std::cout << "\nBOSS \n" << "La Presencia Lunar " << "HP: " << BOSS << "\n";
			std::cin.ignore();
			std::cout << "\nPresione Enter para continuar: " << "\n";
			std::cin.get();
			system("CLS");


			if (BOSS > 1)
			{
				int actionL;
				std::cout << "Turno de La Presencia Lunar\n";
				actionL = rand() % 3;
				switch (actionL)
				{
				case 1:
					std::cout << "La Presencia Lunar te Ataco \n";
					int AtkP;
					AtkP = (rand() % 10) + 15;
					if (defR > 0)
					{
						std::cout << "Bloqueaste el ataque \n";
						std::cout << "Daño recibido: " << AtkP - defR << "\n";
						PJ = (PJ - (AtkP - defR));
					}
					else
					{
						std::cout << "Resiviste el Ataque: " << AtkP << "\n";
						PJ = PJ - AtkP;
					}
					break;
				case 2:
					std::cout << "La Presencia Lunar uso un Ataque Magico \n";
					int MagP;
					MagP = (rand() % 15) + 15;
					if (defR > 0)
					{
						std::cout << "Bloqueaste el Ataque Magico \n";
						std::cout << " Daño recibido: " << MagP - defR << "\n";
						PJ = (PJ - (MagP - defR));
					}
					else
					{
						std::cout << "Resiviste el Ataque Magico: " << MagP << "\n";
						PJ = PJ - MagP;
					}
					break;
				default:
					std::cout << "La Presencia Lunar no hizo nada \n";
				}
				std::cout << "\nHunter " << "HP: " << PJ << "\n";
				std::cout << "\nBOSS \n" << "La Presencia Lunar " << "HP: " << BOSS << "\n";
				std::cout << "\nPresione Enter para continuar: " << "\n";
				std::cin.get();
				system("CLS");
			}
			if (BOSS <= 0)
			{
				std::cout << "Derrotaste a la Presencia Lunar\n";
				std::cout << "Inicio de la Infancia \n";
			}
			if (PJ <= 0)
			{
				std::cout << "YOU DIE \n";
			}
		}
		break;
	case 'C':
	case 'c':
			srand(time(NULL));
		while (PJ >= 1 && BOSS >= 1)
		{
			char actH;
			int defR;
			std::cout << "\nTarnished " << "HP: " << PJ << "\n";
			std::cout << "BOSS \n" << "Elden Beast " << "HP: " << BOSS << "\n";
			std::cout << "\nEs tu Turno \n" << "Atk (A) \n" << "Def (D)\n" << "Estus (E) \n";
			std::cin >> actH;
			switch (actH)
			{
			case 'A':
			case 'a':
				std::cout << "\nElegiste Atacar \n";
				BOSS = BOSS - 20;
				defR = 0;
				break;
			case 'D':
			case 'd':
				std::cout << "\nElegiste Defenderte \n";
				defR = (rand() % 5) + 10;
				std::cout << "Defensa de: " << defR << "\n";
				break;
			case 'E':
			case 'e':
				std::cout << "\nUsaste un Estus \n";
				if (PJ == 100)
				{
					std::cout << "No Puedes curarte mas del 100\n";
					defR = 0;
				}
				if (PJ >= 71)
				{
					PJ = 100;
					defR = 0;
				}
				if (PJ <= 70)
				{
					PJ = PJ + 30;
					defR = 0;
				}
				break;
			default:
				std::cout << "\nNo hiceste Nada \n";
			}
			std::cout << "\nTarnished " << "HP: " << PJ << "\n";
			std::cout << "\nBOSS \n" << "Elden Beast " << "HP: " << BOSS << "\n";
			std::cin.ignore();
			std::cout << "\nPresione Enter para continuar: " << "\n";
			std::cin.get();
			system("CLS");


			if (BOSS > 1)
			{
				int actionL;
				std::cout << "Turno del Elden Beast\n";
				actionL = rand() % 3;
				switch (actionL)
				{
				case 1:
					std::cout << "EL Elden Beast te Ataco \n";
					int AtkP;
					AtkP = (rand() % 10) + 15;
					if (defR > 0)
					{
						std::cout << "Bloqueaste el ataque \n";
						std::cout << "Daño recibido: " << AtkP - defR << "\n";
						PJ = (PJ - (AtkP - defR));
					}
					else
					{
						std::cout << "Resiviste el Ataque: " << AtkP << "\n";
						PJ = PJ - AtkP;
					}
					break;
				case 2:
					std::cout << "El Elden Beasr uso un Ataque Magico \n";
					int MagP;
					MagP = (rand() % 15) + 15;
					if (defR > 0)
					{
						std::cout << "Bloqueaste el Ataque Magico \n";
						std::cout << " Daño recibido: " << MagP - defR << "\n";
						PJ = (PJ - (MagP - defR));
					}
					else
					{
						std::cout << "Resiviste el Ataque Magico: " << MagP << "\n";
						PJ = PJ - MagP;
					}
					break;
				default:
					std::cout << "El Elden Beast no hizo nada \n";
				}
				std::cout << "\nTarnished " << "HP: " << PJ << "\n";
				std::cout << "\nBOSS \n" << "Elden Beast " << "HP: " << BOSS << "\n";
				std::cout << "\nPresione Enter para continuar: " << "\n";
				std::cin.get();
				system("CLS");
			}
			if (BOSS <= 0)
			{
				std::cout << "Derrotaste al Elden Beast\n";
				std::cout << "Ahora eres un Elden Lord \n";
			}
			if (PJ <= 0)
			{
				std::cout << "YOU DIE \n";
			}
		}
		break;
	default:
		std::cout << "No confirmaste Bien \n";
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
