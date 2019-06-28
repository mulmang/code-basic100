#include<iostream>
using namespace std;

int main() {
	int in,out;
	int cnt=0;
	cin >> in;

	for (int i = 0;; i++) {
		cnt += i;
		if (in <= cnt) {
			out = i;
			break;
		}
	}
	cout << out;
	return 0;
}