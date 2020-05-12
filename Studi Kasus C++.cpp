#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std ;

float hadir,tugas,quis,uts,uas,data,kehadiran ; 
char jeneng[20][100],nim[20][100] ;
int TURBO[16],masuk[1],nilaiuts[1],nilaiuas[1],nilaiquis[1],nilaitugas[15] ;
int i,j,k,l,m ;

	void name(){
		cout<<"WELCOME TO  PENILAIAN MAHASISWA TEKNIK\n";
		cout<<"-------Universitas Mataram-------------\n";
		cout<<"--------------------------------------\n";
		
cout<<"MASUKKAN JUMLAH DATA YANG AKAN DIINPUT(minimal 10) = "  ;
 	      cin >> data ;
		for (i=1; i<=data;i++) {
		cout<<"Masukkan nama         : " ;
		cin >> jeneng[i] ;
		cout<<"Masukkan NIM          : " ;
		cin >>nim[i]  ;
		cout<<"Masukkan kehadiran    : " ;
		cin >>masuk[i] ;
		cout<<"Masukkan nilai tugas  : " ;
		cin>>nilaitugas[i] ;
		cout<<"Masukkan nilai kuis   : ";
		cin >>nilaiquis[i] ;
		cout<<"Masukkan nilai uts    : " ;
		cin >>nilaiuts[i] ;
		cout<<"Masukkan nilai uas    : " ;
		cin >>nilaiuas[i] ;
		cout<<endl ;
	}
	cout<<endl ;
	system("cls");
}
void susunan() {
	for (i=1 ; i<=data ;i++){
	    cout<<setiosflags (ios::left)<<"|"<<setw (3)<<i;
        cout<<setiosflags (ios::left)<<"|"<<setw (14)<<jeneng[i];
        cout<<setiosflags (ios::left)<<"|"<<setw (9)<<nim [i];
        cout<<setiosflags (ios::left)<<"|"<<setw (11)<<masuk [i];
         cout<<setiosflags (ios::left)<<"|"<<setw (7)<<nilaitugas [i];
        cout<<setiosflags (ios::left)<<"|"<<setw (6)<<nilaiquis[i];
        cout<<setiosflags (ios::left)<<"|"<<setw (5)<<nilaiuts [i];
        cout<<setiosflags (ios::left)<<"|"<<setw (5)<<nilaiuas [i];
 TURBO[i] = (hadir/100)*masuk[i] + (tugas/100)*nilaitugas[i] + (quis/100)*nilaiquis[i]+ (uts/100)*nilaiuts[i]+(uas/100)*nilaiuas[i];
	        	if (TURBO[i]>=80){
		     cout<<setprecision (5) <<"|"<<" A  |";}
            else if (TURBO[i]>=70){
                 cout<<setprecision (5) <<"|"<<" B  |";}
            else if (TURBO[i]>=59){
                 cout<<setprecision (5) <<"|"<<" C  |";}
            else if (TURBO[i]>=50){
                 cout<<setprecision (5) <<"|"<<" D  |";}
            else if (TURBO[i]<50){
                 cout<<setprecision (5) <<"|"<<" E  |";}
        cout<<endl ;
}
	cout<<endl ;
}
void belakang(){
cout <<"|*********************************************************************** |\n" ;
cout<< "|   |              |         |              DAFTAR NILAI                 |\n" ;
cout<< "|No |      Nama    |   NIM   |===========================================|\n" ;
cout<< "|   |              |         | Kehadiran | Tugas | Kuis | UTS | UAS | NA |\n" ;
cout<< "|------------------------------------------------------------------------|\n";

}
void tampilan ()
{
    cout<<"|============================================|\n" ;
    cout<<"|==PROGRAM MENGHITUNG NILAI AKHR MAHASISWA===|\n" ;
    cout<<"|======MATA KULIAH DASAR TELEKOMUNIKASI======|\n" ;
    cout<<"|============================================|\n";
    cout<<"|JUMLAH SKS : 3                              |\n" ;
    cout<<"|============================================|\n" ;
    cout<<"|NILAI PERSENTASE KEHADIRAN(%) = ";
    cin>> hadir ;
	cout<<"|NILAI PERSENTASE TUGAS (%)    = ";
	cin>> tugas; 
	cout<<"|NILAI PERSENTASE KUIS(%)      = ";
	cin>> quis ;
	cout<<"|NILAI PERSENTASE UTS(%)       = ";
	cin>> uts ;
	cout<<"|NILAI PERSENTASE UAS(%)       = ";
	cin>> uas ;
	cout<<"|============================================|\n";
	cout<<"|JUMLAH KEHADIRAN  = 14                      |\n";
	cout<<"|============================================|\n";
	cout<<endl ;
}
int main () {
	name() ;
	tampilan() ;
	belakang() ;
	susunan() ; 
	cout <<"|*********************************************************************** |\n" ;
	system("pause") ;
	}
