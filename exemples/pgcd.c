#include <csimple.h>
debut

	entier a,b,r;
	ecrire_format("ebter a et b : ");
	lire_format("%d %d",&a,&b);
	si(a<b){
		a=a+b;
		b=a-b;
		a=a-b;
	}
	r=a%b;
	tantque(r != 0){
		a=b;
		b=r;
		r=a%b;
	}
	ecrire_format("PGCD = %d\n",b);

fin