#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	
	int n;
	float nilai_tugas[10];
	float nilai_uts[10];
	float nilai_uas[10];
	float nilai_akhir[10];
	
	cout << "masukan banyak data : " ;
	cin >> n;
	
	for (int i = 0; i < n; i++){
		cout << "input data ke " << i+1 << endl;
		cout << "masukan nilai tugas \t:";
		cin >> nilai_tugas[i];
		cout << "masukan nilai uts \t:";
		cin >> nilai_uts[i];
		cout << "masukan nilai uas \t:";
		cin >> nilai_uas[i];
		cout << endl;
	}
	
	cout << endl;
	cout <<"Daftar Nilai Akhir Mahasiswa" << endl;
	cout << "==============================";
	cout << endl;
	cout << "NO   TUGAS    UTS    AKHIR    " << endl;
	cout << "==============================";
	cout << endl;
	
	
	for (int i = 0; i<n; i++){
		nilai_akhir[i] = (nilai_tugas[i]*0.3)+(nilai_uts[i]*0.3)+(nilai_uas[i]*0.4);
		cout << setiosflags(ios::left) << setw(5) << i;
		cout << setiosflags(ios::left) << setw(9) << nilai_tugas[i];
		cout << setiosflags(ios::left) << setw(7) << nilai_uts[i];
		cout << setiosflags(ios::left) << setw(9) << nilai_akhir[i];
		
		cout << endl;
	}
	
	
	
	return 0;
}
