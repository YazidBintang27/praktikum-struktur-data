#include <iostream>

using namespace std;

int main(){
	
	struct mahasiswa{
		string nim;
		int umur;
		string nama;
	}mhs;
	
	cout << "Masukkan Nama : ";
	cin >> mhs.nama;
	cout << "Masukkan NIM : ";
	cin >> mhs.nim;
	cout << "Masukkan Umur : ";
	cin >> mhs.umur;
	
	cout << "\nNama : " << mhs.nama << endl;
	cout << "NIM : " << mhs.nim << endl;
	cout << "Umur : " << mhs.umur << " tahun" << endl;
	
	return 0;
}
