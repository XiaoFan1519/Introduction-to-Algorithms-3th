#pragma once
#include "../Exercise.h"

namespace Fan {
	class s_2_1_2 : public Algorithms::Exercise
	{
	public:
		s_2_1_2 ();
		~s_2_1_2 ();

		const std::string Name () const override;
		void Execute () const override;
	};
}