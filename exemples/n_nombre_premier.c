#include <csimple.h>
#include <math.h>
debut

	entier nombre=3,diviseur,n;
	faire{
		ecrire_format("combien de nombre premier vous voulez: ");
		lire_format("%d",&n);
	}tantque(n < 1);
		ecrire_format("2\n");
		n--;
	tantque(n >= 1){
		diviseur=2;
		tantque(nombre % diviseur != 0 &&  diviseur <= sqrt(nombre)){
			diviseur++;
		}
		si(nombre % diviseur){
			ecrire_format("%d\n",nombre);
			n--;
		}
		nombre += 2;
	}
fin