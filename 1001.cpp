#include <iostream>
int main() {

	using namespace std;
	
	int times;
	long n;

	cin >> n;

	while(n != 1) {
		if (n % 2 == 0) {
			n /= 2;
		} else {
			n = (3 * n + 1) / 2;
		}
		times++;
	}

	cout << times << endl;
}