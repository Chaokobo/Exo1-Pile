#pragma once
class pile_entier
{
	int *pile, taille, hauteur;
public:
	pile_entier(int taille);
	~pile_entier();
	void empile(int valeur);
	int depile();
	int pleine();
	int vide();
};

