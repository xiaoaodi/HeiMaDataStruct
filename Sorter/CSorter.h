/**---------------------------------------
* �ļ����ƣ� CSorter.h
* ���������� �����㷨��ʵ��
* ������ʶ�� Ф�ĵ� 2022/2/9
*
* �޸ı�ʶ��
* �޸�������
------------------------------------------**/

#ifndef		CSORTER_SORTER_H
#define		CSORTER_SORTER_H

class CSorter
{
public:
	/**
	*  @brief    ð������
	*
	*  @param    int arr[]
	*  @param    int length
	*  @return   void
	*/
	static void bubbleSort(int arr[], int length);

	/**
	*  @brief    ѡ������
	*
	*  @param    int arr[]
	*  @param    int length
	*  @return   void
	*/
	static void selectSort(int arr[], int length);

	/**
	*  @brief    ��������
	*
	*  @param    int arr[]
	*  @param    int length
	*  @return   void
	*/
	static void insertSort(int arr[], int length);

	/**
	*  @brief    ϣ������
	*
	*  @param    int arr[]
	*  @param    int length
	*  @return   void
	*/
	static void shellSort(int arr[], int length);

	/**
	*  @brief    ��������
	*
	*  @param    int arr[]
	*  @param    int start
	*  @param    int end
	*  @return   void
	*/
	static void quickSort(int arr[], int start, int end);

	/**
	*  @brief    �鲢����
	*
	*  @param    int arr[]
	*  @param    int start
	*  @param    int end
	*  @param    int temp[]
	*  @return   void
	*/
	static void mergeSort(int arr[], int start, int end, int temp[]);

	/**
	*  @brief    ������
	*
	*  @param    int arr[]
	*  @param    int length
	*  @return   void
	*/
	static void heapSort(int arr[], int length);
protected:
private:
	static void _swap(int* a, int* b);

	// ��������ʹ��
	static int _partition(int arr[], int start, int end);

	// �鲢����ʹ��
	static void _merge(int arr[], int start, int end, int mid, int temp[]);

	// ������ʹ��
	static void _adjust(int arr[], int index, int length);
};

#endif