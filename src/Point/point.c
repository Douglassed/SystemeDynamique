#include <stdio.h>
#include <stdlib.h>
#include "../../include/point.h"

/*void demande(char *param)
{
	printf("Entrez %s : ",format)
	scanf("%f",c.format)
	printf("\n")
}*/

Const demande_const(Const c)
{
    printf("Entrez sigma : ");
    scanf("%f",&c.sigma);
    printf("\n");
    
    printf("Entrez ro : ");
    scanf("%f",&c.ro);
    printf("\n");
    
    printf("Entrez beta : ");
    scanf("%f",&c.beta);
    printf("\n");
    
    printf("Entrez dt : ");
    scanf("%f",&c.dt);
    printf("\n");
    
    printf("Entrez Tmax : ");
    scanf("%f",&c.Tmax);
    printf("\n");
    
    return c;
}

Point demande_point(Point p)
{
    printf("Entrez x : ");
    scanf("%f",&p.x);
    printf("\n");
    
    printf("Entrez y : ");
    scanf("%f",&p.y);
    printf("\n");
    
    printf("Entrez z : ");
    scanf("%f",&p.z);
    printf("\n");
    
    return p;
}
