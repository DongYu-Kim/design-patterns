#include <iostream>
#include "chapter5_singleton_chocolate_boiler.h"

namespace chapter5 {
	void main() {
		std::cout << "========== Chapter5 ==========" << std::endl;
		ChocolateBoiler* boiler = ChocolateBoiler::GetInstance();
		boiler->Fill();
		boiler->Boil();
		boiler->Drain();
		ChocolateBoiler* boiler2 = ChocolateBoiler::GetInstance();

	}
}