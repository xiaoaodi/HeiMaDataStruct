/**---------------------------------------
* �ļ����ƣ� CLinkQueue.h
* ���������� �������ʵ��
* ������ʶ�� xad 2022/2/9
*
* �޸ı�ʶ��
* �޸�������
------------------------------------------**/

#ifndef  LINKQUEUE_LINKQUEUE_H
#define  LINKQUEUE_LINKQUEUE_H

namespace Algo02
{
	typedef struct stuLinkNode
	{
		struct stuLinkNode* _pNextNode; //���н��
	}LinkNode;

	class CLinkQueue
	{
	private:
		LinkNode*		_pHead; //ͷ���
		int				_nSize;  //����Ԫ�ظ���
	public:
		CLinkQueue();

		~CLinkQueue();

		/**
		*  @brief    ��ջ����
		*
		*  @param    LinkNode * data
		*  @return   void
		*/
		void push_linkQueue(LinkNode* data);

		/**
		*  @brief    ���ض�ͷԪ��
		*
		*  @return   void*
		*/
		void* front_linkQueue() const;

		/**
		*  @brief    ����
		*
		*  @return   void
		*/
		void pop_linkQueue();

		/**
		*  @brief    ���ض�βԪ��
		*
		*  @return   void*
		*/
		void* back_linkQueue();

		/**
		*  @brief    ���ش�С
		*
		*  @return   int
		*/
		int get_size() const;

		/**
		*  @brief    ��ն���
		*
		*  @return   void
		*/
		void clear_linkQueue();

	};
}

#endif