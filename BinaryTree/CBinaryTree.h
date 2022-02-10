/**---------------------------------------
* 文件名称： CBinaryTree.h
* 功能描述： 二叉树实现
* 创建标识： 肖澳笛 2022/2/9
*
* 修改标识：
* 修改描述：
------------------------------------------**/
#ifndef CBIANARYTREE_BINARYTREE_H
#define CBIANARYTREE_BINARYTREE_H

#include <string>

namespace Algo05
{
	typedef struct BINARYNODE
	{
		char _ch;						  //存储数据
		struct BINARYNODE*	 _pLeftNode;  //左孩子结点
		struct BINARYNODE*	_pRightNode;  //右孩子结点
	}BinaryNode;

	typedef struct BITREESTACKNODE
	{
		BinaryNode *		_pRoot;
		bool				_bFlag;
	}BiTreeStackNode;


	class CBinaryTree
	{
	private:
		BinaryNode *		_pRoot;   //根节点
	public:
		CBinaryTree();

		~CBinaryTree();

		/**
		*  @brief    创建二叉树
		*
		*  @return   void
		*/
		void createBinaryTree();

		/**
		*  @brief    创建二叉树
		*
		*  @param    char * nodeSeq
		*  @param    size_t num
		*  @return   void
		*/
		void createBinaryTree(char* nodeSeq, size_t num);

		/**
		*  @brief    先序遍历递归实现
		*
		*  @return   void
		*/
		void recursion();

		/**
		*  @brief    计算叶子结点数目
		*
		*  @return   void
		*/
		void calculateLeafNum();

		/**
		*  @brief    计算二叉树的高度
		*
		*  @return   void
		*/
		void calculateTreeHeight();

		/**
		*  @brief    先序遍历非递归实现，借助STL中的stack实现
		*
		*  @return   void
		*/
		void nonRecursion();

		/**
		*  @brief    序列化
		*
		*  @return   std::string
		*/
		std::string serializeTree();

		/**
		*  @brief    反序列化
		*
		*  @param    const std::string & treeSeq
		*  @return   void
		*/
		void deserializeTree(const std::string &treeSeq);

		// 重载赋值运算符，实现拷贝
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