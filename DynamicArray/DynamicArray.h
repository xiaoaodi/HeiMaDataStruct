/**---------------------------------------
* 文件名称： CDynamicArray.h
* 功能描述： 实现数组函数
* 创建标识： xad 2022/2/8
*
* 修改标识：
* 修改描述：
------------------------------------------**/

#ifndef CDYNAMICARRAY_AYNAMICARRAY_H
#define CDYNAMICARRAY_AYNAMICARRAY_H

#include <iostream>
#include <string>

class CDynamicArray
{
private:
	int*	_pArr;			//存储动态数组的对象
	int		_nSize;			//数组元素的个数
	int		_nCapacity;		//数组容量

public:
	CDynamicArray();
	~CDynamicArray();
	/**
	*  @brief    添加元素
	*
	*  @param    int value
	*  @return   void
	*/
	void push_back_array(int value);

	void insert_array(int pos, int value);

	/**
	*  @brief    移除某个位置元素
	*
	*  @param    int pos
	*  @return   void
	*/
	void remove_array_pos(int pos);

	/**
	*  @brief    删除数组中的值
	*
	*  @param    int value
	*  @return   void
	*/
	void remove_array_value(int value);

	/**
	*  @brief    查找元数位置
	*
	*  @param    int value
	*  @return   int
	*/
	int find_array(int value);

	/**
	*  @brief    清除数组
	*
	*  @param    void
	*  @return   void
	*/
	void clear_array(void);

	/**
	*  @brief    获取元素个数
	*
	*  @param    void
	*  @return   int
	*/
	int get_size(void);

	/**
	*  @brief    获取容量大小
	*
	*  @param    void
	*  @return   int
	*/
	int get_capacity(void);

	/**
	*  @brief    查找某个位置的元素
	*
	*  @param    int pos
	*  @return   int
	*/
	int at_array(int pos);

	/**
	*  @brief    查找某个位置的元素
	*
	*  @param    int pos
	*  @param    int & value
	*  @return   bool
	*/
	bool at_array(int pos, int &value);

	/**
	*  @brief    打印数组
	*
	*  @param    void
	*  @return   void
	*/
	void print_array(void);
};

#endif CDYNAMICARRAY_AYNAMICARRAY_H
