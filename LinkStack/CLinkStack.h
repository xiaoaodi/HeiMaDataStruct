/**---------------------------------------
* �ļ����ƣ� CLinkStack.h
* ���������� ջʵ��
* ������ʶ�� xad 2022/2/9
*
* �޸ı�ʶ��
* �޸�������
------------------------------------------**/

#ifndef CLINKSTACK_LINKSTACK_H
#define CLINKSTACK_LINKSTACK_H

namespace Algo03
{
	// ��ʽջ�Ľ��
	typedef struct LINKNODE {
		struct LINKNODE* _pNext;
	}LinkNode;


	class ClinkStack
	{
	private:
		LinkNode	_pHead;		//ͷ�ڵ�
		int			_nSize;		//ջ������
	public:
		ClinkStack();
		~ClinkStack();

		/**
		*  @brief    ��ջ
		*
		*  @param    LinkNode * data
		*  @return   void
		*/
		void push_linkStack(LinkNode* data);

		/**
		*  @brief    ��ջ
		*
		*  @return   void
		*/
		void pop_linkStack();

		/**
		*  @brief    ����ջ��Ԫ��
		*
		*  @return   Algo03::LinkNode*
		*/
		LinkNode* top_linkStack() const;

		/**
		*  @brief    ����ջԪ�ظ���
		*
		*  @return   int
		*/
		int get_size()const;

		/**
		*  @brief    ���ջ
		*
		*  @return   void
		*/
		void clear_linkStack();
	};

}

#endif