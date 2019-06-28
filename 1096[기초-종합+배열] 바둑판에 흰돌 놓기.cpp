#include<stdio.h>
#include<iostream>
using namespace std;
int main(void) {

	int n, i, j, x, y;
	int a[20][20] = {};
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> x >> y;
		a[x][y] = 1;
	}

	for (i = 1; i <= 19; i++)    //한 줄(위에서 아래로) 씩
	{
		for (j = 1; j <= 19; j++)  //한 열(왼쪽에서 오른쪽으로) 씩
		{
			cout<<a[i][j]<<" "; //값 출력
		}
		cout<<endl; //줄 바꾸기
	}
}