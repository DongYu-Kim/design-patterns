#include <iostream>
#include "chapter1_duck_behavior.h"

using std::cout;
using std::endl;

namespace chapter1 {
	void MuteQuack::PerformQuack() {
		cout << "...(울지 못 한다)" << endl;
	}
}