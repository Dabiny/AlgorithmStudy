//#define _CRT_SECURE_NO_WARNINGS
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//void MergeSort(int data[], int left, int right);
//void Merge(int data[], int left,int mid, int right);
//
//int main()
//{
//	int arr[100];
//
//	int num;
//	cin >> num;
//
//	int left = 0;
//	int right = num - 1;
//
//	for (int i = 0; i < num; i++)
//	{
//		cin >> arr[i];
//	}
//
//	MergeSort(arr, left, right);
//
//	for (int i = 0; i < num; i++)
//	{
//		cout << arr[i] << ' ';
//	}
//
//}
//
//void MergeSort(int data[], int left, int right) 
//					//���ڴ� �迭, �迭�ǿ���, �迭�ǿ�����
//{
//	if (left < right) //���� ������ �迭���̰� 1�̱� ������ �������� Ÿ������
//	{
//		int mid = (left + right) / 2; //�ݰ���
//		
//		MergeSort(data, left, mid); //�ڱ��ڽ��� �ٽ�ȣ�⿡ �ݰ��׿� �ǹݰ���..����
//		MergeSort(data, mid + 1, right); //�����ʵ� �ݰ����ݰ��� ������ 
//
//		Merge(data, left, mid, right); //���� �κ�
//	}
//}
//
//void Merge(int data[], int left, int mid, int right)
//{
//	int i = left;
//	int j = mid + 1;			
//	int k = left;
//
//	int merge[100] = {};
//
//	/*
//		
//		2	4	6	7	|	1	3	5	8
//		^i			mid		^j
//
//		0	0	0	0	0	0	0	0	0
//		^k
//
//	*/
//
//	while (i <= mid && j <= right)
//	{
//		if (data[i] <= data[j])
//		{
//			merge[k++] = data[i++];
//		}
//		else
//		{
//			merge[k++] = data[j++];
//		}
//	}
//
//	while (i <= mid)
//	{
//		merge[k++] = data[i++];
//	}
//	while (j <= right)
//	{
//		merge[k++] = data[j++];
//	}
//
//	for (int x = left; x <= right; x++)
//	{
//		data[x] = merge[x];
//	}
//}


/*
	�������� :	���������� ���� ���� �˰����� �ϳ�
				���� �����ؼ� �� �κ��� �迭���Ұ� �ϳ��� �ɴ뤨���� �ɰ�
				�� �κ��� �迭�� �ٽ� ���� �̶� ���յ� �迭�� ���Ұ� 
				������ ���� ������ �����ϵ��� ������ ����


	2	6	7	4	1	8	5	3 ����


	2	6	7	4	|	1	8	5	3 �ݰ�		

	2	6 | 7	4		1	8 |	5	3 �ݰ��ǹݰ�
	
	2 | 6 | 7 | 4		1 | 8 | 5 | 3  �ϳ��� �ɶ����� �ݰ�

	----------------------------------- ������� ����
										������� ����

	2	6 |	7	4		1	8 |	3	5 ����

	2	4	6	7	|	1	3	5	8 ������ ����


	 1	2	3	4	5	6	7	8 �ϼ�
	 (�̰����� �����迭�� �ӽ÷� �ΰ� ����Ÿ�迭�� �ٽ� �������ִ� ������� �����)


	 * �ð����⵵ : O(n log n)

	 Ư¡ : ������ �����̸� �������� �ʱ������ ������ ũ�� ���� ���� (���������� ������)
			
			���� ������ �̷������ ������ �ΰ��� �κ� �迭�� �����ϴ� �ܰ���

			���� �������� �ӽ� �迭�� �ʿ���� �������⵵ :O(n)

*/