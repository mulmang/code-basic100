#include <iostream>
#include <stdio.h>
using namespace std;
int main(void)
{
	int day=1;
	int a, b, c;
	cin >> a >> b >> c;

	while (day%a != 0 || day % b != 0 || day % c != 0) day++; 
	cout << day;

}

1092 최소공배수
