#include "MergeSort.h"

using namespace Algorithms;

namespace Fan {

	// 合并
	void Merge (std::vector<int>& arr, int start, int mid, int end) {
		int LeftLen = mid - start + 1;
		int RightLen = end - mid;

		// 赋值给临时数组 
		// todo 这里可以优化
		std::vector<int> LeftArr = std::vector<int> (LeftLen);
		std::vector<int> RightArr = std::vector<int> (RightLen);
		for (int i = 0; i < LeftLen; i++)
		{
			LeftArr[i] = arr[start + i];
		}

		for (int i = 0; i < RightLen; i++)
		{
			RightArr[i] = arr[mid + 1 + i];
		}

		// 开始合并
		int LeftIndex = 0, RightIndex = 0, i;
		for (i = start; i <= end; i++)
		{
			// 如果左边或右边已经比较完了，则直接退出循环
			if (LeftIndex >= LeftLen || RightIndex >= RightLen) {
				break;
			}

			// 将符合条件的数据放到指定位置上
			if (LeftArr[LeftIndex] <= RightArr[RightIndex]) {
				arr[i] = LeftArr[LeftIndex];
				LeftIndex++;
			}
			else {
				arr[i] = RightArr[RightIndex];
				RightIndex++;
			}
		}

		// 将剩余的数据拼接
		while (LeftIndex < LeftLen) {
			arr[i] = LeftArr[LeftIndex];
			i++;
			LeftIndex++;
		}

		while (RightIndex < RightLen) {
			arr[i] = RightArr[RightIndex];
			i++;
			RightIndex++;
		}
	}

	// 将数组分解成最小序列
	void Merge_Sort (std::vector<int>& arr, int start, int end) {

		if (start >= end) {
			return;
		}

		int mid = (end + start) / 2;
		Merge_Sort (arr, start, mid);
		Merge_Sort (arr, mid + 1, end);
		Merge (arr, start, mid, end);
	}

	// 归并排序
	void Merge_Sort (std::vector<int>& arr) {

		int n = arr.size ();
		int start = 0;
		int mid = n / 2;
		int end = n - 1;
		Merge_Sort (arr, start, mid);
		Merge_Sort (arr, mid + 1, end);
		Merge (arr, start, mid, end);
	}

	Fan::MergeSort::MergeSort () : Exercise (this)
	{

	}


	MergeSort::~MergeSort ()
	{
	}

	const std::string MergeSort::Name () const
	{
		return "归并算法";
	}

	void MergeSort::Execute () const
	{
		int size = 20;
		std::vector<int> vec = GenerateElement (size);
		PrintCollection (vec);
		Merge_Sort (vec);
		PrintCollection (vec);
		std::cout << "归并排序算法" << std::endl;
	}

	MergeSort mergeSort;
}