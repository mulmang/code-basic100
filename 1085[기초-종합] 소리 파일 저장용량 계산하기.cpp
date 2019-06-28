#include <iostream>
#include <stdio.h>
using namespace std;
int main(void)
{
	double h, b, c,s;//hz,bit,channel,second
	cin >> h >> b >> c >> s;
	double total;
	total = h * b * c * s;
	int Mb;
	Mb = 8*1024 * 1024;//bit
	printf("%.1lf",(total / Mb));
	cout << " MB";
}



//1085 : [기초 - 종합] 소리 파일 저장용량 계산하기