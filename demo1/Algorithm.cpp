#include "Algorithm.h"
#include "sort.h"
#include "print.h"
#include <iostream>
using namespace std;

void al1() {
	//��ֵ�̶�
	const int MAXCOL = 4;
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