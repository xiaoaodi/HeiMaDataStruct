#include "DynamicArray.h"

CDynamicArray::CDynamicArray()
{
	_pArr = nullptr;
	_nSize = 0;
	_nCapacity = 20;
	_pArr = new int[_nCapacity];
}

CDynamicArray::~CDynamicArray()
{
	if (_pArr != nullptr)
	{
		delete[] _pArr;
		_pArr = nullptr;
	}

	std::cout << "free DynaimcArray Object" << std::endl;
}

void CDynamicArray::push_back_array(int value)
{
	if (_pArr == nullptr)
	{
		return;
	}

	if (_nSize == _nCapacity)
	{
		_nCapacity = _nCapacity * 2;
		int* pNewArr = new int[_nCapacity];
		memcpy(pNewArr, _pArr, _nCapacity * sizeof(int));
		delete[] _pArr;
		_pArr = pNewArr;
		_pArr[_nSize++] = value;
	}
	else
	{
		_pArr[_nSize] = value;
		_nSize++;
	}
	
}

void CDynamicArray::insert_array(int pos, int value)
{
	if (_pArr == nullptr|| pos >_nSize || pos < 0)
	{
		return;
	}

	if (pos == _nSize && _nSize + 1 < _nCapacity)
	{
		push_back_array(value);
		return;
	}
	
	int i = _nSize;
	if (pos < _nSize && _nSize + 1 < _nCapacity)
	{
		for (; i > pos; i--)
		{
			_pArr[i] = _pArr[i - 1];
		}
		_pArr[i] = value;
		_nSize++;
	}
	else
	{
		int* newAddr = new int[_nCapacity * 2];
		memcpy(newAddr, _pArr, _nCapacity * sizeof(int));
		delete[] _pArr;
		_pArr = newAddr;
		_nCapacity = _nCapacity * 2;
		for (; i > pos; i--)
		{
			_pArr[i] = _pArr[i - 1];
		}
		_pArr[i] = value;
		_nSize++;

	}

}

void CDynamicArray::remove_array_pos(int pos)
{
	if (_pArr == nullptr)
	{
		return;
	}

	if (pos < 0 || pos >= _nSize)
	{
		return;
	}

	for (int i = pos; i < _nSize - 1; i++)
	{
		_pArr[i] = _pArr[i + 1];
	}

	_nSize--;
}

void CDynamicArray::remove_array_value(int value)
{
	if ( _pArr ==  nullptr)
	{
		return;
	}

	int pos = find_array(value);
	remove_array_pos(pos);
}

int CDynamicArray::find_array(int value)
{
	if (_pArr == nullptr)
	{
		return -1;
	}

	int pos = -1;
	for (int i = 0; i < _nSize; i++)
	{
		if (_pArr[i] == value)
		{
			pos = i;
			break;
		}
			
	}

	return pos;
}

void CDynamicArray::clear_array(void)
{
	_nSize = 0;
}

int CDynamicArray::get_size(void)
{
	return _nSize;
}

int CDynamicArray::get_capacity(void)
{
	return _nCapacity;
}

int CDynamicArray::at_array(int pos)
{
	return _pArr[pos];
}

bool CDynamicArray::at_array(int pos, int & value)
{
	if (_pArr == nullptr || pos < 0 || pos >= _nSize|| pos >= _nCapacity)
	{
		return false;
	}

	value = _pArr[pos];
	return true;
}

void CDynamicArray::print_array(void)
{
	if (_pArr == nullptr)
	{
		return;
	}

	for (int i = 0; i < _nSize;i++)
	{
		std::cout << _pArr[i] << "  ";
	}
	std::cout << std::endl;
}
