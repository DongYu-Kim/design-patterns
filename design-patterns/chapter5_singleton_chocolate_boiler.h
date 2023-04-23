#pragma once

namespace chapter5 {
	class ChocolateBoiler {
	private:
		bool empty_ = false;
		bool boiled_ = false;
		static ChocolateBoiler* unique_instance_;

		ChocolateBoiler();
	public:
		static ChocolateBoiler* GetInstance();
		void Fill();
		void Drain();
		void Boil();
		bool IsEmpty();
		bool IsBoiled();
	};
}