#include <iostream>
#include <string>
using namespace std;
class mahasiswa {
private:
	int nim;
	string nama;

public:
	void inputdata() {
		cout << "Masukkan NIM : ";
		cin >> nim;
		cout << "Masukkan Nama : ";
		cin >> nama;
	}
	void tampildata() {
		cout << "\nNIM : " << nim << endl;
		cout << "Nama : " << nama << endl;
	}

};
const int MAX_MAHASISWA = 100;

int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;

//isi disini
void tambahMahasiswa();
mahasiswa inputdata();
void tampilkanSemuaMahasiswa();
//isi disini
void algorithmacariMahasiswaByNIM();
//isi disini
void algorithmaSortByTahunMasuk();
int main() {
	mahasiswa mhs;
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			mhs.inputdata();
			break;
		case 2:
			mhs.tampildata();
			break;
		case 3:
			algorithmacariMahasiswaByNIM();
			break;
		case 4:
			algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}

// 2. Binary Search , array 
// 3. stack menggunakan (LIFO) Last In First Out mengambil data diakhir dan insert yang terakhir yang akan dihapus, ada pop dan push
//	  Queue menggunaka (FIFO) First In First Out  menggunakan circular linear insert element di rear end dan delete front end queue
// 4. kiata meneggunakan algoritma stack saat ingin membuat program UNDO list word document, evaluating expressions, impelementing function calls
// 5. a. kedalamannya 5
//	  b. Preorder Traversal : 25, 20, 10, 5, 1, 22, 12, 8, 15, 36, 30, 28, 40, 38, 48, 45, 50
