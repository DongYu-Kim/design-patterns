#include <iostream>
#include "chapter1.h"
using std::cout;
using std::endl;
using namespace chapter1;

void Duck::quack() {
	cout << "��!" << endl;
}
void Duck::swim() {
	cout << "÷��!" << endl;
}
void MallardDuck::display() {
	cout << "û�տ���" << endl;
}
void RedheadDuck::display() {
	cout << "�����Ӹ�����" << endl;
}