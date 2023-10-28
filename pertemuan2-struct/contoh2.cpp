#include <iostream>

using namespace std;

void output(string nama, string nim, string prodi, int sks, int program, int var, int tetap){
	cout << "\nOUTPUT" << endl;
	cout << "Nama : " << nama << endl;
	cout << "NIM : " << nim << endl;
	cout << "Prodi : " << prodi << endl;
	cout << "Program : " << program << endl;
	cout << "Jumlah SKS : " << sks << endl;
	cout << "SPP Tetap : " << tetap << endl;
	cout << "SPP Variabel : " << var << endl;
}

int main(){
	
	int var, tetap;
	
	struct spp_mahasiswa{
		string nama, nim, prodi;
		int sks, program;
	}spp;
	
	cout << "Masukkan Nama : ";
	cin >> spp.nama;
	cout << "Masukkan NIM : ";
	cin >> spp.nim;
	cout << "Masukkan Prodi : ";
	cin >> spp.prodi;
	cout << "Masukkan Program (1 = D3, 2 = S1) : ";
	cin >> spp.program;
	
	if(spp.program != 1 && spp.program != 2){
		cout << "Program tidak sesuai" << endl;
	}else{
		cout << "Masukkan jumlah SKS : ";
		cin >> spp.sks;
		
		if(spp.program == 1){
			tetap = 500000;
			var = spp.sks * 25000;
		}else{
			tetap = 750000;
			var = spp.sks * 50000;
		}
		
	output(spp.nama, spp.nim, spp.prodi, spp.sks, spp.program, var, tetap);
	
	}
	
	return 0;
}
