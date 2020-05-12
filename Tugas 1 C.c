#include <stdio.h>1
#include <string.h>

float hadir,tugas,kuis,uts,uas,data,kehadiran ; 
char jeneng[20][100],nim[20][100] ;
float TURBO[16],nilaihadir[1],nilaiuts[1],nilaiuas[1],nilaikuis[1],nilaitugas[15] ;
int i ;
	void name(){
		printf("WELCOME TO  PENILAIAN MAHASISWA TEKNIK\n");
		printf("-------Universitas Mataram-------------\n");
		printf("--------------------------------------\n");
		printf("\n");
		
	    printf("MASUKKAN JUMLAH DATA YANG AKAN DIINPUT = " );
	    scanf("%f",&data) ;
		for (i=1; i<=data;i++) {
		printf("Masukkan nama         : ");
		scanf("%s",&jeneng[i]) ;
		printf("Masukkan NIM          : ");
		scanf("%s",&nim[i]) ;
		printf("Masukkan kehadiran    : " ) ;
	    scanf("%f",&nilaihadir[i]) ;
		printf("Masukkan nilai tugas  : ");
		scanf("%f",&nilaitugas[i] );
		printf("Masukkan nilai kuis   : ") ;
		scanf("%f",&nilaikuis[i]) ;
		printf("Masukkan nilai uts    : ");
		scanf ("%f",&nilaiuts[i]) ;
		printf ("Masukkan nilai uas   : " );
		scanf("%f",&nilaiuas[i] );
		printf ("\n") ;}
}

void susunan() {
	for (i=1 ; i<=data ;i++){
	printf("|%-3d|",i);
	printf("%-14s|",jeneng[i]);
	printf("%-9s|",nim[i]);
	printf("%-11.0f|",nilaihadir[i]);
	printf("%-7.0f|",nilaitugas[i]);
	printf("%-6.0f|",nilaikuis[i]);
	printf("%-5.0f|",nilaiuts[i]);
	printf("%-5.0f|",nilaiuas[i]);
 TURBO[i] = ((hadir/100)*nilaihadir[i]) + ((tugas/100)*nilaitugas[i]) + ((kuis/100)*nilaikuis[i]) + ((uts/100)*nilaiuts[i]) + ((uas/100)*nilaiuas[i]);
	      if (TURBO[i]>=80){
		printf("A   |");}
            else if (TURBO[i]>=70){
            printf("B   |");}
            else if (TURBO[i]>=59){
            printf("C   |");}
            else if (TURBO[i]>=50){
            printf("D   |");}
            else {
            printf("E   |");}
        printf("\n");}}
	
	      

  

void belakang(){
printf("|************************************************************************|\n");
printf("|   |              |         |              DAFTAR NILAI                 |\n");
printf("|No |      Nama    |   NIM   |===========================================|\n");
printf("|   |              |         | Kehadiran | Tugas | Kuis | UTS | UAS | NA |\n") ;
printf("|------------------------------------------------------------------------|\n");}
void tampilan (){
      printf("|============================================|\n");
      printf("|  PROGRAM MENGHITUNG NILAI AKHR MAHASISWA   |\n");
      printf("|      MATA KULIAH DASAR TELEKOMUNIKASI      |\n");
      printf("|============================================|\n");
	printf("|JUMLAH SKS : 3                              |\n");
	printf("|============================================|\n");
	printf("|JUMLAH KEHADIRAN  = 14                      |\n");
	printf("|============================================|\n");
	printf("NILAI PERSENTASE KEHADIRAN(%%) = ") ;
	scanf("%f",&hadir) ;
	printf("NILAI PERSENTASE TUGAS (%%)    = ") ;
	scanf("%f",&tugas); 
	printf("NILAI PERSENTASE KUIS(%%)      = ");
	scanf("%f",&kuis) ;
	printf("NILAI PERSENTASE UTS(%5)       = ");
	scanf("%f",&uts);
	printf("NILAI PERSENTASE UAS(%%)       = ") ;
	scanf ("%f",&uas) ;
	printf ("\n");
}
int main () {
	name() ;
	tampilan() ;
	belakang() ;
	susunan() ; 
 printf("|************************************************************************|\n");
	}
