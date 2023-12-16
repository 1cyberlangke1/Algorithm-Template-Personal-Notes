#include<stdio.h>

#define EPS 1e-6 //精度
double x = 2;//被开方的数

//判断二分出的答案是否符合要求
int check(double num) {
	return x > num * num;//比较超过返回1, 否则返回0
}
//二分
double float_bsearch(double l, double r)//左右边界
{
	while (r - l > EPS) {
		double mid = (l + r) / 2;
		if (check(mid)/*条件判断, 更新边界*/)l = mid;
		else r = mid;
	}
	return l;//取左右都行 因为结束循环时r - l < EPS 它们之间只差一个很小的数, 在计算机里基本可以看成一个数了
}
int main() {
	//使用例 求平方根
	printf("%lf",float_bsearch(0, x));//显然根号x在[0,x]之间
	return 0;
}
