#include<stdio.h>

int eucgcd(int a,int b) {
	if (a < b) {
		int tmp = a;
		a = b;
		b = tmp;
	}//a>b
	if (a == 0 || b == 0)return 0;//非法数据检查
	if (a % b == 0)return b;
	else return eucgcd(a, a % b);
}

int main() {
	//使用例
	int a = 20, b = 15;
	printf("%d", eucgcd(a,b));
}
