#ifndef manusia_h
#define manusia_h
using namespace std;

class manusia {
public:
	string name;
	jantung varjantung;

	manusia(string pNama)
		: name(pNama) {
		cout << name << " hidup\n";
	}
	~manusia() {
		cout << name << " mati\n";
	}
};
#endif