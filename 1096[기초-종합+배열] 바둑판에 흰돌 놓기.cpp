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

	for (i = 1; i <= 19; i++)    //�� ��(������ �Ʒ���) ��
	{
		for (j = 1; j <= 19; j++)  //�� ��(���ʿ��� ����������) ��
		{
			cout<<a[i][j]<<" "; //�� ���
		}
		cout<<endl; //�� �ٲٱ�
	}
}