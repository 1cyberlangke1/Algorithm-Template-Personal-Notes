#include<iostream>
#include<algorithm>//sort头文件

bool cmp(int a, int b) {//a: 前一个元素的值 b: 后一个元素的值
	return a > b;
}

int main() {
	//使用例
	int arr[10] = { 3,1,5,9,7,6,4,8, 10,2 };
	std::sort(arr, arr + 10,cmp);//要排序的首元素的指针 要排序的末元素的下一个地址的指针 比较函数(不写默认为升序)
	for (int i = 0; i < 10; i++)std::cout << arr[i] << ' ';
	return 0;
}
