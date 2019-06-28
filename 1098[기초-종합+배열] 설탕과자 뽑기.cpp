#include<stdio.h>
#include<iostream>
using namespace std;
int main(void)
{
	int w, h, n;//가로, 세로, 막대 개수
	int l[10] = { 0 }, d[10] = { 0 }, x[10] = { 0 }, y[10] = { 0 };
	//막대 길이, 방향 가로:0,세로:1, 좌표
	cin >> h >> w;
	cin >> n;
	int board[100][100] = { 0 };

	for (int i = 1; i <= n; i++)
	{
		cin >> l[i] >> d[i] >> x[i] >> y[i];
		x[i] -= 1, y[i] -= 1;
	}
	for (int i = 1; i <= n; i++)
	{
		board[x[i]][y[i]] = 1;
		while ((l[i] >= 2) && (d[i] == 0)) {
			//가로이면
			y[i]++;
			board[x[i]][y[i]] = 1;
			l[i]--;
		}
		while ((l[i] >= 2) && (d[i] == 1)) {
			//세로이면
			x[i]++;
			board[x[i]][y[i]] = 1;
			l[i]--;
		}
	}

	for (int x = 0; x < h; x++)
	{
		for (int y = 0; y < w; y++)
			cout << board[x][y]<<" ";
		cout << endl;
	}
	
}


