#include<stdio.h>
#include<iostream>
using namespace std;
int main(void)
{
	int w, h, n;//����, ����, ���� ����
	int l[10] = { 0 }, d[10] = { 0 }, x[10] = { 0 }, y[10] = { 0 };
	//���� ����, ���� ����:0,����:1, ��ǥ
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
			//�����̸�
			y[i]++;
			board[x[i]][y[i]] = 1;
			l[i]--;
		}
		while ((l[i] >= 2) && (d[i] == 1)) {
			//�����̸�
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


