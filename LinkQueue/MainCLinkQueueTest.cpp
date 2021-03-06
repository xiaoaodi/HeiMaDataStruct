#include <iostream>
#include "CLinkQueue.h"
#include <memory>

using namespace std;
using namespace Algo02;

typedef struct PERSON {
	LinkNode node;
	char name[64];
	int age;
}Person;


void test_03(void);

int main()
{

	test_03();
	system("pause");
	return 0;
}

void test_03(void)
{
	// 创建队列
	CLinkQueue queue;

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

	// 数据入队列
	queue.push_linkQueue((LinkNode*)&p1);
	queue.push_linkQueue((LinkNode*)&p2);
	queue.push_linkQueue((LinkNode*)&p3);
	queue.push_linkQueue((LinkNode*)&p4);
	queue.push_linkQueue((LinkNode*)&p5);

	// 输出队尾元素
	auto backPerson = (Person*)queue.back_linkQueue();
	std::cout << "Name:" << backPerson->name << " Age:" << backPerson->age << std::endl;

	// 输出
	while (queue.get_size() > 0) {
		// 取队头元素
		auto p = (Person*)queue.front_linkQueue();
		std::cout << "Name:" << p->name << " Age:" << p->age << std::endl;
		// 从队头弹出元素
		queue.pop_linkQueue();
	}

	// 自动调用析构函数
}