#pragma once
#include <iostream>
#include <vector>
#include <string>

namespace Algorithms{
	// �κ�ϰ�������
	class Exercise
	{
		// ����Ŀǰ���еĿκ�ϰ��
		static std::vector<const Exercise*> exercises;
	public:
		Exercise () = delete;
		Exercise (const Exercise* exercise);

		// ��ǰ�����Ӧ����Ŀ����
		virtual const std::string Name () const = 0;

		// ��ӡÿ������
		virtual void Print () const = 0;

		// ��ӡ������Ŀ
		static void PrintExercise ();
		~Exercise ();
	};

	// ����ָ��������int����
	std::vector<int> GenerateElement (int size);

	// ��ӡ�����е�Ԫ��
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