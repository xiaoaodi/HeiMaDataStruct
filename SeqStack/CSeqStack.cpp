#include "CSeqStack.h"
#include <iostream>

Algo05::CSeqStack::CSeqStack()
{
	for (auto & tmp : _pData)
	{
		tmp = nullptr;
	}

	_nSize = 0;
}

Algo05::CSeqStack::~CSeqStack()
{
	std::cout << " free CSeqStack" << std::endl;
}

void Algo05::CSeqStack::push_seqStack(void * data)
{
	if (data == nullptr)
	{
		return;
	}

	if (_nSize >= MAX_SIZE)
	{
		return;
	}

	_pData[_nSize++] = data;
}

void * Algo05::CSeqStack::top_seqStack()
{
	if (_nSize == 0)
	{
		return nullptr;
	}
	
	return _pData[_nSize - 1];
}

void Algo05::CSeqStack::pop_seqStack()
{
	if (_nSize == 0)
	{
		return;
	}

	_pData[_nSize - 1] = nullptr;
	_nSize--;
}

bool Algo05::CSeqStack::is_empty() const
{
	if (_nSize ==0)
	{
		return false;
	}
	return true;
}

int Algo05::CSeqStack::get_size() const
{
	return _nSize;
}

void Algo05::CSeqStack::clear_seqStack()
{
	if (_nSize == 0)
	{
		return;
	}

	for (int i = 0; i < _nSize; i++)
	{
		_pData[i] = nullptr;
	}
	_nSize = 0;
}
