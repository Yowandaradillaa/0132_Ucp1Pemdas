#include <iostream>
using namespace std;

int main() {
	int a[75];
	float indeks, nilai, jumlah, rerata;
	string status;
	string kota;

	cout << "Masukan indeks tingkat polutan = ";
	cin >> indeks;
	cout << "Masukan nilai sensor  = ";
	cin >> nilai;

	rerata = (indeks+nilai) / 2;

	if (rerata >= 75) {
		status = "Sehat jalur rerata";
	}
	else if (indeks <= 75) {
		status = "Tidak sehat karena tingkat polutan yang tinggi";
	}
	else
	{
		status = "Tidak sehat";
	}

	cout << "Statusnya adalah " << status << endl;

	cout << "Masukan Nama kota :  ";
	cin >> kota;
	cout << "Masukan status sebenarnya :  ";
	cin >> status;

	char pilihan;
	do {
		string status;
		cout << "Masukan status = ";
		cin >> status;

		cout << "Apakah anda ingin mengulangi lagi (y/n)?";
		cin >> pilihan;

	} while (pilihan == 'y' || pilihan == 'Y');

}

//1. int a[75]
// float indeks, jumlah, rerata
// string status
//2. - prosedur : void input {
//cout << "Bilangan Pertama = ";
//cin >> a;
//cout << "Bilangan Kedua = ";
//cin >> b;
//}
// - fungsi : 
// int Penjumlahan(int bil_1, int bil_2) {
//return bil_1 + bil_2;
//}
//3. for (i = 0; i < 6; i++) {
//cout << i << ". " << "Nama saya adalah Yowanda" << endl;
//}
//4. rerata = jumlah / data;
//if (rerata <= 75) {
	//status = "Sehat jalur rerata";
//}
//else if (polutan >= 75) {
	//status = "Tidak sehat karena tingkat polutan yang tinggi";
//}
//else
//{
	//status = "Tidak sehat";
//}
//cout << "Statusnya adalah " << status << endl;
//5. struct dokter {
//string nip;
//string nama;
//string jenis kelamin;
//int umur;
//};


