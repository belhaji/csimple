#include <csimple.h>
debut
	entier i,j,tab[10][10];
	pour(i=0;i<10;i++){
		pour(j=0;j<10;j++){
			ecrire_format("donner la valeur de t[%d][%d]] : ",i,j);
			lire_format("%d",&tab[i][j]);
		}
	}
	pour(i=0;i<10;i++){
		pour(j=0;j<10;j++){
			ecrire_format("%d\t",tab[i][j]);
		}
		ecrire_format("\n");
	}
fin