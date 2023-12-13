#include<stdio.h>

int subgcd(int a, int b) {
	if (a == 0 || b == 0)return 0;//非法数据检查
	else if (a == b)return a;
	if (a > b)return subgcd(a - b, b);
	else return (a, b - a);
}

int main() {
	//使用例
	int a = 72, b = 108;
	printf("%d", subgcd(a,b));
}
