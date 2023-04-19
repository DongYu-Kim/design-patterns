class Duck {
public:
	virtual void quack();
	void swim();
	virtual void fly();
	virtual void display() = 0;
};