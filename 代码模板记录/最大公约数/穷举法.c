#include<stdio.h>

int exhgcd(int a,int b) {
	if (a < b) {
		int tmp = a;
		a = b;
		b = tmp;
	}//a>b
	if (a == 0 || b == 0)return 0;//非法数据检查
	for (int i = b; i >= 1; i--) {
		if (a % i == 0 && b % i == 0)return i;
	}
}

int main() {
	//使用例
	int a = 20, b = 15;
	printf("%d", exhgcd(a,b));
}
