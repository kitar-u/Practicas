// 22_12_06_019_Historia_Narativa_CP19.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
	int re, bo;
	int PJ = 100;
	int BOSS = 200;
	std::string name;
	std::cout << "Como te llamas? \n";
	std::getline(std::cin, name);
	std::cout << "Narador:" << name << " Se levanta de su cama y se direige a donde esta la puerta. " << "\n";
	std::cout << "Que es lo que hara? \n" << "(1) Abrir la puerta y salir. \n" << "(2) regresar a la cama y dormirse. \n";
	std::cin >> re;
	if (re == 2) {
		std::cout << "Narrador: " << name << " Abre la... Espera enserio te regresaste? \n";
		std::cout << name << ": SI \n";
		std::cout << "Narrador: Pero apenas te acabas de levantar, enserio no vas a hacer nada mas?\n";
		std::cout << "(1) Tienes razon deberia salir. \n" << "(2) Me quiero dormir. \n";
		std::cin >> re;
		system("CLS");
		if (re == 2) {
			std::cout << "Narrador: Las aventuras epicas no empizan asi. VAMOS SAL DE LA CASA.\n";
			std::cout << "(1) Esta bien tu ganas. \n" << "(2) QUE NO VOY A SALIR PESADO. \n";
			std::cin >> re;
			system("CLS");
		}
		if (re == 2) {
			std::cout << "Narrador: Me estas tomando el pelo? \n";
			std::cout << name << ": Por supuesto que SI. \n";
			std::cout << "Narrador: Entonces deja de bromear y sal de una vez. \n";
			std::cout << "(1) Vale ya voy. \n" << "(2) Estas fumando porros si crees quevoy a salir. \n";
			std::cin >> re;
			system("CLS");
		}
		if (re == 2) {
			std::cout << "Narrador: ... Mira te lo pedire amablemente. Podrias salir porfavor? \n";
			std::cout << "(1) Asi cambia la cosa, vamos pa fuera. \n" << "(2) Por Supuesto que me voy a ir a dormir. \n";
			std::cin >> re;
			system("CLS");
		}
		if (re == 2) {
			std::cout << "Narrador: No te lo voy a repetir de nuevo, asi que mas vale que salgas de la casa. \n";
			std::cout << "(1) Vale, vale \n" << "(2) Como te lo explico de que me quiero ir a dormir. \n";
			std::cin >> re;
			system("CLS");
		}
		if (re == 2) {
			std::cout << "Narrador: ME C@#% EN LA P#%@. Perdon no se que paso. Pero puedes salir de una vez por favor \n";
			std::cout << "(1) Ok ya vamos pa fuera. \n" << "(2) Pos XD me voy dormir. \n";
			std::cin >> re;
			system("CLS");
		}
		if (re == 2) {
			std::cout << "Narrador: Eres el peor aventure que me a tocado narrar su historia. \n";
			std::cout << name << ": Bueno si te hubiera pedido el dato estaria impresionante. \n";
			std::cout << "Narrador: ... Puedes ya parar y salir de una vez? .-. \n";
			std::cout << "(1) Creo que ya deberia para ya me rei mucho de ti. \n" << "(2) Lo siento pero lo unico que quiero es dormir. \n";
			std::cin >> re;
			system("CLS");
		}
		if (re == 2) {
			std::cout << "Narrador: YA, me rindo vete a dormir, NO TIENES REMEDIO. \n";
			std::cout << name << ": Vale ya era hora que quiero dormir. \n";
			std::cout << "\nPresione Enter para continuar: " << "\n";
			std::cin.ignore();
			std::cin.get();
			system("CLS");
			std::cout << "FINAL OBSTINADO \n";
			std::cout << "Te mantuviste firme con tu idea y lograste que el narrador se enfadara y abandonara su cometido. \n";
			std::cout << "Ahora podras dormir y disfrutar tu sueño. \n";
		}
	}
	if (re == 1) {
		std::cout << "Narrador: " << name << " Abre la puerta con determinacion y se dirige al mundo exterior. \n";
		std::cout << "Caminas por la calle y dices: Esta calle es bien sola. \n";
		std::cout << name << ": Hey espera yo no dije eso. \n";
		std::cout << "Narrador: Exclamo " << name << "Mientras se enojaba. \n";
		std::cout << name << ": Deja de decir cosas que no estoy haciendo. \n";
		std::cout << "Narrador: sin razon aparente " << name << " Se queja sin ningun sentido. \n";
		std::cout << name << ": Sabes que te puedo escuchar verdad? \n";
		std::cout << "Narrador: Lo se y mas vale que dejes de molestar si no quieres que te vuelva furro de golpe. \n";
		std::cout << name << ": Vale vale, no interrupo mas.\n";
		std::cout << "Narrador: " << name << " Se encontro con un portal magico que es lo que hara? \n";
		std::cout << "(1) Entrar al portal. \n" << "(2) Seguir caminando \n ";
		std::cin >> re;
		system("CLS");
		if (re == 1) {
			Sleep(777);
			std::cout << "Narrador: Entras al portal y parece que llegaste a una especie de cueva. \n";
			Sleep(1500);
			std::cout << "Y parece que tienes una armadura, espada y un escudo junto con unos frascos raros.\n";
			Sleep(1500);
			std::cout << name << ": Donde estoy? \n";
			Sleep(1500);
			std::cout << "Narrador: Derrepente una melodia empieza a sonar y te resulta familiar. \n";
			Sleep(1500);
			std::cout << "Plin Plin Plom. \n";
			Sleep(1500);
			std::cout << "Plin Plin Plon Plin Plon\n";
			Sleep(1500);
			std::cout << name << ": Esa melodia yo la reconozco, No puede ser.\n";
			std::cout << "Narrador: una barra de vida empieza a aparecer parece que no tienes mas opcion que pelear. \n";
			std::cout << name << ": No me jodas me lo dices en serio? \n";
			std::cout << "Presione Enter para continuar: ";
			std::cin.ignore();
			std::cin.get();
			system("CLS");
			srand(time(NULL));
			while (PJ >= 1 && BOSS >= 1)
			{
				char actH;
				int defR;
				int atH;
				int healtH;
				std::cout << name << " HP: " << PJ << "\n";
				std::cout << "\nBOSS: \n" << "Gwyn Lord Of Cinder " << "HP: " << BOSS << "\n";
				std::cout << "\nEs tu Turno \n" << "Atk (A) \n" << "Def (D) \n" << "Estus (E) \n";
				std::cin >> actH;
				switch (actH)
				{
				case 'A':
				case 'a':
					std::cout << "\nElegiste Atacar \n";
					atH = (rand() % 5) + 15;
					BOSS = BOSS - atH;
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
					if (PJ >= 85)
					{
						PJ = 100;
						defR = 0;
					}
					if (PJ >= 71)
					{
						PJ = 90;
						defR = 0;
					}
					if (PJ <= 70)
					{
						healtH = (rand() % 15) + 15;
						PJ = PJ + healtH;
						defR = 0;
					}
					break;
				default:
					std::cout << "\nNo hiceste Nada \n";
				}
				std::cout << "\n" << name << " HP: " << PJ << "\n";
				std::cout << "\nBOSS \n" << "Gwyn Lord Of Cinder " << "HP: " << BOSS << "\n";
				std::cin.ignore();
				std::cout << "\nPresione Enter para continuar: " << "\n";
				std::cin.get();
				system("CLS");


				if (BOSS >= 1)
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
					std::cout << "\n" << name << " HP: " << PJ << "\n";
					std::cout << "\nBOSS: \n" << "Gwyn Lord Of Cinder " << "HP: " << BOSS << "\n";
					std::cout << "\nPresione Enter para continuar: " << "\n";
					std::cin.get();
					system("CLS");
				}
				if (BOSS <= 0)
				{
					std::cout << "Derrotaste a Gwyn Lord Of Cinder \n";
					std::cout << "Encendiste la hoguera \n" << "\nAhora eres un Lord Of Cinder \n";
					std::cout << "\nFINAL Souls \n";
				}
				if (PJ <= 0)
				{
					std::cout << "YYY    YYY   OOOO    UU    UU     DDDDD   IIIIIIII  EEEEEE  \n";
					std::cout << "  YY  YY   OO    OO  UU    UU     DD   D     II     EE      \n";
					std::cout << "    YY     OO    OO  UU    UU     DD    D    II     EEEE    \n";
					std::cout << "    YY     OO    OO  UU    UU     DD   D     II     EE      \n";
					std::cout << "    YY       OOOO      UUUU       DDDDD   IIIIIIII  EEEEEE  \n";
				}
			}
		}
		if (re == 2) {
			std::cout << "Narrador: WoW, no entraste al portal, quien no entra a un portal? \n";
			std::cout << name << ": Pues quizas porque no se a donde lleva y podria morir. \n";
			std::cout << "Narrador: Tienes un buen punto. \n";
			std::cout << "Continuas avanzando por la calle hasta que lleguas a Choques Mateos \n";
			std::cout << "Y un carro choca con otro y uno se dirige hacia ti que vas a hacer? \n";
			std::cout << "(1) esquivar el carro. \n" << "(2) Me llamaban Tony el Parrys. \n";
			std::cin >> bo;
			system("CLS");
			if (bo == 2) {
				std::cout << "Narrador: ESPERA QUEEEE? LE ACABAS DE HACER UN PARRY AL CARRO?\n";
				std::cout << name << ": Efectivamente. \n";
				std::cout << "Narrador: no hare preguntas, oh espera pare que alguien llego. \n";
				std::cout << "Al ver tu gran parry esta persona te ofrece el escudo de los escudos \n";
				std::cout << "Ahora podras ser de nuevo el gran Tony el parrys.\n";
				std::cout << "Es lo que te dice la persona. Que haras?\n";
				std::cout << "(1) Tomar el escudo. \n" << "(2) No tomarlo \n";
				std::cin >> re;
				system("CLS");
				if (re == 1) {
					std::cout << "Narrador: Tomas el escudo y ahora sientes el poder de hacer parrys incluso a los Dioses. \n";
					std::cout << "Asi que decides ir a comprobarlo y te pones a buscar a los Dioses para derrotarlos a puro Parry\n";
					std::cout << "\nFINAL PARRYS\n";
				}
				if (re == 2) {
					std::cout << "Narrador: Decides no tomarlo y continuar con tu camino. \n";
					std::cout << "Pero la tragedia te persigue tardaste tanto que ahora hay una neblina que te impide ver \n";
					std::cout << "Y ahora no sabes asi donde te dirijes. \n";
					std::cout << "\nFINAL LOST\n";
				}
			}
			if (bo == 1) {
				std::cout << "Narrador: Ole ole, como esquiva. \n";
				std::cout << name << ": alguna vez te dijieron que eres muy pesado? \n";
				std::cout << "Narrador: Claro, Pero aqui yo controlo los sucesos asi que calladito.\n";
				std::cout << "Despues de esquivar el carro continuas avanzando hasta que pasas aun lado de un bote de basura. \n";
				std::cout << "Y de el sale una persona. \n";
				std::cout << "Pibe de la basura: Lee The Boxer. \n";
				std::cout << "Narrador: Solo te dice eso y te avienta los tomas de The Boxer y se vuelve a meter al bote. \n";
				std::cout << "Asi que que decides hacer? \n" << "(1) No los voy a leer \n" << "(2) Vamos a Leerlo a ver que de que trata. \n";
				std::cin >> bo;
				system("CLS");
				if (bo == 1) {
					std::cout << "Narrador: Bueno nunca sabremos que decia. \n";
					std::cout << "Continuas con tu viaje y te encuentras con una campana. Que haces? \n";
					std::cout << "(1) Tocar la campana. \n" << "(2) Ignorarla y seguir avanzando. \n";
					std::cin >> re;
					system("CLS");
					if (re == 1) {
						std::cout << "Narrador: Tocas la campana y esta te hace tepe a Tokyo parecer mas precisos a Tokyo del 2004. \n";
						std::cout << "Un portal del cielo se abre y cae algo gigantesco todo se vuelve panico y caos un dragon tambie \n";
						std::cout << "llega del portal y parece que se esta peleando con la otra cosa lo unico que puedes eschuar son \n";
						std::cout << "Campanadas que realmente no puedes soportar el sonido. \n";
						std::cout << name << ": Hagan que pare. \n";
						std::cout << "Narrador: Fue lo primero que dices sin pensar, el dragon mato a la gran bestia y \n";
						std::cout << "detuvo las campanadas pero ahora la Fuerza area de japon ataco al dragon y lo mato \n";
						std::cout << "Al parecer alguin esba montado en el y unas particulas se empiezan a esparcir.\n";
						std::cout << "Algo muy grave para la humanidad esta apunto de pasar \n";
						std::cout << "\nFINAL E\n";
					}
					if (re == 2) {
						std::cout << "Narrador: Parece que ya no hay mas interrupciones y por fin llegaste a tu destino. \n";
						std::cout << "Y que es lo que tanto esbamos buscando? asi es. COMIDA\n";
						std::cout << "Ahora puedes sentarte y comer tranquilamente. \n";
						std::cout << "\nFINAL Tranquilo hasta el final\n";
					}
				}
				if (bo == 2) {
					std::cout << "Pasaste todo el tiempo leyendo The Boxer hasta que se hizo de noche y ahora te sientas miras hacia las estrellas. \n";
					std::cout << "Una persona se acerca con una sudadera amarilla y con pelo rubio y te dice esto: \n";
					std::cout << "J: Cuando el mundo te tire cuesta abajo, recuerda todas esas estrellas estan brillando para ti.\n";
					std::cout << "\nFINAL Manhwa \n";
				}
			}
		}
	}
	if (re >= 3) {
		std::cout << "Narrador: estas weon porque eliges una opcion inexistente\n";
		std::cout << "\nFINAL Opcion Invalida\n";
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
