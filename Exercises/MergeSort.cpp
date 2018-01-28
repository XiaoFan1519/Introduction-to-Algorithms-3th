#include "MergeSort.h"

using namespace Algorithms;

namespace Fan {

	// �ϲ�
	void Merge (std::vector<int>& arr, int start, int mid, int end) {
		int LeftLen = mid - start + 1;
		int RightLen = end - mid;

		// ��ֵ����ʱ���� 
		// todo ��������Ż�
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

		// ��ʼ�ϲ�
		int LeftIndex = 0, RightIndex = 0, i;
		for (i = start; i <= end; i++)
		{
			// �����߻��ұ��Ѿ��Ƚ����ˣ���ֱ���˳�ѭ��
			if (LeftIndex >= LeftLen || RightIndex >= RightLen) {
				break;
			}

			// ���������������ݷŵ�ָ��λ����
			if (LeftArr[LeftIndex] <= RightArr[RightIndex]) {
				arr[i] = LeftArr[LeftIndex];
				LeftIndex++;
			}
			else {
				arr[i] = RightArr[RightIndex];
				RightIndex++;
			}
		}

		// ��ʣ�������ƴ��
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

	// ������ֽ����С����
	void Merge_Sort (std::vector<int>& arr, int start, int end) {

		if (start >= end) {
			return;
		}

		int mid = (end + start) / 2;
		Merge_Sort (arr, start, mid);
		Merge_Sort (arr, mid + 1, end);
		Merge (arr, start, mid, end);
	}

	// �鲢����
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
		return "�鲢�㷨";
	}

	void MergeSort::Execute () const
	{
		int size = 20;
		std::vector<int> vec = GenerateElement (size);
		PrintCollection (vec);
		Merge_Sort (vec);
		PrintCollection (vec);
		std::cout << "�鲢�����㷨" << std::endl;
	}

	MergeSort mergeSort;
}