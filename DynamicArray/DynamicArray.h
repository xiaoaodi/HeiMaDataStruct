/**---------------------------------------
* �ļ����ƣ� CDynamicArray.h
* ���������� ʵ�����麯��
* ������ʶ�� xad 2022/2/8
*
* �޸ı�ʶ��
* �޸�������
------------------------------------------**/

#ifndef CDYNAMICARRAY_AYNAMICARRAY_H
#define CDYNAMICARRAY_AYNAMICARRAY_H

#include <iostream>
#include <string>

class CDynamicArray
{
private:
	int*	_pArr;			//�洢��̬����Ķ���
	int		_nSize;			//����Ԫ�صĸ���
	int		_nCapacity;		//��������

public:
	CDynamicArray();
	~CDynamicArray();
	/**
	*  @brief    ���Ԫ��
	*
	*  @param    int value
	*  @return   void
	*/
	void push_back_array(int value);

	void insert_array(int pos, int value);

	/**
	*  @brief    �Ƴ�ĳ��λ��Ԫ��
	*
	*  @param    int pos
	*  @return   void
	*/
	void remove_array_pos(int pos);

	/**
	*  @brief    ɾ�������е�ֵ
	*
	*  @param    int value
	*  @return   void
	*/
	void remove_array_value(int value);

	/**
	*  @brief    ����Ԫ��λ��
	*
	*  @param    int value
	*  @return   int
	*/
	int find_array(int value);

	/**
	*  @brief    �������
	*
	*  @param    void
	*  @return   void
	*/
	void clear_array(void);

	/**
	*  @brief    ��ȡԪ�ظ���
	*
	*  @param    void
	*  @return   int
	*/
	int get_size(void);

	/**
	*  @brief    ��ȡ������С
	*
	*  @param    void
	*  @return   int
	*/
	int get_capacity(void);

	/**
	*  @brief    ����ĳ��λ�õ�Ԫ��
	*
	*  @param    int pos
	*  @return   int
	*/
	int at_array(int pos);

	/**
	*  @brief    ����ĳ��λ�õ�Ԫ��
	*
	*  @param    int pos
	*  @param    int & value
	*  @return   bool
	*/
	bool at_array(int pos, int &value);

	/**
	*  @brief    ��ӡ����
	*
	*  @param    void
	*  @return   void
	*/
	void print_array(void);
};

#endif CDYNAMICARRAY_AYNAMICARRAY_H
