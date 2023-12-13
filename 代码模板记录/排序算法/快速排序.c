#include<stdio.h>

//排序数组下标[l,r]之间的数
void qsort(int arr[],int l,int r) {
	if (l >= r)return;
	int x = arr[l + r >> 1], i = l, j = r;
	while (i < j) {
		while (x > arr[i])i++;
		while (x < arr[j])j--;
		if (i < j) {
			int tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}
	}
	qsort(arr, l, j); qsort(arr, j + 1, r);
}

int main() {
	//使用例
	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
	qsort(arr,0,9);
	for (int i = 0; i < 10; i++)printf("%d ", arr[i]);
}
