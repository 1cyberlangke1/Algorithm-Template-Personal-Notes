#include<stdio.h>

int main() {
	//使用例
	int arr[10] = { 8, 9, 9, 1, 7, 5, 5,10, 1, 0 };
	int diff_arr[11] = { 0 };//开大点构造可以不判断边界
	for (int i = 0; i < 10; i++) { diff_arr[i] += arr[i]; diff_arr[i + 1] -= arr[i]; }//构造差分数组
	diff_arr[1] += 10; diff_arr[5] -= 10;//对区间[1,4]的元素加10
	for(int i=0;i<10;i++){//求差分的前缀就是原数组
		if (i == 0)arr[i] = diff_arr[i];//边界
		else arr[i]=arr[i-1]+ diff_arr[i];
	}
	for (int i = 0; i < 10; i++)printf("%d ", arr[i]);
	return 0;
}
