#include "CLinkStack.h"
#include <iostream>

using namespace Algo03;

const int MATH_ZERO = 0;

Algo03::ClinkStack::ClinkStack()
{
	_pHead._pNext = nullptr;
	_nSize = 0;
}

Algo03::ClinkStack::~ClinkStack()
{
	//没有内存不需要释放
	std::cout << "free CLinkStack" << std::endl;
}

void Algo03::ClinkStack::push_linkStack(LinkNode * data)
{
	if (data == nullptr)
	{
		return;
	}

	data->_pNext = _pHead._pNext;
	_pHead._pNext = data;
	++_nSize;
}

void Algo03::ClinkStack::pop_linkStack()
{
	if (_nSize == MATH_ZERO)
	{
		return;
	}

	auto* pCurrent = _pHead._pNext;
	_pHead._pNext = pCurrent->_pNext;
	--_nSize;
}

LinkNode * Algo03::ClinkStack::top_linkStack() const
{
	if (_nSize == MATH_ZERO)
	{
		return nullptr;
	}

	return _pHead._pNext;
}

int Algo03::ClinkStack::get_size() const
{
	return _nSize;
}

void Algo03::ClinkStack::clear_linkStack()
{
	if (_nSize == 0)
	{
		return;
	}

	_pHead._pNext = nullptr;
	_nSize = 0;
}
