#include <csimple.h>
debut

	entier tab[5][5],i,j,somme=0;
	pour(i=0;i<5;i++){
		pour(j=0;j<5;j++){
			ecrire_format("donner la valeur de t[%d][%d]] : ",i,j);
			lire_format("%d",&tab[i][j]);
		}
	}
	pour(i=0;i<5;i++){
		somme += tab[i][i];
	}


fin