#include "../Exercise.h"

using namespace Algorithms;

//二分查找
bool Binary_Search(std::vector<int> &arr, int start, int end, int key)
{
	int mid = (end - start) / 2 + start;
	int midValue = arr.at(mid);
	// 终止
	if (start == end)
	{
		return midValue == key;
	}

	if (key > midValue)
	{
		return Binary_Search(arr, mid + 1, end, key);
	}

	return Binary_Search(arr, start, mid, key);
}

// 封装一下
bool Binary_Search(std::vector<int> &arr, int key)
{
	return Binary_Search(arr, 0, arr.size() - 1, key);
}

class E0235 : public Algorithms::Exercise
{
public:
	E0235() : Exercise(this)
	{
	}

	~E0235()
	{
	}

	const std::string Name() const override
	{
		return "2.3-5";
	}

	void Execute() const override
	{
		std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		PrintCollection(vec);
		std::cout << "二分查找递归实现" << std::endl;
		bool ret = Binary_Search(vec, 10);
		std::cout << "查找 10 结果:" << ret << std::endl;

		ret = Binary_Search(vec, 20);
		std::cout << "查找 20 结果:" << ret << std::endl;
	}
};

E0235 e0235;