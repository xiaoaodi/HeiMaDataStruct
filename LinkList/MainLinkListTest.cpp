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
	// ��������
	CLinkList list;

	// ��������
	Person p1 = { "aaa", 18, 100 };
	Person p2 = { "bbb", 19, 99 };
	Person p3 = { "ccc", 20, 101 };
	Person p4 = { "ddd", 17, 97 };
	Person p5 = { "eee", 16, 59 };

	// ���ݲ�������

	list.insert_linkList(0, &p1);
	list.insert_linkList(0, &p2);
	list.insert_linkList(0, &p3);
	list.insert_linkList(0, &p4);
	list.insert_linkList(0, &p5);

	// ��ӡ
	list.print_linkList(myPrint);

	list.remove_linkList_pos(3);

	// ��ӡ
	std::cout << "----------------------" << std::endl;
	list.print_linkList(myPrint);

	// ���ص�һ�����
	std::cout << "---------���ҽ��-------------" << std::endl;
	auto p = (Person *)list.get_frist_linkList_node();
	std::cout << "Name:" << p->_strName << " Age:" << p->_nAge << " Score:" << p->_nSorce << std::endl;

	// ����(��������)
	std::cout << "----------------------" << std::endl;
	int pos = list.find_linkList_pos(&p3);
	std::cout << "Name:" << p->_strName << " Age:" << p->_nAge << " Score:" << p->_nSorce << std::endl;
	std::cout << "pos: " << pos << std::endl;
	int size = list.get_size();
	std::cout << "size: " << size << std::endl;

	// �Զ�����LinkList�������� ����
}

void myPrint(void * data)
{
	auto *p = (Person *)data;
	std::cout << "Name:" << p->_strName << " Age:" << p->_nAge << " Score:" << p->_nSorce << std::endl;

}