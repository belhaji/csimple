#include <csimple.h>
#include <math.h>
debut

	entier nombre,diviseur;
	ecrire_format("enter un nombre : ");
	lire_format("%d",&nombre);
	si(nombre == 2)
		ecrire_format("le nombre %d est premier\n",nombre);
	sinon{

		diviseur=2;
		tantque(nombre % diviseur != 0 &&  diviseur <= sqrt(nombre)){
			diviseur++;
		}
		si(nombre % diviseur)
			ecrire_format("le nombre %d est premier\n",nombre);
		sinon
			ecrire_format("le nombre %d n'est pas premier\n",nombre);

	}	
	

fin