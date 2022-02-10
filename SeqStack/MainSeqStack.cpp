#include <iostream>
#include "CSeqStack.h"

using namespace std;
using namespace Algo05;

typedef struct  PERSON {
	char name[64];
	int age;
}Person;

void test_06(void);

int main() {
	test_06();
	system("pause");
	return 0;
}

void test_06(void)
{
	// ����ջ
	CSeqStack stack;

	//��������
	Person p1 = { "aaa", 10 };
	Person p2 = { "bbb", 20 };
	Person p3 = { "ccc", 30 };
	Person p4 = { "ddd", 40 };
	Person p5 = { "eee", 50 };

	// ��ջ
	stack.push_seqStack(&p1);
	stack.push_seqStack(&p2);
	stack.push_seqStack(&p3);
	stack.push_seqStack(&p4);
	stack.push_seqStack(&p5);

	while (stack.get_size() > 0) {
		// ����ջ��Ԫ��
		auto *person = (Person *)stack.top_seqStack();
		std::cout << "Name:" << person->name << " Age:" << person->age << std::endl;
		// ����ջ��Ԫ��
		stack.pop_seqStack();
	}

	// �����������ã��ͷ��ڴ�
}