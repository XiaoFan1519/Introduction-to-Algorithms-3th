#include "../Exercise.h"

using namespace Algorithms;

// 插入排序，递归实现
void InsertSort_Recursion(std::vector<int> &arr, int size)
{
	if (1 == size)
	{
		return;
	}

	int end = size - 1;
	InsertSort_Recursion(arr, size - 1);
	int key = arr[end];
	int j = end;
	while (j > 0 && arr[j - 1] > key)
	{
		arr[j] = arr[j - 1];
		j--;
	}
	arr[j] = key;
}

class E234 : public Algorithms::Exercise
{
public:
	E234() : Exercise(this)
	{
	}

	~E234()
	{
	}

	const std::string Name() const override
	{
		return "2.3-4";
	}
	void Execute() const override
	{
		int size = 20;
		std::vector<int> vec = GenerateElement(size);
		PrintCollection(vec);
		InsertSort_Recursion(vec, size);
		PrintCollection(vec);
		std::cout << "插入排序递归实现" << std::endl;
	}
};

E234 e234;