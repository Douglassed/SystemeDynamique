#include <stdio.h>
#include <stdlib.h>
#include "../../include/point.h"

//FONCTIONS COMMUNES AUX DEUX SYSTEMES

void ecrire_ligne (struct sPoint p)
{
	FILE* fichier = NULL;
    fichier = fopen("Lorenz.dat", "a+");
    fprintf (fichier, "%f %f %f %f \n", p.temps, p.x, p.y, p.z);
    fclose(fichier);
}

void init_fichier ()
{
	FILE* fichier = NULL;
    fichier = fopen("Lorenz.dat", "w+");
    fclose(fichier);
}

// INTERACTIONS DE LORENZ

float dxdtl (struct sPoint p, struct sConst c)
{
	float res;
	res= p.x+(c.sigma*(p.y-p.x))*c.dt;
	return res;
}

float dydtl (struct sPoint p, struct sConst c)
{
	float res;
	res= p.y+(p.x*(c.ro-p.z)-p.y)*c.dt;
	return res;
}

float dzdtl (struct sPoint p, struct sConst c)
{
	float res;
	res= p.z+(p.x*p.y - c.beta*p.z)*c.dt;
	return res;
}

void calcul_posl (struct sPoint p, struct sConst c, struct sPoint t)
{
	while (p.temps < c.Tmax)
	{
		ecrire_ligne(p); // On exporte dans Lorenz.dat la position du point contenu dans p
		p.temps=p.temps+c.dt; //On incrémente le temps pour le calcul du point suivant
		t.x = dxdtl(p, c); // On calcule les coord. du point suivant dans la struc. temporelle
		t.y = dydtl(p, c);
		t.z = dzdtl(p, c);
		p.x = t.x ; //On les exporte dans la structure principale
		p.y = t.y ;
		p.z = t.z ;
	}
}

//ATTRACTEUR DE ROSSLER
// sigma = a, ro = b, beta = c
float dxdtr (struct sPoint p, struct sConst c)
{
	float res;
	res= p.x+(-p.y-p.z)*c.dt;
	return res;
}

float dydtr (struct sPoint p, struct sConst c)
{
	float res;
	res= p.y+(p.x+(c.sigma*p.y))*c.dt;
	return res;
}

float dzdtr (struct sPoint p, struct sConst c)
{
	float res;
	res= p.z+(c.ro+p.z*(p.x-c.beta))*c.dt;
	return res;
}

void calcul_posr (struct sPoint p, struct sConst c, struct sPoint t)
{
	while (p.temps < c.Tmax)
	{
		ecrire_ligne(p); // On exporte dans Lorenz.dat la position du point contenu dans p
		p.temps=p.temps+c.dt; //On incrémente le temps pour le calcul du point suivant
		t.x = dxdtr(p, c); // On calcule les coord. du point suivant dans la struc. temporelle
		t.y = dydtr(p, c);
		t.z = dzdtr(p, c);
		p.x = t.x ; //On les exporte dans la structure principale
		p.y = t.y ;
		p.z = t.z ;
	}
}