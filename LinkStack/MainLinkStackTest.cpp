#include <iostream>
#include "CLinkStack.h"

using namespace std;
using namespace Algo03;

void test_04(void);

typedef struct PERSON {
	LinkNode node;
	char name[64];
	int age;
}Person;

int main()
{
	test_04();
	system("pause");
	return 0;
}

void test_04()
{
	// 创建栈
	Algo03::ClinkStack stack;

	// 创建数据
	Person p1, p2, p3, p4, p5;
	strcpy_s(p1.name, "aaa");
	strcpy_s(p2.name, "bbb");
	strcpy_s(p3.name, "ccc");
	strcpy_s(p4.name, "ddd");
	strcpy_s(p5.name, "eee");

	p1.age = 10;
	p2.age = 20;
	p3.age = 30;
	p4.age = 40;
	p5.age = 50;

	// 入栈
	stack.push_linkStack((LinkNode*)&p1);
	stack.push_linkStack((LinkNode*)&p2);
	stack.push_linkStack((LinkNode*)&p3);
	stack.push_linkStack((LinkNode*)&p4);
	stack.push_linkStack((LinkNode*)&p5);

	while (stack.get_size() > 0) {
		// 取出栈顶元素
		auto *p = (Person *)stack.top_linkStack();
		std::cout << "Name:" << p->name << " Age:" << p->age << std::endl;
		// 弹出栈顶元素
		stack.pop_linkStack();
	}

	// 自动析构，销毁stack

}