#pragma once
namespace chapter1 {}
using namespace chapter1;

class Duck {
public:
	virtual void quack();
	void swim();
	virtual void fly();
	virtual void display() = 0;
};

class MallardDuck : public Duck {
public:
	virtual void display() override;
};

class RedheadDuck : public Duck {
public:
	virtual void display() override;
};

class RubberDuck : public Duck {
public:
	virtual void quack() override;
	virtual void display() override;
	virtual void fly() override;
};

class DecoyDuck : public Duck {
public:
	virtual void quack() override;
	virtual void display() override;
	virtual void fly() override;
};