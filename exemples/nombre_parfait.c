#include <csimple.h>
#include <math.h>
debut
	entier diviseur,n,somme=1;
	faire{
		ecrire_format("combien de nombre premier vous voulez: ");
		lire_format("%d",&n);
	}tantque(n < 0);
	diviseur=2;
	tantque(diviseur <= n/2){
		si(n % diviseur==0)
			somme+=diviseur;	
		diviseur++;
	}
	si(somme == n)
		ecrire_format("%d est un nombre parfait\n",n);
	sinon
		ecrire_format("%d n'est pas un nombre parfait\n",n);
fin