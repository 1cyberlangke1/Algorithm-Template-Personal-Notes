#include<stdio.h>

int main() {
	//使用例
	int n = 10, k = 3;//10的二进制位1010
	n = n & -n;//返回n在二进制下的最后一位1 
	printf("%d", n);//2的二进制为10
	return 0;
}
