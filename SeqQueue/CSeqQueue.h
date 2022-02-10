/**---------------------------------------
* 文件名称： CSeqQueue.h
* 功能描述： 数组实现队列
* 创建标识： xad 2022/2/9
*
* 修改标识：
* 修改描述：
------------------------------------------**/

#ifndef SEQQUEUE_SEQQUEUE_H
#define  SEQQUEUE_SEQQUEUE_H

const int MATH_MAX = 1024;

namespace Algo04
{
	class CSeqQueue
	{
	private:
		void*		_pData[MATH_MAX]; //数组指针存放数据
		int			_nSize;			  //元素个数

	public:
		CSeqQueue();
		~CSeqQueue();

		/**
		*  @brief    入队
		*
		*  @param    void * data
		*  @return   void
		*/
		void push_seqQueue(void* data);

		/**
		*  @brief    返回队头元素
		*
		*  @return   void*
		*/
		void* front_seqQueue();

		/**
		*  @brief    出队
		*
		*  @return   void
		*/
		void pop_seqQueue();

		/**
		*  @brief    返回队尾元素
		*
		*  @return   void*
		*/
		void* back_seqQueue();

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
		void clear_seqQueue();

	};
}

#endif