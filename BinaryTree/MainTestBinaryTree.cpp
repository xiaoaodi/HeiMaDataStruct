#include <iostream>
#include "CBinaryTree.h"

using namespace std;
using namespace Algo05;

void test_06(void);

int main() 
{
	test_06();
	system("pause");
	return 0;
}

void test_06(void)
{
	CBinaryTree tree;
	tree.createBinaryTree();

	// �ݹ�ǰ�����
	std::cout << "�ݹ�ǰ�������" << std::endl;
	tree.recursion();
	std::cout << "\n****************************" << std::endl;

	// ����Ҷ�ӽ����Ŀ
	tree.calculateLeafNum();
	std::cout << "****************************" << std::endl;

	// ����������ĸ߶�
	tree.calculateTreeHeight();
	std::cout << "****************************" << std::endl;

	// �ǵݹ�ǰ�����
	std::cout << "�ǵݹ�ǰ�������" << std::endl;
	tree.nonRecursion();
	std::cout << "\n****************************" << std::endl;
	CBinaryTree copyTree;

	// ���������
	std::cout << "����������..." << std::endl;
	copyTree = tree;
	std::cout << "������������ǰ�������" << std::endl;
	copyTree.recursion();
	std::cout << "\n****************************" << std::endl;

	// #�ŷ�����������
	char nodeSeq[] = { 'A', 'B', '#', 'C', 'D', '#', '#', 'E','#', '#', 'F', '#', 'G', 'H', '#', '#', '#' };
	int num = 17;
	CBinaryTree seqTree;
	std::cout << "#�ŷ�����������..." << std::endl;
	seqTree.createBinaryTree(nodeSeq, num);
	std::cout << "#�ŷ�����������ǰ�������" << std::endl;
	seqTree.recursion();
	std::cout << "\n****************************" << std::endl;

	// �������ķ����л������л�
	std::string nodeSeqStr = "AB#CD##E##F#GH###";
	CBinaryTree seqTree2;
	std::cout << "�����������л�-" << nodeSeqStr << "..." << std::endl;
	seqTree2.deserializeTree(nodeSeqStr);
	std::cout << "�����л�������ǰ�������" << std::endl;
	seqTree2.recursion();
	std::cout << "\n���������л���" << std::endl;
	std::string nodeSeqStr2 = seqTree2.serializeTree();
	std::cout << nodeSeqStr2 << std::endl;

	// �Զ��������������ͷ��ڴ棨4�Σ�
}