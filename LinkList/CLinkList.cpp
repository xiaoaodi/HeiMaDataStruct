#include "CLinkList.h"
#include <iostream>

Alog::CLinkList::CLinkList()
{
	_pHead = new stuLinkNode;
	_nSize = 0;
	// 头结点不保存数据信息
	_pHead->_pNodeData = nullptr;
	_pHead->_pNext = nullptr;
}

Alog::CLinkList::~CLinkList()
{
	if (_pHead == nullptr)
	{
		return;
	}

	auto* CurrentNode = _pHead;
	while (CurrentNode != nullptr)
	{
		auto* pNext = CurrentNode->_pNext;
		delete CurrentNode;
		CurrentNode = pNext;
	}
	_nSize = 0;

	std::cout << "free LinkList" << std::endl;

}

void Alog::CLinkList::insert_linkList(int pos, void* data)
{
	if (_pHead == nullptr|| data == nullptr )
	{
		return;
	}

	if (pos < 0 || pos >_nSize)
	{
		pos = _nSize;
	}

	auto* pNewNode = new stuLinkNode;
	pNewNode->_pNodeData = data;
	pNewNode->_pNext = nullptr;

	auto* pCurrentNode = _pHead;
	for (int i = 0; i < pos;i++)
	{
		pCurrentNode = pCurrentNode->_pNext;
	}
	pNewNode->_pNext = pCurrentNode->_pNext;
	pCurrentNode->_pNext = pNewNode;

	++_nSize;
}

void Alog::CLinkList::remove_linkList_pos(int pos)
{
	if (_pHead == nullptr || pos < 0 || pos >= _nSize)
	{
		return;
	}

	auto* pCurrent = _pHead;
	for (int i = 0; i < pos;i++)
	{
		pCurrent = pCurrent->_pNext;
	}

	auto* pRemoveNode = pCurrent->_pNext;
	pCurrent->_pNext = pCurrent->_pNext->_pNext;
	delete pRemoveNode;

	--_nSize;
}

int Alog::CLinkList::get_size(void)
{
	return _nSize;
}

int Alog::CLinkList::find_linkList_pos(void * data)
{
	if (_pHead == nullptr || data == nullptr )
	{
		return -1;
	}

	int pos = 0;
	auto* pCurrent = _pHead;
	while (pCurrent != nullptr)
	{
		if (pCurrent->_pNodeData ==data)
		{
			return pos;
		}

		pCurrent = pCurrent->_pNext;
		pos++;
	}

	return -1;
}

void* Alog::CLinkList::get_frist_linkList_node(void)
{
	return _pHead->_pNext->_pNodeData;
}

void Alog::CLinkList::print_linkList(PRINTLINKNODE print)
{
	if (_pHead == nullptr)
	{
		return;
	}

	auto* pCurrentNode = _pHead->_pNext;
	while (pCurrentNode != nullptr)
	{
		print(pCurrentNode->_pNodeData);
		pCurrentNode = pCurrentNode->_pNext;
	}
	
}
