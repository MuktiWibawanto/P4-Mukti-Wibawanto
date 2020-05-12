#include <stdio.h>

int main (){
	int i,j ;
	int matriks[3][3] ;
	printf ("MATRIKS 1\n") ;
	for (i=1 ; i<=2 ;i++){
		for(j=1 ; j<=2 ;j++){
			printf("masukkan elemen [%d][%d] = ",i,j );
			scanf ("%d",&matriks[i][j]);
		}
		}
		printf("\n") ;
			printf ("MATRIKS SEBELUM TRANSPOSE\n") ;
	for (i=1 ; i<=2 ;i++){
		for(j=1 ; j<=2 ;j++){
			printf("[%d]",matriks[i][j]);
		}
		printf("\n") ;
		}
printf ("MATRIKS SESUDAH TRANSPOSE\n") ;
	for (i=1 ; i<=2 ;i++){
		for(j=1 ; j<=2 ;j++){
			printf("[%d]",matriks[j][i]);
		}
		printf("\n") ;
		}
}
