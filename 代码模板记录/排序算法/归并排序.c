#include<stdio.h>

int tmparr[1000] = { 0 };//开的要大于等于被排序的数组大小
//排序数组下标[l,r]之间的数
void msort(int arr[],int l,int r) {
	if (l >= r)return;
	int mid = l + r >> 1;
	msort(arr, l, mid); msort(arr, mid + 1, r);
	int k = 0, i = l, j = mid + 1;
	while (i <= mid && j <= r) {
		if (arr[i] <= arr[j])tmparr[k++] = arr[i++];
		else tmparr[k++] = arr[j++];
	}
	while(i<=mid)tmparr[k++] = arr[i++];
	while(j<=r)tmparr[k++] = arr[j++];
	for (i = l, j = 0; i <= r; i++, j++)arr[i] = tmparr[j];
}

int main() {
	//使用例
	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
	msort(arr,0,9);
	for (int i = 0; i < 10; i++)printf("%d ", arr[i]);
}
