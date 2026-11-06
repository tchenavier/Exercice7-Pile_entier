#include <iostream>
#include "pile_entier.h"
using namespace std;

void test()
{
	int max = 18;
	int retour;
	pile_entier Un(max);
	retour = Un.vide();
	cout << "la valeur de vide est " << retour << "\n";
	Un.empile(80);
	Un.empile(85);
	Un.empile(65);
	retour = Un.depile();
	cout << "la valeur de depile est " << retour << "\n";
	Un.empile(80);
	retour = Un.pleine();
	cout << "la valeur de pleine est " << retour << "\n";
}

int main()
{
	test();

}