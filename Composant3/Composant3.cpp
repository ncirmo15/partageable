// Composant3.cpp : définit les fonctions exportées pour l'application DLL.
//

#include "stdafx.h"
#include "Composant3.h"
#include "Composant3Version.h"




int addition_interne(int a1, int a2)
{
	return a1+a2;
}

char * getComposant3Version()
{
	return "Composant 3 version " COMPOSANT_VERSION_STR;
}

