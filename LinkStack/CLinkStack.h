/**---------------------------------------
* 文件名称： CLinkStack.h
* 功能描述： 栈实现
* 创建标识： xad 2022/2/9
*
* 修改标识：
* 修改描述：
------------------------------------------**/

#ifndef CLINKSTACK_LINKSTACK_H
#define CLINKSTACK_LINKSTACK_H

namespace Algo03
{
	// 链式栈的结点
	typedef struct LINKNODE {
		struct LINKNODE* _pNext;
	}LinkNode;


	class ClinkStack
	{
	private:
		LinkNode	_pHead;		//头节点
		int			_nSize;		//栈结点个数
	public:
		ClinkStack();
		~ClinkStack();

		/**
		*  @brief    入栈
		*
		*  @param    LinkNode * data
		*  @return   void
		*/
		void push_linkStack(LinkNode* data);

		/**
		*  @brief    出栈
		*
		*  @return   void
		*/
		void pop_linkStack();

		/**
		*  @brief    返回栈顶元素
		*
		*  @return   Algo03::LinkNode*
		*/
		LinkNode* top_linkStack() const;

		/**
		*  @brief    返回栈元素个数
		*
		*  @return   int
		*/
		int get_size()const;

		/**
		*  @brief    清空栈
		*
		*  @return   void
		*/
		void clear_linkStack();
	};

}

#endif