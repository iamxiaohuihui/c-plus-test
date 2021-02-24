#include "Algorithm.h"
#include "sort.h"
#include "print.h"
#include <iostream>
using namespace std;

//汽水瓶问题
void al1() {
	cout << "汽水瓶问题" << endl;
	const int MAXCOL = 4;//列值固定
	int nRow;
	cout << "输入样例:  一组测试数有: " << MAXCOL << "个" << endl;
	cin >> nRow;
	cin.get();
	//申请一维数据并将其转成二维数组指针
	int** pr = (int**)new int* [MAXCOL];
	for (int k = 0; k < nRow; k++) {
		pr[k] = new int[MAXCOL];
	}
	//为二维数组赋值
	for (int i = 0; i < nRow; i++) {
		for (int j = 0; j < MAXCOL; j++) {//每一行赋值
			cin >> pr[i][j];
		}//每一行赋值 end

		bubbleSort(MAXCOL, pr[i]);
	}
	cout << "输出样例:" << endl;
	//输出二维数组
	print(nRow, MAXCOL, pr);
	//释放资源
	delete[] pr;
}

//明明的随机数
void al2() {
	cout << "明明的随机数" << endl;
	int N;
	cin >> N;
	while (N) {
		int arr[1000] = { 0 };
		int number;
		for (int i = 0; i < N; i++) {
			cin >> number;
			arr[number] = 1;
		}
		for (int j = 0; j < 1000; j++) {
			if (arr[j])
				cout << j << endl;
		}
	}
}

//进制转换
void al3() {
	cout << "进制转换" << endl;
	int c;
	cin >> c;
	cout << (c % 10) + (c / 10) * 16 << endl;
}