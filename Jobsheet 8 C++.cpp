#include <iostream>
using namespace std ; 

int main (){
	int i ;
	int matriks[14] ;
	cout<<"Nama :Mukti wibawanto\n";
    cout<<"NIM : F1B019104\n";
	cout<<"Kelompok :21\n";
	 for (i=1 ; i<=14 ;i++){
	 	cout << "Masukkan nilai ke-" << i<< " = " ;
	 	cin >> matriks[i] ;
	 }
	 cout <<endl ; 
	  for (i=1 ; i<=14 ;i++){
	 	cout << "Nilai ke-" << i<< " = "<< matriks[i] <<endl ;
	 	
	 }
}
