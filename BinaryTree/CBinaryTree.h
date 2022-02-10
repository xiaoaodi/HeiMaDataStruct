/**---------------------------------------
* �ļ����ƣ� CBinaryTree.h
* ���������� ������ʵ��
* ������ʶ�� Ф�ĵ� 2022/2/9
*
* �޸ı�ʶ��
* �޸�������
------------------------------------------**/
#ifndef CBIANARYTREE_BINARYTREE_H
#define CBIANARYTREE_BINARYTREE_H

#include <string>

namespace Algo05
{
	typedef struct BINARYNODE
	{
		char _ch;						  //�洢����
		struct BINARYNODE*	 _pLeftNode;  //���ӽ��
		struct BINARYNODE*	_pRightNode;  //�Һ��ӽ��
	}BinaryNode;

	typedef struct BITREESTACKNODE
	{
		BinaryNode *		_pRoot;
		bool				_bFlag;
	}BiTreeStackNode;


	class CBinaryTree
	{
	private:
		BinaryNode *		_pRoot;   //���ڵ�
	public:
		CBinaryTree();

		~CBinaryTree();

		/**
		*  @brief    ����������
		*
		*  @return   void
		*/
		void createBinaryTree();

		/**
		*  @brief    ����������
		*
		*  @param    char * nodeSeq
		*  @param    size_t num
		*  @return   void
		*/
		void createBinaryTree(char* nodeSeq, size_t num);

		/**
		*  @brief    ��������ݹ�ʵ��
		*
		*  @return   void
		*/
		void recursion();

		/**
		*  @brief    ����Ҷ�ӽ����Ŀ
		*
		*  @return   void
		*/
		void calculateLeafNum();

		/**
		*  @brief    ����������ĸ߶�
		*
		*  @return   void
		*/
		void calculateTreeHeight();

		/**
		*  @brief    ��������ǵݹ�ʵ�֣�����STL�е�stackʵ��
		*
		*  @return   void
		*/
		void nonRecursion();

		/**
		*  @brief    ���л�
		*
		*  @return   std::string
		*/
		std::string serializeTree();

		/**
		*  @brief    �����л�
		*
		*  @param    const std::string & treeSeq
		*  @return   void
		*/
		void deserializeTree(const std::string &treeSeq);

		// ���ظ�ֵ�������ʵ�ֿ���
		CBinaryTree& operator=(const CBinaryTree &tree);

	private:
		static void _freeBinaryTree(BinaryNode* currentRoot);

		static BinaryNode* _createBinaryTree(const char* nodeSeq, size_t num, int &pos);

		static void _recursion(BinaryNode* currentRoot);

		static void _calculateLeafNum(BinaryNode* currentRoot, int& num);

		static void _calculateTreeHeight(BinaryNode* currentRoot, int& height);

		static void _copyBinaryTree(BinaryNode* currentRoot, BinaryNode** copyRoot);

		static BinaryNode* _copyBinaryTree(BinaryNode* currentRoot);

		static std::string _serializeTree(BinaryNode* currentRoot);

		static BinaryNode* _deserializeTree(const std::string &treeSeq, int &pos);

	};


}

#endif