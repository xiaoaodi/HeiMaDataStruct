#include "CLinkQueue.h"
#include <iostream>

const int MATH_ZREO = 0;

Algo02::CLinkQueue::CLinkQueue()
{
	_pHead = new LinkNode;
	_pHead->_pNextNode = nullptr;
	_nSize = 0;
}

Algo02::CLinkQueue::~CLinkQueue()
{
	if (_pHead == nullptr)
	{
		return;
	}

	auto* pCurrent = _pHead;
	while (pCurrent!= nullptr)
	{
		auto* pNext = pCurrent->_pNextNode;
		delete pCurrent;
		pCurrent = pNext;
	}

	std::cout << "free ClinkQueue" << std::endl;
}

void Algo02::CLinkQueue::push_linkQueue(LinkNode * data)
{
	if (data == nullptr)
	{
		return;
	}

	if (_nSize == MATH_ZREO)
	{
		_pHead->_pNextNode = data;
		data->_pNextNode = nullptr;
		_nSize++;
		return;
	}

	auto * pCurrent = _pHead;
	for (int i = 0; i < _nSize;i++)
	{
		pCurrent = pCurrent->_pNextNode;
	}
	pCurrent->_pNextNode = data;
	data->_pNextNode = nullptr;

	_nSize++;
}

void * Algo02::CLinkQueue::front_linkQueue() const
{
	if (_pHead == nullptr)
	{
		return nullptr;
	}

	return _pHead->_pNextNode;
}

void Algo02::CLinkQueue::pop_linkQueue()
{
	if (_pHead == nullptr) {
		return;
	}

	LinkNode *pNext = _pHead->_pNextNode;
	_pHead->_pNextNode = pNext->_pNextNode;
	_nSize--;
}

void * Algo02::CLinkQueue::back_linkQueue()
{
	if (_pHead == nullptr)
	{
		return nullptr;
	}

	auto* pCurrent = _pHead;
	for (int i = 0; i < _nSize;i++)
	{
		pCurrent = pCurrent->_pNextNode;
	}

	return pCurrent;
}

int Algo02::CLinkQueue::get_size() const
{
	return _nSize;
}

void Algo02::CLinkQueue::clear_linkQueue()
{
	if (_pHead == nullptr)
	{
		return;
	}

	auto* pCurrent = _pHead;
	while (pCurrent != nullptr)
	{
		auto* pNext = pCurrent->_pNextNode;
		delete pCurrent;
		pCurrent = pNext;
	}

	_pHead->_pNextNode = nullptr;
}
