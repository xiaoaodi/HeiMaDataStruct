/**---------------------------------------
* �ļ����ƣ� CSeqStack.h
* ���������� ����ʵ��ջ
* ������ʶ�� xad 2022/2/9
*
* �޸ı�ʶ��
* �޸�������
------------------------------------------**/


#ifndef CSQESTACK_SEQSTACK_H
#define CSQESTACK_SEQSTACK_H

const int MAX_SIZE = 1024;

// ����ģ���ջ��˳��洢
// �����Ҳ���Ϊջ��������Ƶ���ƶ�Ԫ��

namespace Algo05
{
	class CSeqStack
	{
	private:
		void *		_pData[MAX_SIZE];   //�洢Ԫ������
		int			_nSize;				//Ԫ�ظ���

	public:
		CSeqStack();
		~CSeqStack();

		/**
		*  @brief    ��ջ
		*
		*  @param    void * data
		*  @return   void
		*/
		void push_seqStack(void *data);

		/**
		*  @brief    ����ջ��Ԫ��
		*
		*  @return   void*
		*/
		void* top_seqStack();

		/**
		*  @brief    ��ջ
		*
		*  @return   void
		*/
		void pop_seqStack();

		/**
		*  @brief    �ж��Ƿ�Ϊ��
		*
		*  @return   bool
		*/
		bool is_empty() const;

		/**
		*  @brief    ����ջ��Ԫ�صĸ���
		*
		*  @return   int
		*/
		int get_size() const;

		/**
		*  @brief    ���ջ
		*
		*  @return   void
		*/
		void clear_seqStack();

	};
}

#endif // !1
