#pragma once
#include "../Exercise.h"

namespace Fan {
	class MergeSort : Algorithms::Exercise
	{
	public:
		MergeSort ();
		~MergeSort ();

		const std::string Name () const override;
		void Execute () const override;
	};
}