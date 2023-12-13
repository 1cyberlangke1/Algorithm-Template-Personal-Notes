#include<stdio.h>

int eucgcd(int a,int b) {
	if (a < b) {
		int tmp = a;
		a = b;
		b = tmp;
	}//a>b
	if (a == 0)return b;
	else if (b == 0)return a;
	else if (a % b == 0)return b;
	else if(a == b)return a;
	else return eucgcd(a, a % b);
}

int main() {
	//使用例
	int a = 72, b = 108;
	printf("%d", eucgcd(a,b));
}
