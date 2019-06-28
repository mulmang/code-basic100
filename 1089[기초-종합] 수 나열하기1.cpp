#include <iostream>
#include <stdio.h>
using namespace std;
int main(void)
{
	int a, d, n;
	cin >> a >> d >> n;
	//a+(n-1)d
	int res;
	res = a + (n - 1)*d;
	cout << res;
}

