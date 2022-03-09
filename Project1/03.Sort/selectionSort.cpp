

/*
    �������� (selection sort)
        -    ���ĵ��� ���� ���ҵ� �߿��� �ּҰ��� ã�� �� ���� ���ҿ� ��ȯ
             �ð����⵵�� O(n2)�̴�

		4  2  3  5  1
		*           * swap (�ּҰ��� ã�� ���ʰ� ��ȯ)
		1  2  3  5  4
		   *		  �ڱ� �ڽŰ� ���� 
		1  2  3  5  4
			  *       �ڱ��ڽ� ����
		1  2  3  4  5
		         *  *  ���� ���� 
		1  2  3  4  5
		            *  �������� �ڱⰡ �� ũ�ϱ� �������ľ˰����� ��Ÿ����
					
*/

//#define _CRT_SECURE_NO_WARNINGS
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//void SelectionSort(int data[], int num);
//
//int main()
//{
//	int arr[100] = {};
//	int n = 0;
//
//	cin >> n; //�迭ũ�� ���ϱ� 
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	SelectionSort(arr, n); //���� ������ arr�� n��� �Լ��� ����
//	
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << ' ';
//	}
//}
//

//void SelectionSort(int data[], int num)
//{
//	for (int i = 0; i < num - 1; i++)
//	{
//		int idx = i;
//
//		// �ּҰ��� ���� �ε���(idx)�� �˾Ƴ���
//		for (int j = i + 1; j < num; j++)
//		{
//			if (data[j] < data[idx])
//			{
//				idx = j;
//			}
//
//		}
//
//		swap(data[i], data[idx]);
//	}
//}