#include <iostream>
#include <cmath>

using namespace std;

int main() {
	LC_ALL(0, "");
	int a, b, i, j;
	cin >> a >> b;
	if (a < b) {
		for (i = a; i <= b; i++) {
			for (j = 1; j <= i; j++) cout << i << " ";
		}
	}
	else cout << "Nope" << endl;

	cout << "\n";
	system("pause");
	return(0);
}
