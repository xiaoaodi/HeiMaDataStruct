#include "CBinaryTree.h"
#include <iostream>
#include <stack>

using namespace Algo05;

Algo05::CBinaryTree::CBinaryTree()
{
	_pRoot = nullptr;
}

Algo05::CBinaryTree::~CBinaryTree()
{
	std::cout << "\n-------------------" << std::endl;
	std::cout << "free BinaryTree: ";
	_freeBinaryTree(_pRoot); //�ݹ�ʵ���ͷſռ�
}

void Algo05::CBinaryTree::createBinaryTree()
{
	// �������
	// �������ʹ��new, ��������ɺ��node���Զ����٣�
	// ʹ��new֮���䲻�ᱻ�Զ����٣����Ǳ����ֶ��������������ͷ��ڴ棡

	auto *node1 = new BinaryNode{ 'A', nullptr, nullptr };
	auto *node2 = new BinaryNode{ 'B', nullptr, nullptr };
	auto *node3 = new BinaryNode{ 'C', nullptr, nullptr };
	auto *node4 = new BinaryNode{ 'D', nullptr, nullptr };
	auto *node5 = new BinaryNode{ 'E', nullptr, nullptr };
	auto *node6 = new BinaryNode{ 'F', nullptr, nullptr };
	auto *node7 = new BinaryNode{ 'G', nullptr, nullptr };
	auto *node8 = new BinaryNode{ 'H', nullptr, nullptr };

	// ��������ϵ
	node1->_pLeftNode = node2;
	node1->_pRightNode = node6;
	node2->_pRightNode = node3;
	node3->_pLeftNode = node4;
	node3->_pRightNode = node5;
	node6->_pRightNode = node7;
	node7->_pLeftNode = node8;

	_pRoot = node1;
}

void Algo05::CBinaryTree::createBinaryTree(char * nodeSeq, size_t num)
{
	if (nodeSeq == nullptr) {
		return;
	}

	if (_pRoot != nullptr) {
		_freeBinaryTree(_pRoot);
	}

	int pos = 0;
	_pRoot = _createBinaryTree(nodeSeq, num, pos);

}

void Algo05::CBinaryTree::recursion()
{
	if (_pRoot == nullptr) {
		return;
	}
	_recursion(_pRoot);

}

void Algo05::CBinaryTree::calculateLeafNum()
{
	if (_pRoot == nullptr) {
		return;
	}
	int num = 0;
	_calculateLeafNum(_pRoot, num);
	std::cout << "Ҷ�ӽ�����Ŀ:" << num << std::endl;

}

void Algo05::CBinaryTree::calculateTreeHeight()
{
	if (_pRoot == nullptr) {
		return;
	}
	int height = 0;
	_calculateTreeHeight(_pRoot, height);
	std::cout << "���ĸ߶�:" << height << std::endl;
}

void Algo05::CBinaryTree::nonRecursion()
{
	if (_pRoot == nullptr) {
		return;
	}

	std::stack<BiTreeStackNode> stk;
	BiTreeStackNode biTreeStackNode{ _pRoot, false };
	stk.push(biTreeStackNode);
	while (!stk.empty()) {
		BiTreeStackNode& node = stk.top();
		// �������¸���һ����nodeһ���Ľ�㣬����nodeһֱָ��stackջ�������ֽ���쳣��
		BiTreeStackNode rootNode{ node._pRoot, node._bFlag };
		stk.pop();
		if (rootNode._pRoot == nullptr) {
			continue;
		}
		if (rootNode._bFlag) {
			std::cout << rootNode._pRoot->_ch << " ";
			continue;
		}
		rootNode._bFlag = true;

		// ͨ��������ջ��˳�򣬿��Էֱ�ʵ��ǰ�����򡢺��������

		// ��ǰ�����ҽ����ջ
		BiTreeStackNode rnode{ rootNode._pRoot->_pLeftNode, false };
		stk.push(rnode);
		// ��ǰ����������ջ
		BiTreeStackNode lnode{ rootNode._pRoot->_pRightNode, false };
		stk.push(lnode);
		// ��ǰ�����ջ
		stk.push(rootNode);
	}

}

std::string Algo05::CBinaryTree::serializeTree()
{
	return _serializeTree(_pRoot);
}

void Algo05::CBinaryTree::deserializeTree(const std::string & treeSeq)
{
	if (treeSeq.empty()) {
		return;
	}
	if (_pRoot != nullptr) {
		_freeBinaryTree(_pRoot);
	}
	int pos = 0;
	_pRoot = _deserializeTree(treeSeq, pos);

}

CBinaryTree & Algo05::CBinaryTree::operator=(const CBinaryTree & tree)
{
	// TODO: �ڴ˴����� return ���
	if (tree._pRoot == nullptr) {
		return *this;
	}
	// ����Ƿ����Ҹ�ֵ��
	if (this == &tree) {
		return *this;
	}
	//    BinaryNode *root_;
	//    _copyBinaryTree(tree.root, &root_);
	this->_pRoot = _copyBinaryTree(tree._pRoot);
	return *this;
}

void Algo05::CBinaryTree::_freeBinaryTree(BinaryNode * currentRoot)
{
	// ����������ٸ����
	if (currentRoot == nullptr) {
		return;
	}
	// �ͷ�������
	_freeBinaryTree(currentRoot->_pLeftNode);
	// �ͷ�������
	_freeBinaryTree(currentRoot->_pRightNode);
	std::cout << currentRoot->_ch << " ";
	// �ͷŵ�ǰ���
	delete currentRoot;
}

BinaryNode * Algo05::CBinaryTree::_createBinaryTree(const char * nodeSeq, size_t num, int & pos)
{
	if (nodeSeq == nullptr) {
		return nullptr;
	}

	if (pos >= num) {
		return nullptr;
	}

	if (nodeSeq[pos] == '#') {
		pos++;
		return nullptr;
	}

	auto pNode = new BinaryNode{ nodeSeq[pos], nullptr, nullptr };
	pos++;
	pNode->_pLeftNode = _createBinaryTree(nodeSeq, num, pos);
	pNode->_pRightNode = _createBinaryTree(nodeSeq, num, pos);
	return pNode;

}

void Algo05::CBinaryTree::_recursion(BinaryNode * currentRoot)
{
	if (currentRoot == nullptr) {
		return;
	}

	// ���ʸ����
	std::cout << currentRoot->_ch << " ";

	// ����������
	_recursion(currentRoot->_pLeftNode);

	// ����������
	_recursion(currentRoot->_pRightNode);

}

void Algo05::CBinaryTree::_calculateLeafNum(BinaryNode * currentRoot, int & num)
{
	if (currentRoot == nullptr)
	{
		return;
	}

	if (currentRoot->_pLeftNode == nullptr && currentRoot->_pRightNode == nullptr)
	{
		num++;
	}

	/// ������Ҷ�ӽ����Ŀ
	_calculateLeafNum(currentRoot->_pLeftNode, num);

	///������Ҷ�ӽ����Ŀ
	_calculateLeafNum(currentRoot->_pRightNode, num);
}

void Algo05::CBinaryTree::_calculateTreeHeight(BinaryNode * currentRoot, int & height)
{
	if (currentRoot == nullptr) {
		return;
	}

	int lh = 0, rh = 0;
	_calculateTreeHeight(currentRoot->_pLeftNode, lh);
	_calculateTreeHeight(currentRoot->_pRightNode, rh);
	height = 1 + ((lh > rh) ? lh : rh);

}

void Algo05::CBinaryTree::_copyBinaryTree(BinaryNode * currentRoot, BinaryNode ** copyRoot)
{
	if (currentRoot == nullptr) {
		return;
	}
	*copyRoot = new BinaryNode{ currentRoot->_ch, nullptr, nullptr };
	_copyBinaryTree(currentRoot->_pLeftNode, &((*copyRoot)->_pLeftNode));
	_copyBinaryTree(currentRoot->_pRightNode, &((*copyRoot)->_pRightNode));

}

BinaryNode * Algo05::CBinaryTree::_copyBinaryTree(BinaryNode * currentRoot)
{
	if (currentRoot == nullptr) {
		return nullptr;
	}
	// ����������
	BinaryNode *lchild = _copyBinaryTree(currentRoot->_pLeftNode);

	// ����������
	BinaryNode *rchild = _copyBinaryTree(currentRoot->_pRightNode);

	// �������
	auto *newNode = new BinaryNode{ currentRoot->_ch, lchild, rchild };
	return newNode;

}

std::string Algo05::CBinaryTree::_serializeTree(BinaryNode * currentRoot)
{
	return std::string();
}

BinaryNode * Algo05::CBinaryTree::_deserializeTree(const std::string & treeSeq, int & pos)
{
	if (treeSeq.empty()) {
		return nullptr;
	}
	if (pos >= treeSeq.size()) {
		return nullptr;
	}
	char ch = treeSeq.at(pos);
	if (ch == '#') {
		pos++;
		return nullptr;
	}
	auto *node = new BinaryNode{ ch, nullptr, nullptr };
	pos++;
	node->_pLeftNode = _deserializeTree(treeSeq, pos);
	node->_pRightNode = _deserializeTree(treeSeq, pos);
	return node;

}
