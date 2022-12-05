#include <bits/stdc++.h>
using namespace std;

class ELECTRONIC {
	protected:
		float congSuat;
		int dienAp;
	public:
		ELECTRONIC(float congSuat, int dienAp);
};
ELECTRONIC::ELECTRONIC(float congSuat, int dienAp) {
	this->congSuat = congSuat;
	this->dienAp = dienAp;
}

class MAYGIAT : public ELECTRONIC {
	float dungTich;
	int loai;
	public:
		MAYGIAT(float dungTich, int loai, float congSuat, int dienAp);
		void XUAT();
};
MAYGIAT::MAYGIAT(float dungTich, int loai, float congSuat, int dienAp) : ELECTRONIC(congSuat, dienAp) {
	this->dungTich = dungTich;
	this->loai = loai;
}
void MAYGIAT::XUAT() {
	cout << "Cong suat: " << congSuat << endl;
	cout << "Dien ap: " << dienAp << endl;
	cout << "Dung tich: " << dungTich << endl;
	cout << "Loai: " << loai << endl;
}

class TULANH : public ELECTRONIC {
	float dungTich;
	int soNgan;
	public:
		TULANH(float dungTich, int soNgan, float congSuat, float dienAp);
		void XUAT();
};
TULANH::TULANH(float dungTich, int soNgan, float congSuat, float dienAp) : ELECTRONIC(congSuat, dienAp) {
	this->dungTich = dungTich;
	this->soNgan = soNgan;
}
void TULANH::XUAT() {
	cout << "Cong suat: " << congSuat << endl;
	cout << "Dien ap: " << dienAp << endl;
	cout << "Dung tich: " << dungTich << endl;
	cout << "So ngan: " << soNgan << endl;
}
int main() {
	MAYGIAT a (1, 1, 1, 1);
	cout << "Thong tin cua may giat la:" << endl;
	a.XUAT();
	
	TULANH b (2, 2, 2, 2);
	cout << "Thong tin cua tu lanh la:" << endl;
	b.XUAT();
	return 0;
}