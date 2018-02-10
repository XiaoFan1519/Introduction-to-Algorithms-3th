#include "s_2_3_4.h"

using namespace Algorithms;

namespace Fan {

	// 插入排序，递归实现
	void InsertSort_Recursion (std::vector<int>& arr, int size) {
		if (1 == size) {
			return;
		}

		int end = size - 1;
		InsertSort_Recursion (arr, size - 1);
		int key = arr[end];
		int j = end;
		while (j > 0 && arr[j - 1] > key) {
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = key;
	}

	s_2_3_4::s_2_3_4 () : Exercise(this)
	{

	}

	s_2_3_4::~s_2_3_4 ()
	{
	}

	const std::string s_2_3_4::Name () const
	{
		return "2.3-4";
	}

	void s_2_3_4::Execute () const
	{
		int size = 20;
		std::vector<int> vec = GenerateElement (size);
		PrintCollection (vec);
		InsertSort_Recursion (vec, size);
		PrintCollection (vec);
		std::cout << "插入排序递归实现" << std::endl;
	}

	s_2_3_4 s234;
}