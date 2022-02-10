#include <iostream>
#include "CLinkList.h"


using namespace std;
using namespace Alog;

void myPrint(void * data);
void test_02(void);

typedef struct stuPerson
{
	char	_strName[64];
	int		_nAge;
	int		_nSorce;
}Person;

int main() {
	test_02();
	system("pause");
	return 0;
}

void test_02()
{
	// 创建链表
	CLinkList list;

	// 创建数据
	Person p1 = { "aaa", 18, 100 };
	Person p2 = { "bbb", 19, 99 };
	Person p3 = { "ccc", 20, 101 };
	Person p4 = { "ddd", 17, 97 };
	Person p5 = { "eee", 16, 59 };

	// 数据插入链表

	list.insert_linkList(0, &p1);
	list.insert_linkList(0, &p2);
	list.insert_linkList(0, &p3);
	list.insert_linkList(0, &p4);
	list.insert_linkList(0, &p5);

	// 打印
	list.print_linkList(myPrint);

	list.remove_linkList_pos(3);

	// 打印
	std::cout << "----------------------" << std::endl;
	list.print_linkList(myPrint);

	// 返回第一个结点
	std::cout << "---------查找结果-------------" << std::endl;
	auto p = (Person *)list.get_frist_linkList_node();
	std::cout << "Name:" << p->_strName << " Age:" << p->_nAge << " Score:" << p->_nSorce << std::endl;

	// 查找(新增测试)
	std::cout << "----------------------" << std::endl;
	int pos = list.find_linkList_pos(&p3);
	std::cout << "Name:" << p->_strName << " Age:" << p->_nAge << " Score:" << p->_nSorce << std::endl;
	std::cout << "pos: " << pos << std::endl;
	int size = list.get_size();
	std::cout << "size: " << size << std::endl;

	// 自动调用LinkList析构函数 销毁
}

void myPrint(void * data)
{
	auto *p = (Person *)data;
	std::cout << "Name:" << p->_strName << " Age:" << p->_nAge << " Score:" << p->_nSorce << std::endl;

}