#include <stdio.h>
#include <stdlib.h>
#include "../../include/point.h"
#include "../../include/derive.h"

void ecrire_ligne (struct sPoint p)
{
	FILE* fichier = NULL;
    fichier = fopen("Lorenz.dat", "a+");
    fprintf (fichier, "%f %f %f %f", p.temps, p.x, p.y, p.z);
    fclose(fichier);
}

void calcul_pos (struct sPoint p, struct sConst c, struct sPoint t)
{
	while (p.temps < c.Tmax)
	{
		ecrire_ligne(p); // On exporte dans Lorenz.dat la position du point contenu dans p
		p.temps=p.temps+c.dt; //On incrémente le temps pour le calcul du point suivant
		t.x = dxdt(p, c); // On calcule les coord. du point suivant dans la struc. temporelle
		t.y = dydt(p, c);
		t.z = dzdt(p, c);
		p.x = t.x ; //On les exporte dans la structure principale
		p.y = t.y ;
		p.z = t.z ;
	}
}