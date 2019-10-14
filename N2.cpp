#include <iostream>
#include <cmath>

using namespace std;

int main() {
	LC_ALL(0, "");
	int a, b, i, j;
	cin >> a >> b;
	if (a > b) {
		while (a > b) a = a - b;
		cout << a;
	}
	else cout << "Nope";
	cout << "\n";
	system("pause");
	return(0);
}
