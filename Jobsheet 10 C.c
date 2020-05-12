#include <stdio.h>
#include <stdlib.h>
int main (){
printf ("Nama : Mukti Wibawanto\n");
printf ("NIM : F1B019104\n");
printf ("Kelompok : 21\n");

	char matrik1 [3][3][3];
	int i, j, hasil [3][3];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Masukkan nilai matrik %i,%i = ", i, j);
	scanf("%s", &matrik1[i][j]);
		}
	}
	printf("\n");
	printf("Nilai matrik dengan array 3 dimensi = \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
		hasil [i][j] = atoi (matrik1[i][j]); 
		printf("%i ", hasil[i][j]);
	}
		printf("\n");
	}
}
