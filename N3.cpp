#include <iostream>
#include <cmath>

using namespace std;

int main() {
	LC_ALL(0, "");
	int n, i, k;
	cin >> n;
	i = 1;
	k = 0;
	if (n > 1) {
		while (n >= k) {
			k = k + i;
			i = i + 1;
		}
		for (n = 1; n < i-1; n++) cout << n << " + ";
		cout << i - 1 << " ";
		cout << "= " << k << endl;
		cout << "k = " << i - 1;
	}
	else cout << "Nope";
	cout << "\n";
	system("pause");
	return(0);
}
