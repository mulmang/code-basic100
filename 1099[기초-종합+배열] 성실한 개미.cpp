#include<stdio.h>
#include<iostream>
using namespace std;
int main(void)
{
	int board[10][10] = { 0 };

	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++) {
			cin >> board[i][j];
		}
	}
	//0(갈수 있는 곳), 1(벽)


	board[1][1] = 9;//2,2 시작
	int x=1, y=1;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			board[x][y] = 9;;
			if (board[x][y + 1] == 0) {
				y++;
			}
			else if (x >= 9 || y >= 9) {
				break;
			}
			else if (board[x + 1][y] == 0) {
				x++;
			}
			else if (board[x][y + 1] == 2) {
				board[x][y + 1] = 9;
				break;
			}
			else if (board[x + 1][y] == 2) {
				board[x + 1][y] = 9;
				break;
			}
		}
	}
	//출력
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout<< board[i][j]<<" ";
		}
		cout << endl;
	}
	
	
}

