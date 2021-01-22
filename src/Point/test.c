#include <stdio.h>
#include <stdlib.h>
#include "../../include/point.h"
#include "../../include/derive.h"

int main(void)
{
	Point p;
	Point t;
	Const c;
	int choix;
	printf ("choisissez votre système dynamique: tappez 1 pour Lorenz, tappez 2 pour Rössler\n");
	scanf ("%d",&choix);
	if (choix==1 || choix==2)
	{
		c=demande_const(c);
		p=demande_point(p);
		//printf("%f %f %f\n",c.sigma,c.ro,c.beta);
		//printf("%f %f %f\n",p.x, p.y, p.z);
		//printf("%f %f\n",c.dt, c.Tmax);
		printf ("saisie enregistree\n");
		init_fichier();
		if (choix == 1){
			calcul_posl (p, c, t);}
		else {
			calcul_posr (p,c,t);
		}
		system ( "gnuplot -persist ./Lorenz.gnu");
	}
	else
	{
		printf ("Vous n'avez pas saisi un numéro correct. Veuillez relancer le programme et ré-essayer.");
	}

	
	return 0;
}