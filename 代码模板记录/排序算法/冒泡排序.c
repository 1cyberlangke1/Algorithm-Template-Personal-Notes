#include<stdio.h>

//n：数组元素个数
void bsort(int arr[],int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; j > i; j--) {
			if (arr[j] < arr[j - 1]) {
				int tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
			}
		}
	}
}
int main() {
	//使用例
	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
	bsort(arr,10);
	for (int i = 0; i < 10; i++)printf("%d ", arr[i]);
}
