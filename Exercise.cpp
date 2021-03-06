﻿#include "Exercise.h"

namespace Algorithms {

	// 初始化
	std::vector<const Exercise*> Exercise::exercises;

	Exercise::Exercise (const Exercise* exercise)
	{
		exercises.push_back (exercise);
	}

	void Exercise::ExecExercise ()
	{
		for (auto exercise : exercises)
		{
			std::cout << "===== " << exercise->Name () << std::endl;
			exercise->Execute ();
			std::cout << "===== " << exercise->Name () << std::endl;
			std::cout << std::endl;
		}
	}

	Exercise::~Exercise ()
	{
	}

	std::vector<int> GenerateElement (int size) {
		std::vector<int> vec;
		for (int i = 0; i < size; i++)
		{
			int element = std::rand () % 100 + 1;
			vec.push_back (element);
		}

		return vec;
	}
}