#include <iostream>
#include <vector>
#include "DynamicArray.h"

using namespace std;
void test_01(void);

int main()
{
	test_01();
	system("pause");
	return 0;
}

void test_01(void)
{
	CDynamicArray array;
	array.push_back_array(1);
	array.push_back_array(2); 
	array.push_back_array(31);
	array.push_back_array(4);
	array.push_back_array(5);
	array.push_back_array(6);
	array.push_back_array(8);
	array.print_array();

	std::cout << endl;
	std::cout << "at_array"<< array.at_array(3)<<"get_capacity:" << array.get_capacity() <<"get_size:"<< array.get_size();
	std::cout << std::endl;

	array.remove_array_pos(5);
	array.remove_array_pos(4);
	array.print_array();
	array.push_back_array(1);
	array.push_back_array(2);
	array.push_back_array(31);
	array.push_back_array(4);
	array.push_back_array(5);
	array.push_back_array(6);
	array.push_back_array(8);
	array.push_back_array(1);
	array.push_back_array(2);
	array.push_back_array(31);
	array.push_back_array(4);
	array.push_back_array(5);
	array.push_back_array(6);
	array.push_back_array(8);
	array.push_back_array(1);
	array.push_back_array(2);
	array.push_back_array(31);
	array.push_back_array(4);
	array.push_back_array(5);
	array.push_back_array(6);
	array.push_back_array(8);
	array.push_back_array(1);
	array.push_back_array(2);

	std::cout << "at_array" << array.at_array(3) << "get_capacity:" << array.get_capacity() << "get_size:" << array.get_size();
	int value = -1;
	int pos = 3;

	array.at_array(pos, value);
	std::cout << "at_array:"<< value << endl;

	array.clear_array();
	array.print_array();
	std::cout << "find_array:"<< array.find_array(4)<<std::endl;
	array.push_back_array(6);
	array.push_back_array(8);
	array.push_back_array(1);
	array.push_back_array(2);
	array.insert_array(3, 11);
	std::cout << "--------------" << endl;
	array.print_array();

	std::vector<int> VecArr;
}