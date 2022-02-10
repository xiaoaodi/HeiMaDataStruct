#include "CSeqQueue.h"
#include <iostream>

Algo04::CSeqQueue::CSeqQueue()
{
	for (auto &tmp : _pData)
	{
		tmp = nullptr;
	}
	_nSize = 0;
}

Algo04::CSeqQueue::~CSeqQueue()
{
	// 数组所用数组未使用new创建，无需显式释放
	std::cout << "free SeqQueue!" << std::endl;

}

void Algo04::CSeqQueue::push_seqQueue(void * data)
{
	if (data == nullptr)
	{
		return;
	}

	if ( _nSize >=MATH_MAX)
	{
		return;
	}

	_pData[_nSize++] = data;
}

void* Algo04::CSeqQueue::front_seqQueue()
{
	if (_nSize == 0)
	{
		return nullptr;
	}

	return _pData[0];
}

void Algo04::CSeqQueue::pop_seqQueue()
{
	if (_nSize == 0)
	{
		return;
	}

	for (int i = 0; i < _nSize - 1;i++)
	{
		_pData[i] = _pData[i + 1];
	}

	--_nSize;
}

void * Algo04::CSeqQueue::back_seqQueue()
{
	if (_nSize == 0)
	{
		return nullptr;
	}

	return _pData[_nSize - 1];
}

int Algo04::CSeqQueue::get_size() const
{
	return _nSize;
}

void Algo04::CSeqQueue::clear_seqQueue()
{
	if (_nSize == 0)
	{
		return;
	}

	_nSize = 0;
}
