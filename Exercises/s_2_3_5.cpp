#include "s_2_3_5.h"

using namespace Algorithms;

namespace Fan {

	//二分查找
	bool Binary_Search (std::vector<int>& arr, int start, int end, int key)
	{
		int mid = (end - start) / 2 + start;
		int midValue = arr.at (mid);
		// 终止
		if (start == end) {
			return midValue == key;
		}

		if (key > midValue) {
			return Binary_Search (arr, mid + 1, end, key);
		}
		
		return Binary_Search (arr, start, mid, key);
	}

	// 封装一下
	bool Binary_Search (std::vector<int>& arr, int key) {
		return Binary_Search (arr, 0, arr.size () - 1, key);
	}

	s_2_3_5::s_2_3_5 () : Exercise (this)
	{

	}

	s_2_3_5::~s_2_3_5 ()
	{
	}

	const std::string s_2_3_5::Name () const
	{
		return "2.3-5";
	}

	void s_2_3_5::Execute () const
	{
		std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		PrintCollection (vec);
		std::cout << "二分查找递归实现" << std::endl;
		bool ret = Binary_Search (vec, 10);
		std::cout << "查找 10 结果:" << ret << std::endl;

		ret = Binary_Search (vec, 20);
		std::cout << "查找 20 结果:" << ret << std::endl;
	}

	s_2_3_5 s235;
}