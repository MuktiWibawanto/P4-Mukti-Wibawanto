#include <iostream>
using namespace std;

main (){
	cout<<"Nama     :Mukti Wibawanto"<<endl;
	cout<<"Nim      :F1B019104"<<endl;
	cout<<"Kelompok :21"<<endl;

	char matrik1 [3][3][3];
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j=0; j<3; j++)
		{
			cout << "Masukkan nilai matrik " << i << "," << j << " = ";
			cin >> matrik1[i][j];
		}
	}
	cout << endl;
	cout<<"Nilai matrik dengan array 3 dimensi = "<<endl;
	for (i=0; i< 3; i++){
		for (j = 0; j < 3; j++){

			cout<<matrik1[i][j]<<" ";
		}
		cout << endl;
	}
}
