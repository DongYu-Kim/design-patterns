#pragma once
#include "chapter12_combining_quackable_interface.h"
#include "chapter12_combining_observable.h"

namespace chapter12_combining {
	class MallardDuck : public Quackable {
	private:
		Observable* observable_ = nullptr;
	public:
		MallardDuck();
		~MallardDuck();
		virtual void Quack() override;
		virtual void RegisterObserver(Observer* observer) override;
		virtual void NotifyObservers() override;
		virtual std::string ToString() override;
	};

	class RedheadDuck : public Quackable {
	private:
		Observable* observable_ = nullptr;
	public:
		RedheadDuck();
		~RedheadDuck();
		virtual void Quack() override;
		virtual void RegisterObserver(Observer* observer) override;
		virtual void NotifyObservers() override;
		virtual std::string ToString() override;
	};

	class DecoyDuck : public Quackable {
	private:
		Observable* observable_ = nullptr;
	public:
		DecoyDuck();
		~DecoyDuck();
		virtual void Quack() override;
		virtual void RegisterObserver(Observer* observer) override;
		virtual void NotifyObservers() override;
		virtual std::string ToString() override;
	};

	class RubberDuck : public Quackable {
	private:
		Observable* observable_ = nullptr;
	public:
		RubberDuck();
		~RubberDuck();
		virtual void Quack() override;
		virtual void RegisterObserver(Observer* observer) override;
		virtual void NotifyObservers() override;
		virtual std::string ToString() override;
	};

	class DuckCall : public Quackable {
	private:
		Observable* observable_ = nullptr;
	public:
		DuckCall();
		~DuckCall();
		virtual void Quack() override;
		virtual void RegisterObserver(Observer* observer) override;
		virtual void NotifyObservers() override;
		virtual std::string ToString() override;
	};

	class Flock : public Quackable {
	private:
		std::vector<Quackable*> ducks_;
	public:
		~Flock();
		void Add(Quackable* duck);
		virtual void Quack() override;
		virtual void RegisterObserver(Observer* observer) override;
		virtual void NotifyObservers() override;
		virtual std::string ToString() override;
	};

	class Goose {
	public:
		void Honk();
		std::string ToString();
	};

	class GooseAdapter : public Quackable {
	private:
		Goose* goose_ = nullptr;
		Observable* observable_ = nullptr;
	public:
		GooseAdapter(Goose* goose);
		~GooseAdapter();
		virtual void Quack() override;
		virtual void RegisterObserver(Observer* observer) override;
		virtual void NotifyObservers() override;
		virtual std::string ToString() override;
	};
}