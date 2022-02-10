/**---------------------------------------
* 文件名称： CSorter.h
* 功能描述： 排序算法的实现
* 创建标识： 肖澳笛 2022/2/9
*
* 修改标识：
* 修改描述：
------------------------------------------**/

#ifndef		CSORTER_SORTER_H
#define		CSORTER_SORTER_H

class CSorter
{
public:
	/**
	*  @brief    冒泡排序
	*
	*  @param    int arr[]
	*  @param    int length
	*  @return   void
	*/
	static void bubbleSort(int arr[], int length);

	/**
	*  @brief    选择排序
	*
	*  @param    int arr[]
	*  @param    int length
	*  @return   void
	*/
	static void selectSort(int arr[], int length);

	/**
	*  @brief    插入排序
	*
	*  @param    int arr[]
	*  @param    int length
	*  @return   void
	*/
	static void insertSort(int arr[], int length);

	/**
	*  @brief    希尔排序
	*
	*  @param    int arr[]
	*  @param    int length
	*  @return   void
	*/
	static void shellSort(int arr[], int length);

	/**
	*  @brief    快速排序
	*
	*  @param    int arr[]
	*  @param    int start
	*  @param    int end
	*  @return   void
	*/
	static void quickSort(int arr[], int start, int end);

	/**
	*  @brief    归并排序
	*
	*  @param    int arr[]
	*  @param    int start
	*  @param    int end
	*  @param    int temp[]
	*  @return   void
	*/
	static void mergeSort(int arr[], int start, int end, int temp[]);

	/**
	*  @brief    堆排序
	*
	*  @param    int arr[]
	*  @param    int length
	*  @return   void
	*/
	static void heapSort(int arr[], int length);
protected:
private:
	static void _swap(int* a, int* b);

	// 快速排序使用
	static int _partition(int arr[], int start, int end);

	// 归并排序使用
	static void _merge(int arr[], int start, int end, int mid, int temp[]);

	// 堆排序使用
	static void _adjust(int arr[], int index, int length);
};

#endif