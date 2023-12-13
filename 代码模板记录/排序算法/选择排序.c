#include<stdio.h>

//n：数组元素个数
void ssort(int arr[],int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}
int main() {
	//使用例
	int arr[10] = { 10，9,8,7,6,5,4,3,2,1 };
	ssort(arr,10);
	for (int i = 0; i < 10; i++)printf("%d ", arr[i]);
}
