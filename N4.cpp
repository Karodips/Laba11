#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int k;
	float p,rofl;
	cin >> p;
	p = p / 100;
	k = 0;
	rofl = 1000;
	while (1100 >= rofl) {
		rofl = rofl + p * rofl;
		k++;
	}
	cout << rofl << " " << k << endl;
	system("pause");
	return 0;
}
