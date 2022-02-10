/**---------------------------------------
* �ļ����ƣ� CSeqQueue.h
* ���������� ����ʵ�ֶ���
* ������ʶ�� xad 2022/2/9
*
* �޸ı�ʶ��
* �޸�������
------------------------------------------**/

#ifndef SEQQUEUE_SEQQUEUE_H
#define  SEQQUEUE_SEQQUEUE_H

const int MATH_MAX = 1024;

namespace Algo04
{
	class CSeqQueue
	{
	private:
		void*		_pData[MATH_MAX]; //����ָ��������
		int			_nSize;			  //Ԫ�ظ���

	public:
		CSeqQueue();
		~CSeqQueue();

		/**
		*  @brief    ���
		*
		*  @param    void * data
		*  @return   void
		*/
		void push_seqQueue(void* data);

		/**
		*  @brief    ���ض�ͷԪ��
		*
		*  @return   void*
		*/
		void* front_seqQueue();

		/**
		*  @brief    ����
		*
		*  @return   void
		*/
		void pop_seqQueue();

		/**
		*  @brief    ���ض�βԪ��
		*
		*  @return   void*
		*/
		void* back_seqQueue();

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
		void clear_seqQueue();

	};
}

#endif