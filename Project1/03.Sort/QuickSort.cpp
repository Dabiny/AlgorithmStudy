//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//void QuickSort(int data[], int left, int right);
//int partition(int data[], int left, int right);
//
//int main()
//{
//	int arr[] = { 5,6,7,3,1,9,2,4,8 };
//
//	
//	QuickSort(arr, 0, size(arr) - 1);
//
//	for (auto n : arr)
//	{
//		cout << n << ", ";
//	}
//
//	
//}
//
//void QuickSort(int data[], int left, int right)
//{
//	if (left < right)
//	{
//		int p = partition(data, left, right); // ù������Ҹ� �Ǻ��� �����ϰ� �Ǻ��� �߰����� ���ġ�ϴ� ����
//
//		QuickSort(data, left, p - 1);		// �ݾ� ������ ��ͷ� ����
//		QuickSort(data, p + 1, right);		// �ݾ� ������ ��ͷ� ����
//	}
//	// left�� right�� ������ �迭 �ϳ��� �����Ǿ��ִ� ���̱� ������
//	// �̹� ���ĵȰɷ� ����
//}
//
//int partition(int data[], int left, int right)
//{
//	int pivot = data[left];
//	int i = left + 1; //�Ǻ���ġ ����
//	int j = right;
//
//	while (true)
//	{
//		while (data[i] <= pivot && i <= right)
//			i++;
//		
//		while (data[j] > pivot && j > left)
//			j--;
//		
//		if (i < j)
//			swap(data[i], data[j]);
//		else
//			break;
//	}
//
//	swap(data[left], data[j]);
//
//	return j;
//}


/*
	�� ���� :	���� ���İ� ���������� ���� ���� ���� �˰���. ���� �θ�  ���� ���.
				Ư�� ���Ҹ� �Ǻ��̶�� �����ϰ�, �־��� �迭�� �Ǻ����� ���� �κа� ū �κ����� ����
				���ҵ� �κ� �迭�� ���� ��������� �� ���� ���� �۾��� �ݺ��Ѵ�. 

				5	6	7	3	1	9	2	4	8
				^	^							^
				p	i							j

				- i�� ������Ű�鼭 �Ǻ����� ū data[i]�� ����
				- ������ġ�� �Ǻ����� ũ�� ���߰� j�� ���ҽ�Ŵ
				- j�� ���ҽ�Ű�鼭 �Ǻ����� ���� data[i]�� ����
				- ���ҽ�Ű�ٰ� �Ǻ����� ���� ���� �������� i�� j�� �¹ٲ�
				- �ٽ� ÷���� �ݺ� (�����)
				- �ݺ��ϴٰ� ���� i�� j���� Ŀ������ (i>j)�� �Ǹ� �Ǻ��� data[j]�� �¹ٲ�


				1	4	2	3	5	9	7	6	8
								^
							<<	p  >>
				{�Ǻ����� ������}	{�Ǻ����� ū�ֵ�}
						

				1	4	2	3		5		9	7	6	8
				^					*		^
				p					p

				- �� ���� �κ� �迭�� ���� ��������� ������ �ݺ�


	
	**	�������� ĳ�ø޸��� Ȱ�뵵�� ���⶧���� 
		�������������� �������ĺ��� �������� �������� �ۿ��

		�ð����⵵ : (�ּ��� ���) O(n log n) (�׻� �������� ���ҵǴ� ���)
					(�־��� ���) O(n2) (������ 1��, �ٸ����� n-1���� ���ҵǴ� ���)

		�������� ���� ������.
		
		��������� ���� ���� ���� �˰��� -> c/c++���̺귯�� �⺻�����Ǵ� ���ľ˰���
		std :: sort()
*/

