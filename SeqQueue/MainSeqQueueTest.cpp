#include <iostream>
#include "CSeqQueue.h"


using namespace std;
using namespace Algo04;

typedef struct PERSON {
	char name[64];
	int age;
}Person;


void test_05(void);

int main()
{
	test_05();
	system("pause");
	return 0;
}

void test_05(void)
{
	// ��������
	CSeqQueue queue;

	// ��������
	Person p1 = { "aaa", 10 };
	Person p2 = { "bbb", 20 };
	Person p3 = { "ccc", 30 };
	Person p4 = { "ddd", 40 };
	Person p5 = { "eee", 50 };

	// ���������
	queue.push_seqQueue(&p1);
	queue.push_seqQueue(&p2);
	queue.push_seqQueue(&p3);
	queue.push_seqQueue(&p4);
	queue.push_seqQueue(&p5);

	// �����βԪ��
	auto backPerson = (Person*)queue.back_seqQueue();
	std::cout << "Name:" << backPerson->name << " Age:" << backPerson->age << std::endl;

	// ���
	while (queue.get_size() > 0) {
		// ȡ��ͷԪ��
		auto p = (Person*)queue.front_seqQueue();
		std::cout << "Name:" << p->name << " Age:" << p->age << std::endl;
		// �Ӷ�ͷ����Ԫ��
		queue.pop_seqQueue();
	}
	// �Զ�������������


}