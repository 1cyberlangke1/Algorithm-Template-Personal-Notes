#include<stdio.h>

int main() {
	//使用例
	int n = 10, k = 3;//10的二进制位1010
	n = n >> k & 1;//取n在二进制下的第k位数(最低位为第0位)
	printf("%d", n);
	return 0;
}
