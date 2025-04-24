//#include <iostream>
//#include <string>
//
//using namespace std;
//
//void test(int*& number)
//{
//	delete number;
//	number = new int;
//	*number = 25;
//}
//
//int main(void)
//{
//	int* ptr_value = new int;
//	*ptr_value = 10;
//
//	cout << "After value: " << *ptr_value << endl;
//
//	test(ptr_value);
//
//	cout << "Before value: " << *ptr_value << endl;
//}