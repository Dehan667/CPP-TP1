#include <iostream>
#include <conio.h>
#include "pile_entier.h"

class pile_entier
{
	int *pile, taille = 20, hauteur; // pointeur sur les valeurs de la pile, taille maximum, hauteur actuelle
	pile_entier(int); // constructeur, taille de la pile, 20 par defaut, initialise la hauteur à 0 alloue dynamiquement de la place mémoire
	~pile_entier();
	void empile(int);
	int depile();
	int pleine();

	int vide();
	{
		if (taille == 20)
		{
			hauteur == 0;
		}
	}
	~pile_entier(); // destructeur-libère la pile
	{
		delete pile;
	}

	void empile(int); // ajoute un élement à la pile
	{
		std::cout << "Ajouter un element : \n ";
	}
	int depile(); // retourne la valeur de l’entier inséré en dernier, la hauteur diminue de 1 unité
	{

	}

	int pleine(); // retourne 1 si la pile est pleine, 0 sinon
	{
		return 1;
	}
	int vide(); // retourne 1 si la pile est vide, 0 sinon
	{
		if (pile != 0)
		{
			std::cout << "La pile est vide\n";
			return 1;
		}
		else
		{
			std::cout << "La pile n'est pas vide\n";
			return 0;
		}
	}
};
};