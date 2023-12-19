#include<stdio.h>
#include<stdlib.h>//qsort头文件

//比较函数
//const 常量 void 无类型(也就是啥类型都可以)
int cmp(const void *a, const void *b) //a: 前一个被比较的数的地址 b:后一个被比较的数的地址
{
	return *(int*)a - *(int*)b;//返回大于零就交换否则不交换
}
int main() {
	//使用例
	int arr[10] = { 3,1,5,9,7,6,4,8, 10,2 };
	qsort(arr,10,sizeof(arr[0]),cmp);//数组名字,排序数组元素个数,数组每个元素长度,比较函数
	for (int i = 0; i < 10; i++)printf("%d ", arr[i]);
}
