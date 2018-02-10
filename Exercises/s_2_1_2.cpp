#include "s_2_1_2.h"

using namespace Algorithms;

namespace Fan {

	// 插入排序
	void InsertSort (std::vector<int>& arr) {
		int size = arr.size ();
		for (int i = 1; i < size; i++) {
			int key = arr[i];
			int j = i - 1;
			while (j >= 0 && arr[j] > key) {
				arr[j + 1] = arr[j];
				j--;
			}
			arr[j + 1] = key;
		}
	}

	s_2_1_2::s_2_1_2 () : Exercise(this)
	{

	}

	s_2_1_2::~s_2_1_2 ()
	{
	}

	const std::string s_2_1_2::Name () const
	{
		return "2.1-2";
	}

	void s_2_1_2::Execute () const
	{
		int size = 20;
		std::vector<int> vec = GenerateElement (size);
		PrintCollection (vec);
		InsertSort (vec);
		PrintCollection (vec);
		std::cout << "插入排序" << std::endl;
	}

	s_2_1_2 s212;
}