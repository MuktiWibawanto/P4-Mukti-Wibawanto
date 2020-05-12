#include <iostream>
using namespace std ; 

int main (){
	int i,j ;
	int matriks1[2][2],matriks2[2][2],jumlah [2][2];
	cout << "SEBELUM DI TRANSPOSE"<<endl ;
	for (i=1 ; i<=2 ;i++){
		for(j=1 ; j<=2 ;j++){
			cout << "masukkan elemen"<<"["<<i<<"]["<<j<<"]= " ;
			cin >> matriks1[i][j];
		}
		}
		cout <<endl ;
			
		cout << "HASIL SEBELUM TRANSPOSE MATRIKS"<<endl ;
		for (i=1 ; i<=2 ;i++){
		for(j=1 ; j<=2 ;j++){
			cout<<"["<<matriks1[i][j]<<"]";
		}
		cout <<endl ;
		
	}
	cout << "HASIL SESUDAH TRANSPOSE MATRIKS"<<endl ;
		for (i=1 ; i<=2 ;i++){
		for(j=1 ; j<=2 ;j++){
			cout<<"["<<matriks1[j][i]<<"]";
		}
		cout <<endl ;
		}
	}
