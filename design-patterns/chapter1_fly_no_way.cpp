#include <iostream>
#include "chapter1_duck_behavior.h"

using std::cout;
using std::endl;

namespace chapter1_duck {
	void FlyNoWay::PerformFly() {
		cout << "...(날지 못 한다)" << endl;
	}
}