#pragma once
#include <iostream>

class pile_entier
{
public:

	void empile(int);
	int depile();
	int pleine();
	int vide();

private:
	int* pile, taille, hauteur;
};
