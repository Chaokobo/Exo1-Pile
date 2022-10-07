#include "pile_entier.h"
#include <iostream>

pile_entier::pile_entier(int taille = 20)
{
	hauteur = 0;
	this->taille = taille;
	pile = new int[taille];
}

pile_entier::~pile_entier()
{
	delete pile;
}

void pile_entier::empile(int valeur)
{
	pile[hauteur] = valeur;
	hauteur += 1;
}

int pile_entier::depile()
{
	int dernier = pile[hauteur-1];
	hauteur--;
	std::cout << "La derniere valeur est " << dernier << std::endl;
	return dernier;
}

int pile_entier::pleine()
{
	if (hauteur >= taille)
	{
		std::cout << "La pile d'entiers est pleine" << std::endl;
		return 1;
	}
	else
	{
		std::cout << "La pile d'entiers n'est pas pleine" << std::endl;
		return 0;
	}
}

int pile_entier::vide()
{
	if (hauteur <= 0)
	{
		std::cout << "La pile est vide" << std::endl;
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	pile_entier pile;
	int j = 5;
	pile.vide();
	for (int i = 0; i < 20; i++)
	{
		pile.empile(j);
		std::cout << j << std::endl;
		j += 1;
	}
	pile.pleine();
	pile.depile();
	pile.pleine();
	pile.vide();
}