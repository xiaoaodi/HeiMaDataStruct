/**---------------------------------------
* 文件名称： CSeqStack.h
* 功能描述： 数组实现栈
* 创建标识： xad 2022/2/9
*
* 修改标识：
* 修改描述：
------------------------------------------**/


#ifndef CSQESTACK_SEQSTACK_H
#define CSQESTACK_SEQSTACK_H

const int MAX_SIZE = 1024;

// 数组模拟堆栈的顺序存储
// 数组右侧作为栈顶，无需频繁移动元素

namespace Algo05
{
	class CSeqStack
	{
	private:
		void *		_pData[MAX_SIZE];   //存储元素数组
		int			_nSize;				//元素个数

	public:
		CSeqStack();
		~CSeqStack();

		/**
		*  @brief    入栈
		*
		*  @param    void * data
		*  @return   void
		*/
		void push_seqStack(void *data);

		/**
		*  @brief    返回栈顶元素
		*
		*  @return   void*
		*/
		void* top_seqStack();

		/**
		*  @brief    出栈
		*
		*  @return   void
		*/
		void pop_seqStack();

		/**
		*  @brief    判断是否为空
		*
		*  @return   bool
		*/
		bool is_empty() const;

		/**
		*  @brief    返回栈中元素的个数
		*
		*  @return   int
		*/
		int get_size() const;

		/**
		*  @brief    清空栈
		*
		*  @return   void
		*/
		void clear_seqStack();

	};
}

#endif // !1
