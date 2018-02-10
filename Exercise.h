#pragma once
#include <iostream>
#include <vector>
#include <string>

namespace Algorithms{
	// 课后习题抽象类
	class Exercise
	{
		// 保存目前所有的课后习题
		static std::vector<const Exercise*> exercises;
	public:
		Exercise () = delete;
		Exercise (const Exercise* exercise);

		// 当前对象对应的题目名称
		virtual const std::string Name () const = 0;

		// 执行课后习题
		virtual void Execute () const = 0;

		// 打印所有题目
		static void ExecExercise ();
		~Exercise ();
	};

	// 生成指定数量的int数组
	std::vector<int> GenerateElement (int size);

	// 打印集合中的元素
	template<class T>
	void PrintCollection (std::vector<T>& collection)
	{
		for (auto element : collection)
		{
			std::cout << element << ' ';
		}
		std::cout << std::endl;
	}
}