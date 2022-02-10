/**---------------------------------------
* �ļ����ƣ� CLinkList.h
* ���������� ����ʵ��
* ������ʶ�� xad 2022/2/8
*
* �޸ı�ʶ��
* �޸�������
------------------------------------------**/
#ifndef CLINKLSI_LINKLIST_H
#define CLINKLSI_LINKLIST_H

namespace Alog {

	// ��ӡ����ָ��
	typedef void(*PRINTLINKNODE)(void* data);

	typedef struct stuLinkNode
	{
		void*					_pNodeData;
		struct stuLinkNode*		_pNext;
	}stuLinkNode;

	class CLinkList
	{
	private:
		stuLinkNode*   _pHead;  //����ͷָ��
		int			   _nSize;	//������

	public:
		CLinkList();
		~CLinkList();

		/**
		*  @brief    ����Ԫ��
		*
		*  @param    int pos
		*  @param    void * data
		*  @return   void
		*/
		void insert_linkList(int pos ,void* data);

		/**
		*  @brief    �Ƴ�ĳ��λ��Ԫ��
		*
		*  @param    int pos
		*  @return   void
		*/
		void remove_linkList_pos(int pos);

		/**
		*  @brief    ��ȡԪ�ظ���
		*
		*  @param    void
		*  @return   int
		*/
		int get_size(void);

		/**
		*  @brief    ����Ԫ��λ��
		*
		*  @param    void * data
		*  @return   int
		*/
		int find_linkList_pos(void* data);

		/**
		*  @brief    ��ȡ��һ��Ԫ��
		*
		*  @param    void
		*  @return   void*
		*/
		void* get_frist_linkList_node(void);
		
		/**
		*  @brief    ��ӡ���������
		*
		*  @param    PRINTLINKNODE print
		*  @return   void
		*/
		void print_linkList(PRINTLINKNODE print);
	};
}


#endif