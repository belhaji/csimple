#include <csimple.h>
#define N 5
debut
	entier t[N],i;
 	pour ( i = 0; i < N ; ++i)
 	{
 		ecrire_format("donner la %d valeur : ", i+1);
 		lire_format("%d",t+i);
 	}
 	pour ( i = 0; i < N ; ++i)
 	{
 		ecrire_format("la %d veleur du tableau est %d \n", i+1,*(t+i));
 		
 	}

fin