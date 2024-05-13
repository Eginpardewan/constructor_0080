#include <iostream>	
#include <string>	
using namespace std;

class mahasiswa {
private:
	long long static int nim;
public:
	long long int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(int pNim) { nim = pNim; /*Definisi Function*/ }
	static int getNim() { return nim; }

	mahasiswa(string pnama)
	{
		nama = pnama;
		setID();
	}
};


long long int mahasiswa::nim = 20220140080;

void mahasiswa::setID() {
	id = ++nim;
}

void mahasiswa::printAll() {
	cout << "ID   = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main() {
	mahasiswa mhs1("Egin Pardewan");
	mahasiswa mhs2("Akramsyah");
	mahasiswa::setNim(20220140080); //mengkases nim melalui static member function "setNim"
	mahasiswa mhs3("Badai");
	mahasiswa mhs4("Jeko");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "akses dari luar object = " << mahasiswa::getNim() << endl; //mengkases nim melalui static member function "getNim"

	return 0;
}