#include<stdio.h>

int eucgcd(int a, int b) {
	return b ? eucgcd(b, a % b) : a;
}

int main() {
	//使用例
	int a = 72, b = 108;
	printf("%d", eucgcd(a, b));
}
