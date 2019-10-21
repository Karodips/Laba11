#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c, e;
	cin >> a >> b;
	if (a != 0 && b != 0) {
		if (a > b) {
			c = a % b;
			e = b;
			while (c != 0) {
				b = c;
				c = e % c;
				e = b;
			}
			e = b;
		}
		else {
			c = b % a;
			e = a;
			while (c != 0) {
				a = c;
				c = e % c;
				e = a;
			}
			e = a;
		}
	}
	cout << e << endl;
	system("pause");
	return 0;
}
