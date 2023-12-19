#include<stdio.h>

//辗转相除法求最大公约数
int eucgcd(int a, int b) {
	if (a < b) {
		int tmp = a;
		a = b;
		b = tmp;
	}//a>b
	if (a == 0)return b;
	else if (b == 0)return a;
	else if (a == b)return a;
	else if (a % b == 0)return b;
	else return eucgcd(a, a % b);
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
