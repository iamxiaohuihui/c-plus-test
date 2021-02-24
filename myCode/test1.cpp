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
//ʵ��ͨ�õ� �������������
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
			//����
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
//1���Զ������Ƶ��������Ƶ���һ�µ���������T�ſ���ʹ��
//2��ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��

int main() {
	
	int a = 10;
	int b = 20;

	mySwap(a,b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	test02();

	return 1;
}