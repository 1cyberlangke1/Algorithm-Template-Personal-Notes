#include<stdio.h>

int main() {
	//使用例
	int arr[8][8] = {
		   /*0  1  2  3  4  5  6  7*/
		/*0*/8, 9, 9, 1, 7, 5, 5,10,
		/*1*/1, 0, 7, 7, 5, 8, 6, 7,
		/*2*/3, 7, 9, 2, 7, 7, 8,10,
		/*3*/6, 7, 8, 5, 6, 7, 2, 1,
		/*4*/9,10,10, 2, 4, 9, 7, 5,
		/*5*/4, 7, 5, 6, 7, 0, 5, 0,
		/*6*/5, 4, 5, 1, 3,10, 6, 0,
		/*7*/0, 6, 7, 8, 7,10, 3, 5
	};
	int diff_arr[9][9] = { 0 };//行列多开一个,构造差分判断边界

	//构造差分
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			diff_arr[i][j] += arr[i][j];
			diff_arr[i + 1][j] -= arr[i][j];
			diff_arr[i][j + 1] -= arr[i][j];
			diff_arr[i + 1][j + 1] += arr[i][j];                                                                                                                                                                                                                                                                                                                                                                                                                                   
		}
	}
	//将(1,1)到(3,3)的矩阵中的数加10
	diff_arr[1][1] += 10;
	diff_arr[4][1] -= 10;
	diff_arr[1][4] -= 10;
	diff_arr[4][4] += 10;
	//计算差分的前缀和得原数组
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i - 1 < 0 && j - 1 >= 0)arr[i][j] = arr[i][j - 1] + diff_arr[i][j];//边界判断
			else if (i - 1 >= 0 && j - 1 < 0)arr[i][j] = arr[i - 1][j] + diff_arr[i][j];
			else if (i - 1 < 0 && j - 1 < 0)arr[i][j] = diff_arr[i][j];
			else arr[i][j] = arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1] + diff_arr[i][j];
		}
	}
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			printf("%2d ", arr[i][j]);
		}
		putchar('\n');
	}
	return 0;
}
