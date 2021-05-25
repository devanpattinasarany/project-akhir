#include <iostream>
using namespace std;

int main(){
	
	string a[10];
	int b[10],c[10],n;
	
	cout << "masukan banyak data: ";
	cin >> n;
	
	for(int i = 0; i < n; i++){
	cout<<"Data ke-"<<i+1<<endl;
	  cin.ignore(1, '\n');
	  cout<<"Masukan Nama\t= ";
	  getline(cin,a[i]);
	  cout<<"Masukan Nilai 1\t= ";
	  cin>>b[i];
	  cout<<"Masukan Nilai 2\t= ";
	  cin>>c[i];
	}
	
	
	
	return 0;
}
