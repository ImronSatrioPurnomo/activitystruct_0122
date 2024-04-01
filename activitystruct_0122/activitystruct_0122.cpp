#include <iostream>
using namespace std;

struct DetailAlamat {
	string desa;
	string kota;
};

struct Mahasiswa {
	string nim;
	string nama;
	string alamat;
	string umur;
};

int main() {
	Mahasiswa mhs[3];
	for (int i = 0; i < 3; i++) {

	}

	cout << endl;
	cout << "\n NIM : " << mhs.nim;
	cout << "\n Nama : " << mhs.nama;
	cout << "\n Alamat : ";
	cout << "\n \t Desa : " << mhs.alamat.desa;
	cout << "\n \t Kota : " << mhs.alamat.kota;
	cout << "\n Umur : " << mhs.umur;
}