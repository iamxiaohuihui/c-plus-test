#include "Algorithm.h"
#include "sort.h"
#include "print.h"
#include <iostream>
using namespace std;

void al1() {
	//列值固定
	const int MAXCOL = 4;
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