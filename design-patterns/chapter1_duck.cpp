#include <iostream>
#include "chapter1_duck_interface.h"

using std::cout;
using std::endl;

namespace chapter1 {
	Duck::~Duck() {
		if (this->quack_behavior_) delete this->quack_behavior_;
		if (this->fly_behavior_) delete this->fly_behavior_;
	}
	void Duck::Swim() {
		cout << "รทบก" << endl;
	}
	void Duck::PerformQuack() {
		this->quack_behavior_->PerformQuack();
	}
	void Duck::PerformFly() {
		this->fly_behavior_->PerformFly();
	}
	void Duck::SetQuackBehavior(QuackBehavior* quack_behavior) {
		if (this->quack_behavior_) delete this->quack_behavior_;
		this->quack_behavior_ = quack_behavior;
	}
	void Duck::SetFlyBehavior(FlyBehavior* fly_behavior) {
		if (this->fly_behavior_) delete this->fly_behavior_;
		this->fly_behavior_ = fly_behavior;
	}
}
