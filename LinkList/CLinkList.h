/**---------------------------------------
* 文件名称： CLinkList.h
* 功能描述： 链表实现
* 创建标识： xad 2022/2/8
*
* 修改标识：
* 修改描述：
------------------------------------------**/
#ifndef CLINKLSI_LINKLIST_H
#define CLINKLSI_LINKLIST_H

namespace Alog {

	// 打印函数指针
	typedef void(*PRINTLINKNODE)(void* data);

	typedef struct stuLinkNode
	{
		void*					_pNodeData;
		struct stuLinkNode*		_pNext;
	}stuLinkNode;

	class CLinkList
	{
	private:
		stuLinkNode*   _pHead;  //链表头指针
		int			   _nSize;	//链表长度

	public:
		CLinkList();
		~CLinkList();

		/**
		*  @brief    插入元素
		*
		*  @param    int pos
		*  @param    void * data
		*  @return   void
		*/
		void insert_linkList(int pos ,void* data);

		/**
		*  @brief    移除某个位置元素
		*
		*  @param    int pos
		*  @return   void
		*/
		void remove_linkList_pos(int pos);

		/**
		*  @brief    获取元素个数
		*
		*  @param    void
		*  @return   int
		*/
		int get_size(void);

		/**
		*  @brief    查找元素位置
		*
		*  @param    void * data
		*  @return   int
		*/
		int find_linkList_pos(void* data);

		/**
		*  @brief    获取第一个元素
		*
		*  @param    void
		*  @return   void*
		*/
		void* get_frist_linkList_node(void);
		
		/**
		*  @brief    打印链表的数据
		*
		*  @param    PRINTLINKNODE print
		*  @return   void
		*/
		void print_linkList(PRINTLINKNODE print);
	};
}


#endif