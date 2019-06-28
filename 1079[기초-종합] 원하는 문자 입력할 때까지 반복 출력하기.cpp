#include<iostream>
using namespace std;

int main() {
	char a;
	for (;;) {
		cin >> a;
		if (a == 'q') {
			cout << a;
			break;
		}
		else {
			cout << a << endl;
		}
	}
	return 0;
}