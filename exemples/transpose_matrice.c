#include <csimple.h>
#define N 50
#define L 50
debut

	entier tab[3][2],i,j;
	pour(i=0;i<3;i++){
		pour(j=0;j<2;j++){
			ecrire_format("donner la valeur de t[%d][%d]] : ",i,j);
			lire_format("%d",&tab[i][j]);
		} 
	}


fin