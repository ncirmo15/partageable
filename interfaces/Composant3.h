#pragma once
#ifndef COMPOSANT3_H
#define COMPOSANT3_H

#ifdef COMPOSANT3_EXPORTS
	#define COMPOSANT3_INTERFACE __declspec(dllexport)
#else
	#define COMPOSANT3_INTERFACE __declspec(dllimport)
#endif

// declaration des fonctions internes
COMPOSANT3_INTERFACE int addition_interne(int a1, int a2);

// interface du composant3
COMPOSANT3_INTERFACE int composant3(int p1, int p2);

COMPOSANT3_INTERFACE char * getComposant3Version(void);
#endif
