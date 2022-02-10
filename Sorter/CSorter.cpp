#include "CSorter.h"

void CSorter::bubbleSort(int arr[], int length)
{
	for (int i = 0; i < length;i++)
	{
		bool bFlag = false;
		for (int j = length - 1; j > i;j--)
		{
			if (arr[j] < arr[j -1])
			{
				bFlag = true;
				_swap(&arr[j], &arr[j - 1]);
			}
		}

		if (!bFlag)
		{
			break;
		}

	}
}

void CSorter::selectSort(int arr[], int length)
{
	//从小到大排序
	// 选择排序通过减少交换次数来提升效率
	for (int i = 0; i < length; ++i)
	{
		int nMinIndex = i;
		for (int j = i; j < length; ++j)
		{
			if (arr[j] < arr[nMinIndex])
			{
				nMinIndex = j;
			}
		}

		_swap(&arr[i], &arr[nMinIndex]);
	}

}

// 插入排序
// 最好情况：原始序列正序，需要比较(n-1)次，移动2(n-1)次，时间复杂度O(n)
// 最坏情况：原始序列倒序，需要比较(n-1)(n+2)/2次(2~n求和值)，移动(n-1)(n+4)/2次 ((2+1)~(n+1)求和值)
void CSorter::insertSort(int arr[], int length)
{
	for (int i = 1; i < length; ++i)
	{
		if (arr[i] < arr[i - 1])
		{
			//找到合适的插入位置
			int temp = arr[i]; 
			int j;

			for (j = i - 1; j >= 0 && arr[j] > temp; --j)
			{
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = temp;
		}

	}
}

void CSorter::shellSort(int arr[], int length)
{
	int increase = length;
	do {
		increase = increase / 3 + 1;
		for (int i = 0; i < increase; ++i)
		{
			for (int j = i + increase; j < length; j += increase)
			{
				if (arr[j] < arr[j - increase]) 
				{
					int temp = arr[j];
					int k;
					for (k = j - increase; k >= 0 && arr[k] > temp; k -= increase)
					{
						arr[k + increase] = arr[k];
					}
					arr[k + increase] = temp;
				}
			}
		}
	} while (increase > 1);
}

void CSorter::quickSort(int arr[], int start, int end)
{
	if (start >= end) {
		return;
	}

	int pivotPos = _partition(arr, start, end); //将大的数值排在pivotPos右边，将小的数值排在左边
	quickSort(arr, start, pivotPos - 1);
	quickSort(arr, pivotPos + 1, end);
}

void CSorter::mergeSort(int arr[], int start, int end, int temp[])
{
	if (start >= end) {
		return;
	}
	int mid = start + (end - start) / 2;
	mergeSort(arr, start, mid, temp);
	mergeSort(arr, mid + 1, end, temp);
	_merge(arr, start, end, mid, temp);

}

void CSorter::heapSort(int arr[], int length)
{
	// 初始化堆，大顶堆
	for (int i = length / 2 - 1; i >= 0; --i) {
		_adjust(arr, i, length);
	}
	// 交换堆顶元素和最后一个元素
	for (int i = length - 1; i >= 0; --i) {
		_swap(&arr[0], &arr[i]);
		_adjust(arr, 0, i);
	}

}

void CSorter::_swap(int * a, int * b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int CSorter::_partition(int arr[], int start, int end)
{
	int nPosValue = arr[start];
	int nPosIndex = start;
	int ni = start, nj = end;

	while (ni < nj)
	{
		while (arr[nj] > nPosValue)
		{
			nj--;
		}
		while (arr[ni] <= nPosValue)
		{
			ni++;
		}
		if (ni >= nj)
		{
			break;
		}
		_swap(&arr[ni], &arr[nj]);
	}

	arr[nPosIndex] = arr[nj];
	arr[nj] = nPosValue;
	return nj;

}

void CSorter::_merge(int arr[], int start, int end, int mid, int temp[])
{
	int i_start = start;
	int j_start = mid + 1;
	int i_end = mid;
	int j_end = end;
	int pos = start;
	while (i_start <= i_end && j_start <= j_end) {
		if (arr[i_start] < arr[j_start]) {
			temp[pos] = arr[i_start];
			i_start++;
			pos++;
		}
		else {
			temp[pos] = arr[j_start];
			j_start++;
			pos++;
		}
	}
	while (i_start <= i_end) {
		temp[pos] = arr[i_start];
		i_start++;
		pos++;
	}
	while (j_start <= j_end) {
		temp[pos] = arr[j_start];
		j_start++;
		pos++;
	}
	for (int i = start; i <= end; ++i) {
		arr[i] = temp[i];
	}

}

void CSorter::_adjust(int arr[], int index, int length)
{
	while ((2 * index + 1) < length) {
		int lchild = 2 * index + 1;
		int rchild = lchild + 1;
		int maxChild = (rchild < length && arr[rchild] > arr[lchild]) ? rchild : lchild;
		if (arr[index] >= arr[maxChild]) break;
		_swap(&arr[index], &arr[maxChild]);
		index = maxChild;
	}

}
