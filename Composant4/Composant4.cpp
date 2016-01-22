
#include "Composant4.h"
#include "Composant4Version.h"



// declaration des fonctions internes
int addition_interne(int a1, int a2);


int composant4(int p1, int p2)
{
	return addition_interne(p1, p2);
}

int addition_interne(int a1, int a2)
{
return a1+a2;
}

char * getComposant4Version()
{

	return "Composant 4 version " COMPOSANT_VERSION_STR;

}
