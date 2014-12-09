#include <csimple.h>
debut

	entier_long f=1;
	entier n,i;
	ecrire_format("entrer n : ");
	lire_format("%d",&n);
	i=n;
	tantque(i>1)
		f*=i--;
	
	ecrire_format("factoriel(%d) = %ld \n",n,f);

fin
