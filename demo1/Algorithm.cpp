#include "Algorithm.h"
#include "sort.h"
#include "print.h"
#include <iostream>
using namespace std;

//��ˮƿ����
void al1() {
	cout << "��ˮƿ����" << endl;
	const int MAXCOL = 4;//��ֵ�̶�
	int nRow;
	cout << "��������:  һ���������: " << MAXCOL << "��" << endl;
	cin >> nRow;
	cin.get();
	//����һά���ݲ�����ת�ɶ�ά����ָ��
	int** pr = (int**)new int* [MAXCOL];
	for (int k = 0; k < nRow; k++) {
		pr[k] = new int[MAXCOL];
	}
	//Ϊ��ά���鸳ֵ
	for (int i = 0; i < nRow; i++) {
		for (int j = 0; j < MAXCOL; j++) {//ÿһ�и�ֵ
			cin >> pr[i][j];
		}//ÿһ�и�ֵ end

		bubbleSort(MAXCOL, pr[i]);
	}
	cout << "�������:" << endl;
	//�����ά����
	print(nRow, MAXCOL, pr);
	//�ͷ���Դ
	delete[] pr;
}

//�����������
void al2() {
	cout << "�����������" << endl;
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

//����ת��
void al3() {
	cout << "����ת��" << endl;
	int c;
	cin >> c;
	cout << (c % 10) + (c / 10) * 16 << endl;
}