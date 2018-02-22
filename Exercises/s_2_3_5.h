#pragma once
#include "../Exercise.h"

#pragma once
#include "../Exercise.h"

namespace Fan {
	class s_2_3_5 : public Algorithms::Exercise
	{
	public:
		s_2_3_5 ();
		~s_2_3_5 ();

		const std::string Name () const override;
		void Execute () const override;
	};
}

