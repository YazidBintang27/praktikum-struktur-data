#include <iostream>

using namespace std;

int main(){
	
	struct tanggal{
		int hari;
		int bulan;
		int tahun;
	}masuk;
	
	struct alamat{
		string jalan, kota;
	}tinggal;
	
	struct {
		string nama;
		tanggal masuk;
		alamat tinggal;
		int gaji;
	}karyawan = {"Yazid", 27, 11, 23, "Jalan 27", "Tangerang", 12000000};
	
	cout << "Nama : " << karyawan.nama << endl;
	cout << "Tanggal Masuk : " << karyawan.masuk.hari << " " << karyawan.masuk.bulan << " " << karyawan.masuk.tahun << endl;
	cout << "Alamat : " << karyawan.tinggal.jalan << " " << karyawan.tinggal.kota << endl;
	cout << "Gaji : " << karyawan.gaji << endl;
	
	return 0;
}
