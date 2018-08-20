#include "../Exercise.h"

using namespace Algorithms;

// 插入排序
void InsertSort(std::vector<int> &arr)
{
	size_t size = arr.size();
	for (int i = 1; i < size; i++)
	{
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

class E0212 : public Algorithms::Exercise
{
public:
	E0212() : Exercise(this)
	{
	}

	~E0212()
	{
	}

	const std::string Name() const override
	{
		return "2.1-2";
	}
	void Execute() const override
	{
		int size = 20;
		std::vector<int> vec = GenerateElement(size);
		PrintCollection(vec);
		InsertSort(vec);
		PrintCollection(vec);
		std::cout << "插入排序" << std::endl;
	}
};

E0212 e0212;