#include<stdio.h>
#include<iostream>
using namespace std;
int main(void) {

	int n, i, t;
	int a[24] = {};
	cin >> n; //���� �Է� �ޱ�
	for (i = 1; i <= n; i++) //���� ��ŭ �Է� �ޱ�
	{
		cin >> t; //�о
		a[t] = a[t] + 1; // �� �濡 ���� ����ִ� ���� 1��ŭ ���� �ٽ� �����Ѵ�. a[t]+=1 �� ����.
	}

	for (i = 1; i <= 23; i++)
	{
		cout << a[i]<<" ";  //1~23 �� �迭�� ����Ǿ��ִ� �� ����ϱ�
	}
}