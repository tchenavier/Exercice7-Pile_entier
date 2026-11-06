#include "pile_entier.h"
#include <iostream>
using namespace std;

pile_entier::pile_entier(int max = 20)
{
	if (max == 0)
	{
		taille = 20;
	}
	else
	{
		taille = max;
	}
	hauteur = 0;

	pile = new int[taille];

}

pile_entier::~pile_entier()
{
	delete pile;
	taille = 0;
	hauteur = 0;
}

void pile_entier::empile(int val)
{
	hauteur++;
	if (hauteur <= taille)
	{
		pile[hauteur] = val;
		cout << "Hauteur " << hauteur << "\n";
	}
	else
	{
		cout << "Erreur"<<"\n";
	}
}

int pile_entier::depile()
{
	int valeur = 0;
	valeur = pile[hauteur];
	hauteur--;
	cout << "Hauteur " << hauteur << "\n";
	return valeur;
}

int pile_entier::pleine()
{
	if (hauteur == taille)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int pile_entier::vide()
{
	if (taille == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
