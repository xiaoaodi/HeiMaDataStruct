/**---------------------------------------
* 文件名称： CLinkQueue.h
* 功能描述： 链表队列实现
* 创建标识： xad 2022/2/9
*
* 修改标识：
* 修改描述：
------------------------------------------**/

#ifndef  LINKQUEUE_LINKQUEUE_H
#define  LINKQUEUE_LINKQUEUE_H

namespace Algo02
{
	typedef struct stuLinkNode
	{
		struct stuLinkNode* _pNextNode; //队列结点
	}LinkNode;

	class CLinkQueue
	{
	private:
		LinkNode*		_pHead; //头结点
		int				_nSize;  //队列元素个数
	public:
		CLinkQueue();

		~CLinkQueue();

		/**
		*  @brief    入栈操作
		*
		*  @param    LinkNode * data
		*  @return   void
		*/
		void push_linkQueue(LinkNode* data);

		/**
		*  @brief    返回队头元素
		*
		*  @return   void*
		*/
		void* front_linkQueue() const;

		/**
		*  @brief    出队
		*
		*  @return   void
		*/
		void pop_linkQueue();

		/**
		*  @brief    返回队尾元素
		*
		*  @return   void*
		*/
		void* back_linkQueue();

		/**
		*  @brief    返回大小
		*
		*  @return   int
		*/
		int get_size() const;

		/**
		*  @brief    清空队列
		*
		*  @return   void
		*/
		void clear_linkQueue();

	};
}

#endif