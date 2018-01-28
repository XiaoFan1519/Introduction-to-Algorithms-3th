#pragma once
#include "../Exercise.h"

namespace Fan {
	class s_2_3_4 : public Algorithms::Exercise
	{
	public:
		s_2_3_4 ();
		~s_2_3_4 ();

		const std::string Name () const override;
		void Execute () const override;
	};
}

