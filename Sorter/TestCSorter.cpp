/**---------------------------------------
* �ļ����ƣ� TestCSorter.cpp
* ���������� ���������㷨
* ������ʶ�� xad 2022/2/9
*
* �޸ı�ʶ��
* �޸�������
------------------------------------------**/

#include<iostream>
#include <string>
#include "CSorter.h"
#include <sys/timeb.h>
#include <time.h>

const int MAX_SIZE = 10000;

void printArray(int arr[], int length);
long getSystemTime(void);
void test_07(void);
void test_Bubble(void);
void test_Select(void);
void test_Insert(void);
void test_Shell(void);

int main()
{
	test_07();
	system("pause");
	return 0;
}

void test_07(void)
{
	int* arr = new int[MAX_SIZE];
	std::srand((unsigned int)time(nullptr));
	for (int i = 0; i < MAX_SIZE; ++i) {
		arr[i] = std::rand() % MAX_SIZE;
	}
	std::cout << "����ǰ��" << std::endl;
	//    printArray(arr, MAX_SIZE);
	long t_start = getSystemTime();
	CSorter::bubbleSort(arr, MAX_SIZE);
	long t_end = getSystemTime();
	std::cout << "ð������" << MAX_SIZE << "��Ԫ�أ�����ʱ�䣺" << (t_end - t_start) << std::endl;
	std::cout << "�����" << std::endl;
	//    printArray(arr, MAX_SIZE);


	for (int i = 0; i < MAX_SIZE; ++i) {
		arr[i] = std::rand() % MAX_SIZE;
	}

	std::cout << "����ǰ��" << std::endl;
	//    printArray(arr, MAX_SIZE);
	t_start = getSystemTime();
	CSorter::selectSort(arr, MAX_SIZE);
	t_end = getSystemTime();
	std::cout << "ѡ������" << MAX_SIZE << "��Ԫ�أ�����ʱ�䣺" << (t_end - t_start) << std::endl;
	std::cout << "�����" << std::endl;
	//    printArray(arr, MAX_SIZE);

	for (int i = 0; i < MAX_SIZE; ++i) {
		arr[i] = std::rand() % MAX_SIZE;
	}
	std::cout << "����ǰ��" << std::endl;
	//    printArray(arr, MAX_SIZE);
	t_start = getSystemTime();
	CSorter::insertSort(arr, MAX_SIZE);
	t_end = getSystemTime();
	std::cout << "��������" << MAX_SIZE << "��Ԫ�أ�����ʱ�䣺" << (t_end - t_start) << std::endl;
	std::cout << "�����" << std::endl;
	//    printArray(arr, MAX_SIZE);

	for (int i = 0; i < MAX_SIZE; ++i) {
		arr[i] = std::rand() % MAX_SIZE;
	}
	std::cout << "����ǰ��" << std::endl;
	//    printArray(arr, MAX_SIZE);
	t_start = getSystemTime();
	CSorter::shellSort(arr, MAX_SIZE);
	t_end = getSystemTime();
	std::cout << "ϣ������" << MAX_SIZE << "��Ԫ�أ�����ʱ�䣺" << (t_end - t_start) << std::endl;
	std::cout << "�����" << std::endl;
	//    printArray(arr, MAX_SIZE);

	for (int i = 0; i < MAX_SIZE; ++i) {
		arr[i] = std::rand() % MAX_SIZE;
	}
	std::cout << "����ǰ��" << std::endl;
	//    printArray(arr, MAX_SIZE);
	t_start = getSystemTime();
	CSorter::quickSort(arr, 0, MAX_SIZE - 1);
	t_end = getSystemTime();
	std::cout << "��������" << MAX_SIZE << "��Ԫ�أ�����ʱ�䣺" << (t_end - t_start) << std::endl;
	std::cout << "�����" << std::endl;
	//    printArray(arr, MAX_SIZE);

	for (int i = 0; i < MAX_SIZE; ++i) {
		arr[i] = std::rand() % MAX_SIZE;
	}
	int* temp = new int[MAX_SIZE];
	std::cout << "����ǰ��" << std::endl;
	//    printArray(arr, MAX_SIZE);
	t_start = getSystemTime();
	CSorter::mergeSort(arr, 0, MAX_SIZE - 1, temp);
	t_end = getSystemTime();
	std::cout << "�鲢����" << MAX_SIZE << "��Ԫ�أ�����ʱ�䣺" << (t_end - t_start) << std::endl;
	std::cout << "�����" << std::endl;
	//    printArray(arr, MAX_SIZE);

	for (int i = 0; i < MAX_SIZE; ++i) {
		arr[i] = std::rand() % MAX_SIZE;
	}
	std::cout << "����ǰ��" << std::endl;
	//    printArray(arr, MAX_SIZE);
	t_start = getSystemTime();
	CSorter::heapSort(arr, MAX_SIZE);
	t_end = getSystemTime();
	std::cout << "������" << MAX_SIZE << "��Ԫ�أ�����ʱ�䣺" << (t_end - t_start) << std::endl;
	std::cout << "�����" << std::endl;
	//    printArray(arr, MAX_SIZE);

	delete[] temp;
	delete[] arr;
}

long getSystemTime()
{
	struct timeb tb {};
	ftime(&tb);
	return tb.time * 1000 + tb.millitm;
}

void printArray(int arr[], int length) 
{
	for (int i = 0; i < length; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
void test_Bubble(void)
{
	int* arr = new int[MAX_SIZE];
	std::srand((unsigned int)time(nullptr));
	for (int i = 0; i < MAX_SIZE; ++i)
	{
		arr[i] = std::rand() % MAX_SIZE;
	}

	std::cout << "����ǰ��" << std::endl;
	printArray(arr, MAX_SIZE);

	long t_start = getSystemTime();
	CSorter::bubbleSort(arr, MAX_SIZE);
	long t_end = getSystemTime();
	std::cout << "ð������" << MAX_SIZE << "��Ԫ�أ�����ʱ�䣺" << (t_end - t_start) << std::endl;
	
	std::cout << "�����" << std::endl;
	//printArray(arr, MAX_SIZE);
	delete[] arr;
	arr = nullptr;
}

void test_Select(void)
{
	int* arr = new int[MAX_SIZE];
	std::srand((unsigned int)time(nullptr));
	for (int i = 0; i < MAX_SIZE; ++i)
	{
		arr[i] = std::rand() % MAX_SIZE;
	}

	std::cout << "����ǰ��" << std::endl;
	printArray(arr, MAX_SIZE);

	long t_start = getSystemTime();
	CSorter::selectSort(arr, MAX_SIZE);
	long t_end = getSystemTime();
	std::cout << "ѡ������" << MAX_SIZE << "��Ԫ�أ�����ʱ�䣺" << (t_end - t_start) << std::endl;

	std::cout << "�����" << std::endl;
	//printArray(arr, MAX_SIZE);
	delete[] arr;
	arr = nullptr;
}

void test_Insert(void)
{
	int* arr = new int[MAX_SIZE];
	std::srand((unsigned int)time(nullptr));
	for (int i = 0; i < MAX_SIZE; ++i)
	{
		arr[i] = std::rand() % MAX_SIZE;
	}

	std::cout << "����ǰ��" << std::endl;
	printArray(arr, MAX_SIZE);

	long t_start = getSystemTime();
	CSorter::insertSort(arr, MAX_SIZE);
	long t_end = getSystemTime();
	std::cout << "��������" << MAX_SIZE << "��Ԫ�أ�����ʱ�䣺" << (t_end - t_start) << std::endl;

	std::cout << "�����" << std::endl;
	//printArray(arr, MAX_SIZE);
	delete[] arr;
	arr = nullptr;
}
void test_Shell(void)
{
	int* arr = new int[MAX_SIZE];
	std::srand((unsigned int)time(nullptr));
	for (int i = 0; i < MAX_SIZE; ++i)
	{
		arr[i] = std::rand() % MAX_SIZE;
	}

	std::cout << "����ǰ��" << std::endl;
	printArray(arr, MAX_SIZE);

	long t_start = getSystemTime();
	CSorter::shellSort(arr, MAX_SIZE);
	long t_end = getSystemTime();
	std::cout << "ϣ������" << MAX_SIZE << "��Ԫ�أ�����ʱ�䣺" << (t_end - t_start) << std::endl;

	std::cout << "�����" << std::endl;
	//printArray(arr, MAX_SIZE);
	delete[] arr;
	arr = nullptr;
}
