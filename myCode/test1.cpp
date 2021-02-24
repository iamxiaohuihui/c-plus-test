#include <iostream>
#include <string>
using namespace std;

template<class  T>
void mySwap(T&a,T&b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template<class T>
void printArr(T arr[],int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i];
	}

	cout << endl;
}
//实现通用的 对数组进行排序
template<class T>
void mySort(T arr[],int len) {
	for (int i = 0; i < len; i++) {
		int max = i;
		for (int j = i + i; j < len; j++) {
			if (arr[max] < arr[j]) {
				max = j;
			}
		}
		if (max != i) {
			//交换
			mySwap(arr[max], arr[i]);
		}
	}
}

void test01() {
	char charArr[] = "cdbnaf";
	int len = sizeof(charArr) / sizeof(char);
	printArr(charArr, len);
	mySort(charArr, len);
	printArr(charArr, len);
}
void test02() {
	int intArr[] = {3,4,6,7,2,3,0,1,9,6,9};
	int len = sizeof(intArr) / sizeof(int);
	printArr(intArr, len);
	mySort(intArr, len);
	printArr(intArr, len);
}
//1、自动类型推到，必须推导出一致的数据类型T才可以使用
//2、模板必须要确定出T的数据类型，才可以使用

int main() {
	
	int a = 10;
	int b = 20;

	mySwap(a,b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	test02();

	return 1;
}