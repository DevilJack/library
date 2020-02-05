#include "Array.h"

template<typename B>
void insertionSort(Array<B>& arrayPtr, size_t size) // ���������� ���������
{
	B temp; // ��������� ���������� ��� �������� �������� �������� ������������ �������
	int item; // ������ ����������� ��������

	for (size_t counter = 1; counter < size; counter++)
	{
		temp = arrayPtr[counter]; // �������������� ��������� ���������� ������� ��������� �������� �������
		item = counter - 1; // ���������� ������ ����������� �������� �������
		while (item >= 0 && arrayPtr[item] > temp) // ���� ������ �� ����� 0 � ���������� ������� ������� ������ ��������
		{
			arrayPtr[item + 1] = arrayPtr[item]; // ������������ ��������� �������
			arrayPtr[item] = temp;
			item--;
		}
	}
}