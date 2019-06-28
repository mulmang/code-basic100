#include <iostream>
#include <stdio.h>
using namespace std;
int main(void)
{
	int r, g, b;
	cin >> r >> g >> b;
	int cnt=0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < g; j++)
		{
			for (int k = 0; k < b; k++)
			{
				cout << i << " " << j << " " << k<<endl;
				cnt++;
			}
		}
	}
	cout<<cnt;
}

//1084 : [±âÃÊ - Á¾ÇÕ] ¹°°¨¸¸µé±â
