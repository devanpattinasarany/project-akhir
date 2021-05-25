#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <sstream>
using namespace std;


string convertInt(int);

int main(){
	string nama_mahasiswa[10],ket[10], nama_petugas,konvert;
	int total[1000],p_1[1000],p_2[1000],p_3[1000],p_4[1000],sisa[1000],kelebihan[10],jumlah_mhs,jumlah_uang;
	
	cout << "program pembayaran uang semester" << endl << endl;
	cout << "Masukan Nama Petugas : ";
	cin >> nama_petugas;
	cout << "Masukan Jumlah Mahasiswa :";
	cin >> jumlah_mhs;
	cout << endl << endl;
	
	for(int i = 0; i < jumlah_mhs; i++){
		cout << "Data ke-" << i+1 << endl;
		cin.ignore();
		cout << "Nama Mahasiswa     : ";
		getline(cin,nama_mahasiswa[i]);
		cout << "Total Biaya kuliah : ";
		cin >> total[i];
		cout << "Pembayaran 1       : ";
		cin >> p_1[i];
		cout << "Pembayaran 2       : ";
		cin >> p_2[i];
		cout << "Pembayaran 3       : ";
		cin >> p_3[i];
		cout << "Pembayaran 4       : ";
		cin >> p_4[i];
		
		jumlah_uang = p_1[i] + p_2[i] + p_3[i] + p_4[i];
		
		cout << endl;
	}
	
	
	
	
	
	
	
	cout << "===============================================================================================================================================\n";
	cout << "| NO |      NAMA MAHASISWA      | TOTAL BIAYA KULIAH | PEMBAYARAN-1 | PEMBAYARAN-2 | PEMBAYARAN-3 | PEMBAYARAN-4 |   SISA   |       KET       |\n";
	cout << "===============================================================================================================================================\n";
	
	for (int i = 0; i < jumlah_mhs; i++){
		sisa[i] = total[i] - (p_1[i] + p_2[i] + p_3[i] + p_4[i]);
		if ( sisa >= total){
			sisa[i] = 0;
		}
		
			if (jumlah_uang == total[i]){
		ket[i] = "LUNAS";
		} else if(jumlah_uang < total[i]){
			ket[i]= "MENUNGGAK";
		} else {
			kelebihan[i] = sisa[i] * -1;
			 konvert= convertInt(kelebihan[i]);
			ket[i] = "LUNAS(" + konvert + ")";
		}
		
		
		cout << "| " << setiosflags(ios::left) << setw(3) << i+1 <<"|";
		cout << " " << setiosflags(ios::left) << setw(25) << nama_mahasiswa[i] << "|";
		cout << " " << setiosflags(ios::left) << setw(19) << total[i] << "|";
		cout << " " << setiosflags(ios::left) << setw(13) << p_1[i] << "|";
		cout << " " << setiosflags(ios::left) << setw(13) << p_2[i] << "|";
		cout << " " << setiosflags(ios::left) << setw(13) << p_3[i] << "|";
		cout << " " << setiosflags(ios::left) << setw(13) << p_4[i] << "|";
		cout << " " << setiosflags(ios::left) << setw(9) << sisa[i] << "|";
		cout << " " << setiosflags(ios::left) << setw(12) << ket[i] << "|";	
	cout << "\n===============================================================================================================================================\n";
	}
	
	cout << konvert ;
	
	cin.get();
	return 0;
}


string convertInt(int number){
    stringstream ss;
    ss << number;
    return ss.str();
}
