#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n, k, pom, pam, pim;
	cin >> n;
	pom = 1;
	pam = 0;
	pim = 200;
	k = 1;
	if (n > 0) {
		pim = 0;
		while (pim < n) {
			pim = pam + pom;
			pam = pom;
			pom = pim;
			k = k + 1;
		}
	}
	if (pim != n) cout << "N - не является числом фибоначи\n";
	else cout << k << endl;
	system("pause");
	return 0;
}
