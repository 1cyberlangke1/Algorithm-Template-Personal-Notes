#include<stdio.h>

//穷举
int exhlcm(int a, int b) {
	if (a == 0 || b == 0)return 0;
	int prod = a * b;
	for (int i = 1; i <= prod; i++) {
		if (i % a == 0 && i % b == 0)return i;
	}
}
int main() {
	//使用例
	int a = 18, b = 24;
	printf("%d", exhlcm(a, b));
}
