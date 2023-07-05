#include <iostream>
using namespace std;

class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;

public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;

	}

	virtual float hitungNilaiAkhir() { return 0;}
	virtual void cekkelulusan() { return ; }
	virtual void input() { return ;  }

	void setP(float p) {
		this->presensi = p;
	}
	float getP() {
		return presensi;
	}
	void setA(float a) {
		this->activity = a;
	}
	float getA() {
		return activity;
	}
	void setE(float e) {
		this->exercise = e;
	}
	float getE() {
		return exercise;
	}
	void setUa(float ua) {
		this->tugasAkhir = ua;
	}
	float getUa() {
		return tugasAkhir;
	}
	
};
class Pemprograman : public MataKuliah {
public:
	void input() {
		float p;
		cout << "Masukan nilai presesni :";
		cin >> p;
		setP(p);

		float a;
		cout << "Masukan nilai activity :";
		cin >> a;
		setA(a);

		float e;
		cout << "Masukan nilai exercise :";
		cin >> e;
		setE(e);

		float ua;
		cout << "Masukan nilai tugas akhir :";
		cin >> ua;
		setUa(ua);
	}

	float hitungNilaiAkhir() {
		return ((getP() * 0.1) + (getA() * 0.2) + (getE() * 0.3) + (getUa() * 0.4));
	}

	void cekkelulusan() {
		float nilaiAkhir = hitungNilaiAkhir();
		if (nilaiAkhir > 75) {
			cout << "Anda lulus dengan nilai akhir: " << nilaiAkhir << endl;
		}
		else {
			cout << "Anda tidak lulus dengan nilai akhir " << nilaiAkhir << endl;
		}
	}

};

int main() {
	MataKuliah* obj;
	char ch;
	do {
		cout << "Program dibuat" << endl; 
		obj = new Pemprograman();
		obj->input();
		obj->cekkelulusan();
		cout << "\nApakah anda ingin mengulang program?" << endl;
		cin >> ch;
	} while ((ch == 'Y') || (ch == 'y'));


	
	return 0;
}







//