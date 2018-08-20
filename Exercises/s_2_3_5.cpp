#include "s_2_3_5.h"

using namespace Algorithms;

namespace Fan {

	//���ֲ���
	bool Binary_Search (std::vector<int>& arr, int start, int end, int key)
	{
		int mid = (end - start) / 2 + start;
		int midValue = arr.at (mid);
		// ��ֹ
		if (start == end) {
			return midValue == key;
		}

		if (key > midValue) {
			return Binary_Search (arr, mid + 1, end, key);
		}
		
		return Binary_Search (arr, start, mid, key);
	}

	// ��װһ��
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
		std::cout << "���ֲ��ҵݹ�ʵ��" << std::endl;
		bool ret = Binary_Search (vec, 10);
		std::cout << "���� 10 ���:" << ret << std::endl;

		ret = Binary_Search (vec, 20);
		std::cout << "���� 20 ���:" << ret << std::endl;
	}

	s_2_3_5 s235;
}