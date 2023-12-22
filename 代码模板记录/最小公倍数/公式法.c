#include<stdio.h>

//辗转相除法求最大公约数
int eucgcd(int a, int b) {
	return b ? eucgcd(b, a % b) : a;
}

//最大公约数×最小公倍数=两数之积
int lcm(int a, int b) {
	return a * b / eucgcd(a, b);
}
int main() {
	//使用例
	int a = 5, b = 7;
	printf("%d", lcm(a, b));
}
