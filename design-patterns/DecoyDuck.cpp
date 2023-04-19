#include <iostream>
#include "chapter1.h"
using std::cout;
using std::endl;
using namespace chapter1;

void DecoyDuck::quack() {}
void DecoyDuck::display() {
	cout << "나무오리" << endl;
}
void DecoyDuck::fly() {}