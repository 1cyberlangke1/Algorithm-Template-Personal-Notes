#include<stdio.h>

int subgcd(int a, int b) {
	if (a == 0)return b;
	else if (b == 0)return a;
	else if (a == b)return a;
	if (a < b) {
		int tmp = a;
		a = b;
		b = tmp;
	}//a>b
	if (a % 2 == 0 && b % 2 == 0)return subgcd(a >> 1, b >> 1) << 1;
	else if (a % 2 == 0)return subgcd(a >> 1, b);
	else if (b % 2 == 0)return subgcd(a, b >> 1);
	subgcd(a - b, b);
}

int main() {
	//使用例
	int a = 72, b = 108;
	printf("%d", subgcd(a, b));
}
